# Copyright (c) 2018-2019 LG Electronics, Inc.

SUMMARY = "Service which controls video output"
AUTHOR = "Kwanghee Lee <ekwang.lee@lge.com>"
SECTION = "webos/services"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=e3fc50a88d0a364313df4b21ef20c29e"

VIRTUAL-RUNTIME_val-impl ??= "videooutput-adaptation-layer-mock"
DEPENDS = "glib-2.0 luna-service2 pmloglib libpbnjson val-impl"
RDEPENDS_${PN} += "${VIRTUAL-RUNTIME_val-impl}"
WEBOS_VERSION = "1.0.0-10_bacac1e9dbfbc05c1b4d088908862fcc6dd79551"
PR = "r1"

inherit webos_component
inherit webos_enhanced_submissions
inherit webos_cmake
inherit webos_daemon
inherit webos_system_bus
inherit webos_distro_dep
inherit webos_machine_dep
inherit webos_public_repo
inherit webos_pkgconfig
inherit webos_test_provider

SRC_URI = "${WEBOSOSE_GIT_REPO_COMPLETE}"

S = "${WORKDIR}/git"
