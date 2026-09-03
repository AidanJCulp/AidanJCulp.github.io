---
title: "Precision Syringe Pump"
excerpt: "A 3D-printed, Arduino-controlled syringe pump designed to deliver fluids at a precise, adjustable flow rate using a stepper motor and lead screw mechanism."

header:
  image: /assets/img/SyringePumpBanner.png
  teaser: /assets/img/SyringePumpRealLife.png
gallery:
  - image_path: assets/img/SyringePumpRealLife.png
  - image_path: assets/img/SyringePumpSwitch.png
  - image_path: assets/img/SyringePumpElectricalDiagram.png
   
---

---

# Purpose

Design and prototype an automated syringe pump that can precisely administer liquids over a long period of time.

---

# Features

* Compatible with 10 mL & 20 mL syringes
* Adjustable flow rate
* Uses an Arduino-controlled NEMA 17 stepper motor
* Has a limit switch for automatic end-of-travel detection
* 1/8 microstepping for smooth motion
* Start/pause latching button
* RGB LED status indicator
* Fully enclosed electronics compartment
* 3D-printed custom components

---

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b60281158c5365fdbc940d9?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

---

# Operating Instructions
* Connect the syringe pump to the power supply
* Fill either the 10 mL or 20 mL syringe with the desired liquid
* Insert the syringe into the support brackets
* Press the latching start/pause button to begin operation
* During operation, the LED should be green
* Press the start/pause button again to pause operation
* The LED should turn yellow
* When the syringe reaches its end position, motion stops automatically and the LED turns red
* Refill or replace the syringe and reposition the carriage for the next cycle

---

# Off-the-Shelf Parts

|      Part                                                            |     Quantity            |
| ---------------------------------------------------------------------|:--------------------------:|
| NEMA 17 stepper motor                                              | 1 | 
| MEAN WELL RQ-65D AC-DC quad output power supply                    | 1                 | 
| Arduino Uno                                                        | 1                   | 
| A4988 stepper driver                                               | 1                   | 
| REXQualist 400-point breadboard                                    | 1                   | 
| Panel mount latching push buttons                                  | 1                   | 
| Limit switch                                                       | 1                  | 
| RGB common cathode LED                                             | 1                   |
| 250 mm lead screw with 2 mm pitch and 8 mm lead                    | 1 |
| 1/4" x 8 mm flexible coupler                                       | 1 |
| 200 mm linear rod with 8 mm diameter                               | 1                   |  
| LMUU linear bearing for 8 mm diameter rod                          | 1                   | 
| 20 x 40 V-Slot aluminum linear rail                                | 1                   | 
| F688ZZ flange ball bearing                                         | 2                   | 
| Closed lock collar for lead screw                                  | 2                   | 
| Open lock collar for linear rod                                    | 2                   | 
| Tr8x8 brass nut                                                    | 1                   | 
| M3 x 8 mm thread forming screws                                    | 4          | 
| M3 x 10 mm bolt                                                    | 4                   | 
| M5 Tee-Nut                                                         | 8                   | 
| M5 x 8 mm bolt                                                     | 8                | 
| Electrical components including wires and resistors                | Various                 |

<!-- charlesfrech.github.io -->

---

[Arduino Code](https://github.com/AidanJCulp/AidanJCulp.github.io/blob/main/assets/Links/DF2100_MotorStepperCode/DF2100_MotorStepperCode.ino)

---

{% include gallery caption="Syringe Pump Gallery" %}
