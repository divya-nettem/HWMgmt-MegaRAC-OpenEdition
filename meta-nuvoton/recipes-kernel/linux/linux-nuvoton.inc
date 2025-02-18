DESCRIPTION = "Linux kernel for Nuvoton NPCM7xx"
SECTION = "kernel"
LICENSE = "GPLv2"

PROVIDES += "virtual/kernel"

KCONFIG_MODE="--alldefconfig"

#KSRC ?= "git://github.com/openbmc/linux;protocol=git;branch=${KBRANCH}"
#SRC_URI = "${KSRC}"
SRC_URI_append_npcm7xx = " file://defconfig"

LINUX_VERSION_EXTENSION ?= "-${SRCREV}"

#PV = "${LINUX_VERSION}+git${SRCPV}"
PV = "${LINUX_VERSION}"

inherit kernel
require recipes-kernel/linux/linux-yocto.inc

# From 4.16+ the COPYING file changed
LIC_FILES_CHKSUM = "file://COPYING;md5=bbea815ee2795b2f4230826c0c6b8814"

KERNEL_VERSION_SANITY_SKIP="1"
