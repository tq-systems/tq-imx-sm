The System Manager (SM) is an application that runs on a Cortex-M processor on many NXP i.MX processors.
The Cortex-M is the boot core, runs the boot ROM which loads the SM (and other boot code), and then
branches to the SM. The SM then configures some aspects of the hardware such as isolation mechanisms
and then starts other cores in the system. After starting these cores, it enters a service mode where
it provides access to clocking, power, sensor, and pin control via a client RPC API based on ARM's
[System Control and Management Interface (SCMI)](https://developer.arm.com/documentation/den0056/latest/).
To facilitate isolation between cores, the SM partitions the SoC into logical machines (LM) which have
statically configurable access rights to both hardware and RPC API calls.

Supported development environments include Ubuntu 2020.04, 2022.04, and 2024.04.

**If upgrading, please follow the instructions below to build and review the release notes to understand
required board port and configuration file changes.**

Download from GitHub
====================

To download from github, first install git:

```
sudo apt update
sudo apt -y install git
```

To get started with the SM on an NXP board, download the [github](https://github.com/nxp-imx/imx-sm)
repository.

To get started with the SM on an TQ-Systems GmbH SoM, download the [github](https://github.com/tq-systems/tq-imx-sm)
repository.

To clone the repo for NXP EVK:

```
git clone https://github.com/nxp-imx/imx-sm
```

To clone the repo for TQ-Systems GmbH SoM:

```
git clone https://github.com/tq-systems/tq-imx-sm
```

Building the Documentation
==========================

To build the full documentation, install the required tools:

    sudo apt -y install make doxygen texlive texlive-latex-extra

Then change to the documentation directory (sm/doc) and execute the following:

    make clean
    make html

The output is written to the build directory (sm/doc/build/html). The top level for the html output
is the *index.html* file.

To build the release notes:

    make clean
    make rn

The output is sm/doc/sm-rn.pdf (also an html version in sm/doc/build/html).

Supported versions of doxygen include 1.8.17, 1.9.1, and 1.9.8.

Installing the Toolchain
========================

Compiling requires an ARM cross-compiler. Download and install the required arm-none-eabi toolchain from
the [Arm GNU Toolchain Downloads](https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads)
website. For example, from the x86_64 Linux hosted cross toolchains AArch32 bare-metal target
(arm-none-eabi) section, download the *.xz file to a directory for the tool chain (e.g. tools) and then:

    tar xvf *.xz

Set the TOOLS shell variable to the directory the toolchain is installed in. For example:

    export TOOLS=~/tools

When the toolchain is in a directory like arm-gnu-toolchain-\*-x86_64-arm-none-eabi in this
*tools* directory.

Also ensure the Linux installation is up-to-date and then install:

    sudo apt -y install make gcc g++-multilib srecord

See the *Release Notes* for the exact toolchain version the SM was tested with.

Compiling an SM Image
=====================

To get started with the SM you need to [download](#download-from-github) the source code.

To compile, see the following example to be executed from the top directory of the code base.
Use the right configuration for your SoM and use case:

`make config=tqma95xxsa-2gb cfg`  (optional if the associated tqma95xxsa-2gb.cfg file has been changed)

`make config=tqma95xxsa-2gb all`

Then copy the resulting binary image file, *build/tqma95xxsa-2gb/m33_image.bin*, to the iMX95 directory of the
[mkimage tool](https://github.com/nxp-imx/imx-mkimage). Build a boot container using mkimage, program
it to the boot device, and boot the board. The SM will display a debug monitor prompt on the M33 debug
UART.

(The above used config is for Linux system testing on TQMa95xxSA SoM with 2GB RAM.)

Following configurations are supported in this release:

Old naming scheme:

| name               | purpose                                            |
| :----------------- | : -----------------------------------------------: |
| tqma94xxla-2gb     | TQMa94xxLA 2 GiB LPDDR4, only Cortex-A55 supported |
| tqma95xxla-4gb     | TQMa95xxLA 4 GiB LPDDR5, only Cortex-A55 supported |
| tqma95xxsa-2gb     | TQMa95xxSA 2 GiB LPDDR5, only Cortex-A55 supported |
| tqma95xxsa-2gb-m7  | TQMa95xxSA 2 GiB LPDDR5, Cortex-A + Cortex-M7      |
| tqma95xxsa-4gb     | TQMa95xxSA 4 GiB LPDDR5, only Cortex-A55 supported |

Naming scheme:

Configuration names have a fixed length: tqm<nnn><f><mm>g[0,5]c<vvv>, where

* `nnn` denotes the i.MX CPU family (not all are supported yet)
  * 943: i.MX943
  * 95_: i.MX95
  * 952: i.MX952

* `f` denotes the SoM form factor (not all are in use)
  * c: generic board to board connector
  * l: generic LGA / solderable
  * s: SMARC-2

* `<mm>g[0,5]` denotes the RAM size
  * mm: size in GiB
  * [0,5]: remainder, 5 expresses 512 MiB

* `vvv` denotes the configuration variant as ordinal number.
  * 000: all usable hardware assigned to Cortex-A cluster, for TQ-Systems GmbH starter kit
  * 001: BSP example configuration for multicore support, for TQ-Systems GmbH starter kit
  * more as needed

| name               | purpose                                            |
| :----------------- | : -----------------------------------------------: |
| tqm943l02g0c000    | TQMa94xxLA 2 GiB LPDDR4, only Cortex-A55 supported |
| tqm95_l04g0c000    | TQMa95xxLA 4 GiB LPDDR5, only Cortex-A55 supported |
| tqm95_s02g0c000    | TQMa95xxSA 2 GiB LPDDR5, only Cortex-A55 supported |
| tqm95_s02g0c001    | TQMa95xxSA 2 GiB LPDDR5, Cortex-A + Cortex-M7      |
| tqm95_s04g0c000    | TQMa95xxSA 4 GiB LPDDR5, only Cortex-A55 supported |

Customers will usually need to create their own config that partitions resources between
the AP (Cortex-A55) and Cortex-M instance(s) for their exact use case.

Complete documentation on compiling the SM, building a boot image, and programming the boot image is
contained in the *Developer's Guide* section of the full doxygen-based RM described above.
