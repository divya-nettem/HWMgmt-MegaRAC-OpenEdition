HOMEPAGE = "https://github.com/openbmc/phosphor-bmc-code-mgmt"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=e3fc50a88d0a364313df4b21ef20c29e"
//SRC_URI += "git://github.com/openbmc/phosphor-bmc-code-mgmt"
//SRCREV = "8c5209d3bdd508f5082af111a650903e743e2043"

FILESPATH =. "${TOPDIR}/../openbmc_modules:"
S = "${WORKDIR}/phosphor-bmc-code-mgmt"
SRC_URI = "file://phosphor-bmc-code-mgmt"
SRCPV = "${AUTOREV}"

