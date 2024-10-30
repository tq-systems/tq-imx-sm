# Changelog

Changelog for TQ-Systems GmbH fork of NXP SM für i.MX95. See https://github.com/nxp-imx/imx-sm

[[_TOC_]]

All notable changes to this project will be documented in this file.

Releases are named with the following scheme:

`<TQ module family>.BSP.SW.<version number>`

## [Unreleased]

### Added

* support for 4GiB RAM variant of TQMa95xxSA
* support to build multiple RAM configurations for TQMa95xxSA

### Changed

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
