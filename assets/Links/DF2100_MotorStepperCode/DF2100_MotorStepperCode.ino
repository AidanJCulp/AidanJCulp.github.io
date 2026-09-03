#include <AccelStepper.h>

// ---------------- Pins ----------------
const int STEP_PIN   = 2;
const int DIR_PIN    = 3;
const int EN_PIN     = 4;

const int BUTTON_PIN = 7;   // latching button input
const int LIMIT_PIN  = 8;   // limit switch input

const int LED_R  = 11;
const int LED_G  = 9;
const int LED_B  = 10;

// ---------------- Stepper Setup ----------------
AccelStepper stepper(AccelStepper::DRIVER, STEP_PIN, DIR_PIN);

// ---------------- Adjustable Settings ----------------
// Change these two values as needed
float flowRate_mL_min   = 0.8;   // adjustable in code
float syringeDiameter_mm = 19.2; // adjustable in code %19.2mm %15mm

// ---------------- Mechanical Constraints ----------------
const int motorSteps = 200;
const int microsteps = 8;               // 1/8 microstepping
const float lead_mm_per_rev = 2.0;      // lead screw pitch

// ---------------- State Machine ----------------
enum State { RUNNING, PAUSED, EMPTY };
State state = PAUSED;

// ---------------- Derived ----------------
float stepsPerMM;
float stepsPerSec;

// ---------------- LED ----------------
void setLED(bool r, bool g, bool b) {
  digitalWrite(LED_R, r ? HIGH : LOW);
  digitalWrite(LED_G, g ? HIGH : LOW);
  digitalWrite(LED_B, b ? HIGH : LOW);
}

void updateLED() {
  if (state == RUNNING) setLED(false, true, false);      // Green
  else if (state == PAUSED) setLED(true, true, false);    // Yellow
  else setLED(true, false, false);                        // Red
}

// ---------------- Motion Conversion ----------------
void computeSpeed() {
  float radius = syringeDiameter_mm / 2.0;
  float area = PI * radius * radius;  // mm^2

  float mm_per_min = (flowRate_mL_min * 1000.0) / area;
  float mm_per_sec = mm_per_min / 60.0;

  stepsPerMM = (motorSteps * microsteps) / lead_mm_per_rev;
  stepsPerSec = mm_per_sec * stepsPerMM;

  if (stepsPerSec < 0.1) stepsPerSec = 0.1;

  stepper.setMaxSpeed(stepsPerSec);
  stepper.setSpeed(stepsPerSec);
}

// ---------------- Setup ----------------
void setup() {
  pinMode(EN_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LIMIT_PIN, INPUT_PULLUP);

  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);

  // ---------------- Direction Constraints ----------------
  pinMode(DIR_PIN, OUTPUT);
  digitalWrite(DIR_PIN, HIGH); // choose direction

  digitalWrite(EN_PIN, LOW); // enable driver

  //stepper.setAcceleration(1000); // smooth motion
  computeSpeed();
  updateLED();
}

// ---------------- Main Loop ----------------
void loop() {
  // Limit switch pressed = HIGH
  if (digitalRead(LIMIT_PIN) == HIGH) {
    state = EMPTY;
    digitalWrite(EN_PIN, HIGH); // disable motor
    updateLED();
    return;
  }

  // Latching switch to GND:
  // LOW = ON, HIGH = OFF
  bool pumpOn = (digitalRead(BUTTON_PIN) == LOW);

  if (state == EMPTY) {
    // clear EMPTY only after switch is turned OFF
    if (!pumpOn) {
      state = PAUSED;
      updateLED();
    }
    digitalWrite(EN_PIN, HIGH);
    return;
  }

  if (pumpOn) {
    state = RUNNING;
    digitalWrite(EN_PIN, LOW);
    stepper.runSpeed();
  } else {
    state = PAUSED;
    digitalWrite(EN_PIN, HIGH);
  }

  updateLED();
}