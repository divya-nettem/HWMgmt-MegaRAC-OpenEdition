HOMEPAGE = "http://github.com/openbmc/phosphor-settingsd"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://${S}/LICENSE;md5=fa818a259cbed7ce8bc2a22d35a464fc"
//SRC_URI += "git://github.com/openbmc/phosphor-settingsd"
//SRCREV = "8f5c256647714dee8b67836ee24b8dff89b4ae46"

FILESPATH =. "${TOPDIR}/../openbmc_modules:"
S = "${WORKDIR}/phosphor-settingsd"
SRC_URI = "file://phosphor-settingsd"
SRCPV = "${AUTOREV}"

