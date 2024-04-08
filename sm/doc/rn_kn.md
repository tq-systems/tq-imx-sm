Known Issues {#RN_KN}
============

Below is a list of known outstanding issues in this release (imx_sm_2024q1).

New Feature {#RN_KN_NEW}
============

| Key     | Summary                        | i.MX95<br> (A0) | i.MX95<br> (A1) |
|------------|-------------------------------|---|---|
| [SM-26](https://jira.sw.nxp.com/projects/SM/issues/SM-26) | Add support for vendor-defined SCMI system power states | Y | Y |
| [SM-27](https://jira.sw.nxp.com/projects/SM/issues/SM-27) | Add low-power mode entry during SM idle | Y | Y |
| [SM-28](https://jira.sw.nxp.com/projects/SM/issues/SM-28) | Add support for DRAM retention | Y | Y |
| [SM-29](https://jira.sw.nxp.com/projects/SM/issues/SM-29) | Add support for PLL spread spectrum mode | Y | Y |
| [SM-31](https://jira.sw.nxp.com/projects/SM/issues/SM-31) | Create log for SUSPEND entry/exit | Y | Y |
| [SM-32](https://jira.sw.nxp.com/projects/SM/issues/SM-32) | Add fairness/prioritization to SM IRQ/event handling | Y | Y |

Improvement {#RN_KN_IMP}
============

| Key     | Summary                        | i.MX95<br> (A0) | i.MX95<br> (A1) |
|------------|-------------------------------|---|---|
| [SM-13](https://jira.sw.nxp.com/projects/SM/issues/SM-13) | Load FRO trim from fuses and run closed-loop | Y | Y |
| [SM-15](https://jira.sw.nxp.com/projects/SM/issues/SM-15) | Support reporting SCMI notification queue overflow as a fault | Y | Y |
| [SM-16](https://jira.sw.nxp.com/projects/SM/issues/SM-16) | Support TMPSNS powerup/down and ELE enable | Y | Y |
| [SM-17](https://jira.sw.nxp.com/projects/SM/issues/SM-17) | Implement SCMI message sequence checking | Y | Y |
| [SM-19](https://jira.sw.nxp.com/projects/SM/issues/SM-19) | Optimize boot time | Y | Y |
| [SM-21](https://jira.sw.nxp.com/projects/SM/issues/SM-21) | Misc. FuSa improvements | Y | Y |
| [SM-24](https://jira.sw.nxp.com/projects/SM/issues/SM-24) | Align reset toggle delay with SoC specification | Y | Y |
| [SM-71](https://jira.sw.nxp.com/projects/SM/issues/SM-71) | Enable/disable VDD_ARM on AP LM boot/shutdown | Y | Y |
| [SM-78](https://jira.sw.nxp.com/projects/SM/issues/SM-78) | Provide misc. control for ADC test voltage | Y | Y |
| [SM-82](https://jira.sw.nxp.com/projects/SM/issues/SM-82) | Create reset reason for SM error/exit | Y | Y |
| [SM-84](https://jira.sw.nxp.com/projects/SM/issues/SM-84) | Remove unnecessary SM clock permissions for the AP | Y | Y |
| [SM-86](https://jira.sw.nxp.com/projects/SM/issues/SM-86) | Fix MISRA violations from turning on new scan rules | Y | Y |
| [SM-87](https://jira.sw.nxp.com/projects/SM/issues/SM-87) | Improve unit test coverage | Y | Y |

Bug {#RN_KN_BUG}
============

| Key     | Summary                        | i.MX95<br> (A0) | i.MX95<br> (A1) |
|------------|-------------------------------|---|---|
| [SM-38](https://jira.sw.nxp.com/projects/SM/issues/SM-38) | Round up/nearest not supported for FRACTPLL clock nodes | Y | Y |
| [SM-83](https://jira.sw.nxp.com/projects/SM/issues/SM-83) | IOMUXC header incorrectly overwrites the JTAG TDI mux | Y | Y |
| [SM-85](https://jira.sw.nxp.com/projects/SM/issues/SM-85) | Release of M7 CPUWAIT during M7MIX power down may result in unterminated transactions | Y | Y |

