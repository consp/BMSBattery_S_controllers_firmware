# Important

Caution! this is not a professional project. Anything you do with this firmware is at your own risk. In any case, use a quick fuse in the power supply to minimize the risk of destroying the controller, battery or motor!

Please read and reread the [wiki](https://github.com/stancecoke/BMSBattery_S_controllers_firmware/wiki).

Modification here are a mismatch of other repositories and my own, in an attempt to improve it ... a bit.

## Preface

Many thanks to the team of the Forumscontroller, Main functions are from [there](https://github.com/jenkie/Arduino-Pedelec-Controller)!

This is an unmaintained fork of [stancecoke's project(not maintained)](https://github.com/stancecoke/BMSBattery_S_controllers_firmware)
which is an unmaintained fork of [casainho's project(not maintained)](https://github.com/OpenSource-EBike-firmware/BMSBattery_S_controllers_firmware)

## About the project

This firmware replaces the closed source one on Kunteng sine wave controllers. It enables you to change basically anything about the way the controller reacts to inputs (throttle, PAS, torque sensor, brake, displays) and handles different modes/states concerning  power output.
[A graphical tool](https://github.com/stancecoke/BMSBattery_S_controllers_firmware/wiki/04-The-Java-Tool) is available, which allows the use of the firmware even for less experienced Windows users without programming knowledge. With the [BluOsec android app](https://github.com/stancecoke/BMSBattery_S_controllers_firmware/wiki/05-The-BluOSEC-Android-App) you can control the assist level and set many parameters at runtime.  [Download it by clicking this link](https://github.com/Xnyle/bluosec-apk/raw/master/BluOsec-release.apk).

### Help out yo

 If you want something added / changed that isn't already implemented / beta / buggy, you have to get involved yourself. This is a hobbyists project and there is no one else to blame than yourself if something isn't working as desired ;-)

### What works  

* Sine wave control with simplified FOC  
* Overvoltage (regeneration) and undervoltage protection
* Motor stop while braking
* Driving modes:  
    * PAS sensor with torque simulation and reverse step detection
    * Throttle (also as override)
    * Torque sensor  
    * Recuperation via analog "thumb brake" signal or digitally by brake switch  
    * Start-up support in torque sensor mode  
    * Pushing aid
    * Block commutation during start-up (only if you have a motor without "weird" angle definitions.
* Displays:
    * Kunteng LCD3 / LCD5 (C/P parameters mapped differently)
    * BluOsec App as Display / as Trip monitor / for on the fly configuration  
    * Kingmeter J-LCD and Forerider App (not tested for a long time now)
    * (Added) Kunteng LCD8 with cleaner display code

Other improvements:
* (Modified) Modified almost all float code to either use 16bit or 32bit fixed point math. Slow loop now is less slow.
* (Modified) PMSM modification for angle correction, since you need a lot more lead to get it running and do not want lagging correction.
* (Added) UART communication with a python script to determine hall angles and motor delta angle, will only get you in the ballpark, under development
* (Removed) Interupt for brake signals. It wuold trigger so much in the bouncing region of my sensors it would kill any operation in place. It also wasn't used ...
* (Modified) angle correction now runs on every frame instead of just the 0 frames to aid in startup and smooth running.

### What doesn't

* You debug it thoroughly
* You tell us / patch it yourself ;-)

## LCD8 settings

* P1 is the motor delta angle. Make sure you set this!
* P2 is the phase configuration, leave on 0 or 1 for normal, 2-6 are the other phase options
* P3 (0/1) sets PWM_AUTO_OFF option
* P4 (0/1) sets PAS_INVERTED option
* C1 (0-7) bit 2 sets IDLE_DISABLES_OFFROAD, bit 1 sets BRAKE_DISABLES_OFFROAD, bit 0 sets OFFROAD_ENABLED, set to 7 for all and 0 for off
* C2 (0/1) sets ASSIST_LVL_AFFECTS_THROTTLE
- C5 (0-7) sets ALTERNATE_WAVETABLE settings, see code or leave at 0
- C12 (0-7) bit 2 sets SPEED_INFLUENCES_TORQUE_SENSOR, bit 1 sets SPEED_INFLUENCES_REGEN, bit 0 sets DIGITAL_REGEN
- C15 (0/1) sets ANGLE_CORRECTION_ENABLED
- L1 (0/1/2/3) New custom throttle settings, disable for legal use in EU (only allowed for walk), 1 sets throttle as regen, 2 sets unrestricted and 3 sets unrestricted and regen
- L2 (0/1) sets AVOID_MOTOR_CYCLES_JITTER
- L3 (0/1) sets DYNAMIC_ASSIST_LEVEL

## For further reading

The documentation on the project, aka wiki, can be found [here](https://github.com/stancecoke/BMSBattery_S_controllers_firmware/wiki)  

The corresponding thread in the german Pedelecforum [can be found here](https://www.pedelecforum.de/forum/index.php?threads/custom-rom-f%C3%BCr-kunteng-s06s-kt36-controller.50061/)  

## Want to help

There is always things to improve, don't hesitate to get involved if you have improvements in mind.
