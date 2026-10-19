# CRLS H743 Flight Controller

![Top view of the flight controller](images/top.jpg)

[ArduPilot](https://ardupilot.org/) compatible STM32H743 flight controller.

## Features

- **MCU:** STM32H743 (BGA)
- **IMUs:** Triple redundant, each on its own SPI bus
- **PWM outputs:** 16 channels
- **UARTs:** 5
- **CAN:** 2 buses
- **Storage:** microSD card

With this set of I/O, the board is versatile enough for almost any UAV setup.

## Repository layout

| Path | Contents |
| --- | --- |
| [hardware/h743/](hardware/h743/) | Altium Designer project (schematics, PCB, stackup, BOM, output job) |
| [hwdef/CRLSH743/](hwdef/CRLSH743/) | ArduPilot hardware definition (`hwdef.dat`, bootloader `hwdef-bl.dat`, `defaults.parm`) |
| [docs/datasheets/](docs/datasheets/) | Reference datasheets |
| [images/](images/) | Board renders and photos |

## Building ArduPilot firmware

Copy `hwdef/CRLSH743` into `libraries/AP_HAL_ChibiOS/hwdef/` in an ArduPilot checkout, then build:

```sh
./waf configure --board CRLSH743
./waf copter
```

To build the bootloader:

```sh
./Tools/scripts/build_bootloaders.py CRLSH743
```
