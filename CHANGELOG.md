# Changelog

Changelog for TQ-Systems GmbH fork of NXP SM für i.MX95. See https://github.com/nxp-imx/imx-sm

[[_TOC_]]

All notable changes to this project will be documented in this file.

Releases are named with the following scheme:

`<TQ module family>.BSP.SW.<version number>`

## [Unreleased]

### Added

* initial Support for TQMa94xxLA with 2 GB RAM

### Changed

* integrate NXP changes from lf-6.18.2-1.0.0
* integrate NXP changes from lf-6.12.49-2.2.0

## BSP release scarthgap.TQMa95xx.IBPQ.SW.0006

### Added

* support for 4GiB RAM variant of TQMa95xxLA
* support for 4GiB RAM variant of TQMa95xxSA
* support to build multiple RAM configurations for TQMa95xxSA

### Changed

* integrate NXP changes from lf-6.12.49-2.2.0
* TQMa95xxSA: use define instead of magic number for PMIC IRQ
* integrate updates from NXP version lf-6.6.52-2.2.0
* Makefile: support building documentation from top level dir
* integrate updates from NXP version lf-6.6.36-2.1.0
* integrate updates from NXP version lf-6.6.23-2.0.0

### Fixed

## Initial Version

TQ-Systems internal development based on NXP version lf-6.6.3-1.0.0

### Changed

* print configuration in SM Basser for enabled console
* informal output during boot for bringup
* allow console output without TEST or MONITOR

### Added

* support initial version of TQMa95xxSA REV.010x with 2GiB
* infra: gitlab-ci support

### Fixed

* Makefile fixes to prevent running clean and img building in parallel
