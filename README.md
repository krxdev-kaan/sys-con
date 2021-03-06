# sys-con (LED Version :D)

#### A Modded version of sys-con to add LED Notifications if any controller plugged/unplugged.
#### A Nintedo Switch sysmodule for third-party controller support. No man-in-the-middle required! 
###### \[Switch FW 5.0.0+\]


## Description
This sysmodule aims to provide complete functionality for most popular game controllers not supported by Nintendo Switch.
At the current moment, **only USB connection** is supported. 

This app is missing a lot of features. For more information, see the [issues page](https://github.com/cathery/sys-con/issues).

### ⚠ I can't support your generic 3rd party HID controller yet.
It is a limitation of the firmware and I'm looking to work around it.

### ⚠ If you get the error 2003-0008 (0x1003):
You're running too many sysmodules. Disable other memory demanding sysmodules like sys-ftpd or ldn_mitm.

### ⚠ If you have a second-generation Dualshock 4:
You need to go to `sdmc:/config/sys-con/config_global.ini` and change the value of `use_dualshock_2nd_generation` from **false** to **true**.



## Install Original Sys-Con

Grab the latest zip from the [releases page](https://github.com/cathery/sys-con/releases). Extract it in your SD card and boot/reboot your switch.

## Install This Modded Sys-Con

Same procedure through this [releases page](https://github.com/krxdev-kaan/sys-con/releases).

## Config

sys-con comes with a config folder located at `sdmc:/config/sys-con/`. It contains options for adjusting stick/trigger deadzone, as well as remapping inputs. For more information, see `example.ini` in the same folder. All changes to the files will be updated in real time.

## Progress roadmap
- [x] **~~Docked USB Support~~**
- [x] **~~\[5.0.0-7.0.0\] FW Version Support~~**
- [x] **~~Xbox 360 Controller Support~~**
- [x] **~~Xbox One X/S Controller Support~~**
- [x] **~~Dualshock 3 Support~~**
- [x] **~~Undocked USB Support~~** Works with a USB-C OTG adapter. Some knock-off brands may not support OTG.
- [x] **~~Xbox 360 Wireless adapter~~**
- [x] **~~Dualshock 4 Support~~**
- [ ] **[Xbox One Wireless adapter](https://github.com/cathery/sys-con/issues/36)**
- [ ] **[Rumble Support](https://github.com/cathery/sys-con/issues/1)**
- [ ] **[Bluetooth Support](https://github.com/cathery/sys-con/issues/5)**
- [ ] **[Motion Controls Support](https://github.com/cathery/sys-con/issues/9)**
- [ ] **Config application**

## Building (For developers)

The sysmodule uses the latest release of [libnx](https://github.com/switchbrew/libnx), grabbed from pacman.
After opening a console inside the project folder, you can type `make sysmodule -j8` to build a sysmodule nsp file, or `make applet -j8` to build an applet nro file. If no option is provided, it picks sysmodule.

## Support the original sys-con developer !
[![ko-fi](https://www.ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/H2H316ZQV)

If you wish to see added support for more controllers in the future, consider funding my project on Ko-fi!

## Responsibility
I'm not responsible for anything. Including Dead or Crashing Switches.
