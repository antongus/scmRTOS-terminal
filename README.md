scmRTOS-terminal
================

Sample embedded project to demonstrate usage of [scmRTOS][1] embedded RTOS and my [stm32tpl][2] library.

In this project uses the `pin.h`, `stm32_uart.h`, `commands.h` and `vars.h` modules.

To clone project with submodules use
`git clone --recursive https://github.com/antongus/scmRTOS-terminal`

####Prerequisites:
- GCC cross-compiler for ARM Cortex-M3 controllers (I use [gcc-arm-embedded][3]);
- st-flash tool from [texane/stlink][4] on linux, or
- ST-LINK_CLI utility from ST on Windows.

####Build and flash instructions:
- type `make` on shell prompt to build;
- `make program` to load program into microcontroller.

Instead of typing commands on shell prompt one can use Eclipse CDT IDE to build project and flash microcontroller.
Just load Eclipse project and select `build` and `program` from "make targets" window.

[1]: https://github.com/scmrtos
[2]: https://github.com/antongus/stm32tpl
[3]: https://launchpad.net/gcc-arm-embedded
[4]: https://github.com/texane/stlink
[picture]: https://cloud.githubusercontent.com/assets/6680984/10188008/9fc17808-6775-11e5-832f-634c178aa638.jpg
