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
| [250 mm lead screw with 2 mm pitch and 8 mm lead](https://amzn.to/3infwI0)                      | 1 |
| [1/4" x 8 mm flexible coupler](https://openbuildspartstore.com/1-4-x-8mm-flexible-coupling/)                                         | 1                   |
| [200 mm linear rod with 8 mm diameter](https://www.amazon.com/dp/B07MPGWJMS/ref=cm_sw_em_r_mt_dp_X5AQS0ES7JH8JG83AAZ3)                                 | 1                   |  
| [LMUU linear bearing for 8 mm diameter rod](https://www.amazon.com/gp/product/B087WPGQ8T/ref=ppx_yo_dt_b_asin_image_o00_s00?ie=UTF8&psc=1)                             | 1                   | 
| [20 x 40 V-Slot aluminum linear rail](https://openbuildspartstore.com/v-slot-20x40-linear-rail/)                                  | 1                   | 
| [NEMA 17 stepper motor](https://www.amazon.com/gp/product/B07LF898KN/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1)                                                | 1                   | 
| [MEAN WELL RQ-65D AC-DC quad output power supply](https://www.amazon.com/dp/B005T9HGLI/ref=cm_sw_em_r_mt_dp_A8CZ056TM52EJGZTGZGR?_encoding=UTF8&psc=1) | 1                 | 
| [Arduino Uno](https://www.amazon.com/dp/B007R9TUJE/ref=cm_sw_em_r_mt_dp_TY8JGK0CJD1JEJM4BNNJ)                                                          | 1                   | 
| [A4988 stepper driver](https://www.amazon.com/dp/B01FFGAKK8/ref=cm_sw_em_r_mt_dp_V0YKTYKDWMR8WHTKA53T?_encoding=UTF8&psc=1)                                                 | 1                   | 
| [REXQualist 400-point breadboard](https://www.amazon.com/dp/B082VYXDF1/ref=cm_sw_em_r_mt_dp_N6Q28CAGPAYCKCSJKDDC?_encoding=UTF8&psc=1)                                      | 1                   | 
| [Panel mount latching push buttons](https://amzn.to/3VxQ29h)                                    | 1                   | 
| [Panel mount non-latching push buttons](https://www.amazon.com/Non-Latching-Momentary-Non-Locking-Normally-oorbell/dp/B0B63PT9PB/ref=sr_1_3adgrpid=1331510951630385&dib=eyJ2IjoiMSJ9.LrB4lPX7ZtipmPMcUgqllMQjLafqyAYwHec6e_WH49-H3N4f4GCO6cAlj_O5UEgP8XDJW64eJnWlgiH6OH6Rz9IQxmqY-zIuQ2hYwyNc7u0-PdK3c4xwU38_j_ZPFE4a3ki6KGEwp3HCvmGGg1e_iA.WlLBeu58unGL-fJ_7WYOiImrYylo8l2mhe_YpN0LTEo&dib_tag=se&hvadid=83219689318242&hvbmt=bp&hvdev=c&hvlocphy=83973&hvnetw=o&hvqmt=p&hvtargid=kwd-83220462151988%3Aloc-190&hydadcr=7664_13467799&keywords=non+latching+push+button&qid=1705252826&sr=8-3)                                    | 2            | 
| [Limit switch](https://www.amazon.com/gp/product/B073TYWX86/ref=ppx_yo_dt_b_asin_image_o01_s00?ie=UTF8&psc=1)                                                         | 1                  | 
| [RGB common cathode LED](https://www.amazon.com/dp/B0194Y6MW2/ref=cm_sw_em_r_mt_dp_FW3CFQT7ZGFQ2R04N6G3?_encoding=UTF8&psc=1)                                               | 1                   | 
| [F688ZZ flange ball bearing](https://www.amazon.com/uxcell-Bearing-8x16x5mm-Shielded-Bearings/dp/B07RVHTY3V/ref=sr_1_4?crid=17UOU208N0O6F&dib=eyJ2IjoiMSJ9.HOTRTml3NQ0GPksGnan0AGR_ZrBvAsHZDZIoFXeNkJUnm-Y7qAfxgFtQRODDs4BHl3lyCcqZF6tDDubJQ_6YcuOlp6or0hGFGhEKgltzqkSTSrqXSLjCqh4yMK2-ASnS2JMq0S9UtflWCBr-DovT6A.FHSc0qN8xVYI7WmieDQ8KQicMlXriLO6b6dwLTyHBIA&dib_tag=se&keywords=f688zz%2Bflanged%2Bbearings&qid=1705259259&sprefix=f688zz%2Bflanged%2Bbearings%2Caps%2C78&sr=8-4&th=1)                                               | 2                   | 
| [Closed lock collar for lead screw](https://www.amazon.com/Befenybay-Collar-Shaft-Screw-Printer/dp/B07V41FRZS/ref=sr_1_7_sspa?adgrpid=1334808468938516&dib=eyJ2IjoiMSJ9.BGJaFDPaBWdW9TI9SqbWf_WtLOCunnxYj6tvXCLaQT62a6CAMWn0zdnSrJWk8Xg8SvCvqtA87HpjbQA5txjOd7T32sKzA2Fp2_DX0dBiK9DOiPCxlMhDKF6SoNI67epE-LNRK7AQraAwQ_hO2zZcsw.SP_wFTwcTRiAT3X_LD_eFoZMRUn1veldQxwBD3J61OA&dib_tag=se&hvadid=83425722910178&hvbmt=be&hvdev=c&hvlocphy=83973&hvnetw=o&hvqmt=e&hvtargid=kwd-83426418357563%3Aloc-190&hydadcr=951_1014987053&keywords=8mm%2Block%2Bcollar&qid=1705259520&s=industrial&sr=1-7-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9tdGY&th=1)                                               | 2                   | 
| [Open lock collar for linear rod](https://www.amazon.com/10PCS-Shaft-Collar-Aluminum-Linear/dp/B0C46G8G1R/ref=sr_1_4?crid=1UHY2GPNTBI60&dib=eyJ2IjoiMSJ9.Z4VFK7TCNkQVh6ZSSoBEDDt7yQi93S6YVeA6kHIQea_7zQ7Ttgalkgt18mbeFgWAJdnhIjSctNspfIGbRoHQDfqUTvkUShsk2fWDLT8ww9f0m5QixwMSYwthMgkI-5DOqpEXEJgBaAmqAoVO0m1qfw.9o3Ft8QwFqLbCMHWCr7MB9d6XibN7guKKHFYlRWI4xY&dib_tag=se&keywords=8mm%2Block%2Bcollar%2Blinear%2Brod&qid=1705259641&s=industrial&sprefix=8mm%2Block%2Bcollar%2Blinear%2Bro%2Cindustrial%2C87&sr=1-4&th=1)    | 2                   | 
| [Tr8x8 brass nut](https://www.amazon.com/2-Pack-Thread-Starts-Printer-Machine/dp/B09F2WGTH7/ref=sr_1_62?asc_source=01HFY6QA7Q8N1TT2Z879WGSZ46&tag=snx79-20&th=1)                                                 | 1                   | 
| M3 x 8 mm thread forming screws                                                 | 4          | 
| M3 x 10 mm bolt                                               | 4                   | 
| M5 Tee-Nut                                             | 8                   | 
| M5 x 8 mm bolt                                                 | 8                | 
| Electrical components including wires and resistors                  | Varies depending on wiring schematic                 |

<!-- Thanks to Charlie Frech | charlesfrech.github.io -->

---

[Arduino Code](https://github.com/AidanJCulp/AidanJCulp.github.io/blob/main/assets/Links/DF2100_MotorStepperCode/DF2100_MotorStepperCode.ino)

---

{% include gallery caption="Syringe Pump Gallery" %}
