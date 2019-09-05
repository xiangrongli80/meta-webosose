DEFAULTTUNE ?= "armv7vethf"

TUNEVALID[armv7ve] = "Enable instructions for ARMv7ve"
TUNECONFLICTS[armv7ve] = "armv4 armv5 armv6 armv7 armv7a"
TUNE_CCARGS .= "${@bb.utils.contains('TUNE_FEATURES', 'armv7ve', ' -march=armv7ve', '', d)}"
MACHINEOVERRIDES =. "${@bb.utils.contains('TUNE_FEATURES', 'armv7ve', 'armv7ve:', '' ,d)}"

require conf/machine/include/arm/arch-armv7a.inc

# Little Endian base configs
AVAILTUNES += "armv7ve armv7vet armv7ve-vfpv3d16 armv7vet-vfpv3d16 armv7ve-vfpv3 armv7vet-vfpv3 armv7ve-vfpv4d16 armv7vet-vfpv4d16 armv7ve-neon armv7vet-neon armv7ve-neon-vfpv4 armv7vet-neon-vfpv4"
ARMPKGARCH_tune-armv7ve             ?= "armv7ve"
ARMPKGARCH_tune-armv7vet            ?= "armv7ve"
ARMPKGARCH_tune-armv7ve-vfpv3d16    ?= "armv7ve"
ARMPKGARCH_tune-armv7vet-vfpv3d16   ?= "armv7ve"
ARMPKGARCH_tune-armv7ve-vfpv3       ?= "armv7ve"
ARMPKGARCH_tune-armv7vet-vfpv3      ?= "armv7ve"
ARMPKGARCH_tune-armv7ve-vfpv4d16    ?= "armv7ve"
ARMPKGARCH_tune-armv7vet-vfpv4d16   ?= "armv7ve"
ARMPKGARCH_tune-armv7ve-neon        ?= "armv7ve"
ARMPKGARCH_tune-armv7vet-neon       ?= "armv7ve"
ARMPKGARCH_tune-armv7ve-neon-vfpv4  ?= "armv7ve"
ARMPKGARCH_tune-armv7vet-neon-vfpv4 ?= "armv7ve"
TUNE_FEATURES_tune-armv7ve             = "arm armv7ve vfp"
TUNE_FEATURES_tune-armv7vet            = "${TUNE_FEATURES_tune-armv7ve} thumb"
TUNE_FEATURES_tune-armv7ve-vfpv3d16    = "${TUNE_FEATURES_tune-armv7ve} vfpv3d16"
TUNE_FEATURES_tune-armv7vet-vfpv3d16   = "${TUNE_FEATURES_tune-armv7vet} vfpv3d16"
TUNE_FEATURES_tune-armv7ve-vfpv3       = "${TUNE_FEATURES_tune-armv7ve-vfpv3d16} vfpv3"
TUNE_FEATURES_tune-armv7vet-vfpv3      = "${TUNE_FEATURES_tune-armv7vet-vfpv3d16} vfpv3"
TUNE_FEATURES_tune-armv7ve-vfpv4d16    = "${TUNE_FEATURES_tune-armv7ve} vfpv4d16"
TUNE_FEATURES_tune-armv7vet-vfpv4d16   = "${TUNE_FEATURES_tune-armv7vet} vfpv4d16"
TUNE_FEATURES_tune-armv7ve-neon        = "${TUNE_FEATURES_tune-armv7ve} neon"
TUNE_FEATURES_tune-armv7vet-neon       = "${TUNE_FEATURES_tune-armv7vet} neon"
TUNE_FEATURES_tune-armv7ve-neon-vfpv4  = "${TUNE_FEATURES_tune-armv7ve-neon} vfpv4"
TUNE_FEATURES_tune-armv7vet-neon-vfpv4 = "${TUNE_FEATURES_tune-armv7vet-neon} vfpv4"
PACKAGE_EXTRA_ARCHS_tune-armv7ve             = "${PACKAGE_EXTRA_ARCHS_tune-armv7a} armv7ve armv7ve-vfp"
PACKAGE_EXTRA_ARCHS_tune-armv7vet            = "${PACKAGE_EXTRA_ARCHS_tune-armv7at} armv7ve armv7ve-vfp armv7vet2-vfp"
PACKAGE_EXTRA_ARCHS_tune-armv7ve-vfpv3d16    = "${PACKAGE_EXTRA_ARCHS_tune-armv7ve} armv7ve-vfpv3d16"
PACKAGE_EXTRA_ARCHS_tune-armv7vet-vfpv3d16   = "${PACKAGE_EXTRA_ARCHS_tune-armv7vet} armv7ve-vfpv3d16 armv7vet2-vfpv3d16"
PACKAGE_EXTRA_ARCHS_tune-armv7ve-vfpv3       = "${PACKAGE_EXTRA_ARCHS_tune-armv7ve-vfpv3d16} armv7ve-vfpv3"
PACKAGE_EXTRA_ARCHS_tune-armv7vet-vfpv3      = "${PACKAGE_EXTRA_ARCHS_tune-armv7vet-vfpv3d16} armv7ve-vfpv3 armv7vet2-vfpv3"
PACKAGE_EXTRA_ARCHS_tune-armv7ve-vfpv4d16    = "${PACKAGE_EXTRA_ARCHS_tune-armv7ve}  armv7ve-vfpv4d16"
PACKAGE_EXTRA_ARCHS_tune-armv7vet-vfpv4d16   = "${PACKAGE_EXTRA_ARCHS_tune-armv7vet} armv7ve-vfpv4d16 armv7vet2-vfpv4d16"
PACKAGE_EXTRA_ARCHS_tune-armv7ve-neon        = "${PACKAGE_EXTRA_ARCHS_tune-armv7ve} armv7ve-neon"
PACKAGE_EXTRA_ARCHS_tune-armv7vet-neon       = "${PACKAGE_EXTRA_ARCHS_tune-armv7vet} armv7ve-neon armv7vet2-neon"
PACKAGE_EXTRA_ARCHS_tune-armv7ve-neon-vfpv4  = "${PACKAGE_EXTRA_ARCHS_tune-armv7ve-neon} armv7ve-neon-vfpv4"
PACKAGE_EXTRA_ARCHS_tune-armv7vet-neon-vfpv4 = "${PACKAGE_EXTRA_ARCHS_tune-armv7vet-neon} armv7ve-neon-vfpv4 armv7vet2-neon-vfpv4"

# HF Tunes
AVAILTUNES += "armv7vehf armv7vethf armv7vehf-vfpv3d16 armv7vethf-vfpv3d16 armv7vehf-vfpv3 armv7vethf-vfpv3 armv7vehf-vfpv4d16 armv7vethf-vfpv4d16 armv7vehf-neon armv7vethf-neon armv7vehf-neon-vfpv4 armv7vethf-neon-vfpv4"
ARMPKGARCH_tune-armv7vehf             ?= "armv7ve"
ARMPKGARCH_tune-armv7vethf            ?= "armv7ve"
ARMPKGARCH_tune-armv7vehf-vfpv3d16    ?= "armv7ve"
ARMPKGARCH_tune-armv7vethf-vfpv3d16   ?= "armv7ve"
ARMPKGARCH_tune-armv7vehf-vfpv3       ?= "armv7ve"
ARMPKGARCH_tune-armv7vethf-vfpv3      ?= "armv7ve"
ARMPKGARCH_tune-armv7vehf-vfpv4d16    ?= "armv7ve"
ARMPKGARCH_tune-armv7vethf-vfpv4d16   ?= "armv7ve"
ARMPKGARCH_tune-armv7vehf-neon        ?= "armv7ve"
ARMPKGARCH_tune-armv7vethf-neon       ?= "armv7ve"
ARMPKGARCH_tune-armv7vehf-neon-vfpv4  ?= "armv7ve"
ARMPKGARCH_tune-armv7vethf-neon-vfpv4 ?= "armv7ve"
TUNE_FEATURES_tune-armv7vehf             = "${TUNE_FEATURES_tune-armv7ve} callconvention-hard"
TUNE_FEATURES_tune-armv7vethf            = "${TUNE_FEATURES_tune-armv7vet} callconvention-hard"
TUNE_FEATURES_tune-armv7vehf-vfpv3d16    = "${TUNE_FEATURES_tune-armv7ve-vfpv3d16} callconvention-hard"
TUNE_FEATURES_tune-armv7vethf-vfpv3d16   = "${TUNE_FEATURES_tune-armv7vet-vfpv3d16} callconvention-hard"
TUNE_FEATURES_tune-armv7vehf-vfpv3       = "${TUNE_FEATURES_tune-armv7ve-vfpv3} callconvention-hard"
TUNE_FEATURES_tune-armv7vethf-vfpv3      = "${TUNE_FEATURES_tune-armv7vet-vfpv3} callconvention-hard"
TUNE_FEATURES_tune-armv7vehf-vfpv4d16    = "${TUNE_FEATURES_tune-armv7ve-vfpv4d16} callconvention-hard"
TUNE_FEATURES_tune-armv7vethf-vfpv4d16   = "${TUNE_FEATURES_tune-armv7vet-vfpv4d16} callconvention-hard"
TUNE_FEATURES_tune-armv7vehf-neon        = "${TUNE_FEATURES_tune-armv7ve-neon} callconvention-hard"
TUNE_FEATURES_tune-armv7vethf-neon       = "${TUNE_FEATURES_tune-armv7vet-neon} callconvention-hard"
TUNE_FEATURES_tune-armv7vehf-neon-vfpv4  = "${TUNE_FEATURES_tune-armv7ve-neon-vfpv4} callconvention-hard"
TUNE_FEATURES_tune-armv7vethf-neon-vfpv4 = "${TUNE_FEATURES_tune-armv7vet-neon-vfpv4} callconvention-hard"
PACKAGE_EXTRA_ARCHS_tune-armv7vehf             = "${PACKAGE_EXTRA_ARCHS_tune-armv7ahf} armv7vehf-vfp"
PACKAGE_EXTRA_ARCHS_tune-armv7vethf            = "${PACKAGE_EXTRA_ARCHS_tune-armv7athf} armv7vehf-vfp armv7vet2hf-vfp"
PACKAGE_EXTRA_ARCHS_tune-armv7vehf-vfpv3d16    = "${PACKAGE_EXTRA_ARCHS_tune-armv7vehf} armv7vehf-vfpv3d16"
PACKAGE_EXTRA_ARCHS_tune-armv7vethf-vfpv3d16   = "${PACKAGE_EXTRA_ARCHS_tune-armv7vethf} armv7vehf-vfpv3d16 armv7vet2hf-vfpv3d16"
PACKAGE_EXTRA_ARCHS_tune-armv7vehf-vfpv3       = "${PACKAGE_EXTRA_ARCHS_tune-armv7vehf-vfpv3d16} armv7vehf-vfpv3"
PACKAGE_EXTRA_ARCHS_tune-armv7vethf-vfpv3      = "${PACKAGE_EXTRA_ARCHS_tune-armv7vethf-vfpv3d16} armv7vehf-vfpv3 armv7vet2hf-vfpv3"
PACKAGE_EXTRA_ARCHS_tune-armv7vehf-vfpv4d16    = "${PACKAGE_EXTRA_ARCHS_tune-armv7vehf} armv7vehf-vfpv4d16"
PACKAGE_EXTRA_ARCHS_tune-armv7vethf-vfpv4d16   = "${PACKAGE_EXTRA_ARCHS_tune-armv7vethf} armv7vehf-vfpv4d16 armv7vet2hf-vfpv4d16"
PACKAGE_EXTRA_ARCHS_tune-armv7vehf-neon        = "${PACKAGE_EXTRA_ARCHS_tune-armv7vehf} armv7vehf-neon"
PACKAGE_EXTRA_ARCHS_tune-armv7vethf-neon       = "${PACKAGE_EXTRA_ARCHS_tune-armv7vethf} armv7vehf-neon armv7vet2hf-neon"
PACKAGE_EXTRA_ARCHS_tune-armv7vehf-neon-vfpv4  = "${PACKAGE_EXTRA_ARCHS_tune-armv7vehf-neon} armv7vehf-neon-vfpv4"
PACKAGE_EXTRA_ARCHS_tune-armv7vethf-neon-vfpv4 = "${PACKAGE_EXTRA_ARCHS_tune-armv7vethf-neon} armv7vehf-neon-vfpv4 armv7vet2hf-neon-vfpv4"

# Big Endian
AVAILTUNES += "armv7veb armv7vetb armv7veb-vfpv3d16 armv7vetb-vfpv3d16 armv7veb-vfpv3 armv7vetb-vfpv3 armv7veb-vfpv4d16 armv7vetb-vfpv4d16 armv7veb-neon armv7vetb-neon armv7veb-neon-vfpv4 armv7vetb-neon-vfpv4"
ARMPKGARCH_tune-armv7veb             ?= "armv7ve"
ARMPKGARCH_tune-armv7vetb            ?= "armv7ve"
ARMPKGARCH_tune-armv7veb-vfpv3d16    ?= "armv7ve"
ARMPKGARCH_tune-armv7vetb-vfpv3d16   ?= "armv7ve"
ARMPKGARCH_tune-armv7veb-vfpv3       ?= "armv7ve"
ARMPKGARCH_tune-armv7vetb-vfpv3      ?= "armv7ve"
ARMPKGARCH_tune-armv7veb-vfpv4d16    ?= "armv7ve"
ARMPKGARCH_tune-armv7vetb-vfpv4d16   ?= "armv7ve"
ARMPKGARCH_tune-armv7veb-neon        ?= "armv7ve"
ARMPKGARCH_tune-armv7vetb-neon       ?= "armv7ve"
ARMPKGARCH_tune-armv7veb-neon-vfpv4  ?= "armv7ve"
ARMPKGARCH_tune-armv7vetb-neon-vfpv4 ?= "armv7ve"
TUNE_FEATURES_tune-armv7veb             = "${TUNE_FEATURES_tune-armv7ve} bigendian"
TUNE_FEATURES_tune-armv7vetb            = "${TUNE_FEATURES_tune-armv7vet} bigendian"
TUNE_FEATURES_tune-armv7veb-vfpv3d16    = "${TUNE_FEATURES_tune-armv7ve-vfpv3d16} bigendian"
TUNE_FEATURES_tune-armv7vetb-vfpv3d16   = "${TUNE_FEATURES_tune-armv7vet-vfpv3d16} bigendian"
TUNE_FEATURES_tune-armv7veb-vfpv3       = "${TUNE_FEATURES_tune-armv7ve-vfpv3} bigendian"
TUNE_FEATURES_tune-armv7vetb-vfpv3      = "${TUNE_FEATURES_tune-armv7vet-vfpv3} bigendian"
TUNE_FEATURES_tune-armv7veb-vfpv4d16    = "${TUNE_FEATURES_tune-armv7ve-vfpv4d16} bigendian"
TUNE_FEATURES_tune-armv7vetb-vfpv4d16   = "${TUNE_FEATURES_tune-armv7vet-vfpv4d16} bigendian"
TUNE_FEATURES_tune-armv7veb-neon        = "${TUNE_FEATURES_tune-armv7ve-neon} bigendian"
TUNE_FEATURES_tune-armv7vetb-neon       = "${TUNE_FEATURES_tune-armv7vet-neon} bigendian"
TUNE_FEATURES_tune-armv7veb-neon-vfpv4  = "${TUNE_FEATURES_tune-armv7ve-neon-vfpv4} bigendian"
TUNE_FEATURES_tune-armv7vetb-neon-vfpv4 = "${TUNE_FEATURES_tune-armv7vet-neon-vfpv4} bigendian"
PACKAGE_EXTRA_ARCHS_tune-armv7veb             = "${PACKAGE_EXTRA_ARCHS_tune-armv7ab} armv7veb-vfp"
PACKAGE_EXTRA_ARCHS_tune-armv7vetb            = "${PACKAGE_EXTRA_ARCHS_tune-armv7atb} armv7veb-vfp armv7vet2b-vfp"
PACKAGE_EXTRA_ARCHS_tune-armv7veb-vfpv3d16    = "${PACKAGE_EXTRA_ARCHS_tune-armv7veb} armv7veb-vfpv3d16"
PACKAGE_EXTRA_ARCHS_tune-armv7vetb-vfpv3d16   = "${PACKAGE_EXTRA_ARCHS_tune-armv7vetb} armv7veb-vfpv3d16 armv7vet2b-vfpv3d16"
PACKAGE_EXTRA_ARCHS_tune-armv7veb-vfpv3       = "${PACKAGE_EXTRA_ARCHS_tune-armv7veb-vfpv3d16} armv7veb-vfpv3"
PACKAGE_EXTRA_ARCHS_tune-armv7vetb-vfpv3      = "${PACKAGE_EXTRA_ARCHS_tune-armv7vetb-vfpv3d16} armv7veb-vfpv3 armv7vet2b-vfpv3"
PACKAGE_EXTRA_ARCHS_tune-armv7veb-vfpv4d16    = "${PACKAGE_EXTRA_ARCHS_tune-armv7veb} armv7veb-vfpv4d16"
PACKAGE_EXTRA_ARCHS_tune-armv7vetb-vfpv4d16   = "${PACKAGE_EXTRA_ARCHS_tune-armv7vetb} armv7veb-vfpv4d16 armv7vet2b-vfpv4d16"
PACKAGE_EXTRA_ARCHS_tune-armv7veb-neon        = "${PACKAGE_EXTRA_ARCHS_tune-armv7veb} armv7veb-neon"
PACKAGE_EXTRA_ARCHS_tune-armv7vetb-neon       = "${PACKAGE_EXTRA_ARCHS_tune-armv7vetb} armv7veb-neon armv7vet2b-neon"
PACKAGE_EXTRA_ARCHS_tune-armv7veb-neon-vfpv4  = "${PACKAGE_EXTRA_ARCHS_tune-armv7veb-neon} armv7veb-neon-vfpv4"
PACKAGE_EXTRA_ARCHS_tune-armv7vetb-neon-vfpv4 = "${PACKAGE_EXTRA_ARCHS_tune-armv7vetb-neon} armv7veb-neon-vfpv4 armv7vet2b-neon-vfpv4"

# Big Endian + HF
AVAILTUNES += "armv7vehfb armv7vethfb armv7vehfb-vfpv3d16 armv7vethfb-vfpv3d16 armv7vehfb-vfpv3 armv7vethfb-vfpv3 armv7vehfb-vfpv4d16 armv7vethfb-vfpv4d16 armv7vehfb-neon armv7vethfb-neon armv7vehfb-neon-vfpv4 armv7vethfb-neon-vfpv4"
ARMPKGARCH_tune-armv7vehfb             ?= "armv7ve"
ARMPKGARCH_tune-armv7vethfb            ?= "armv7ve"
ARMPKGARCH_tune-armv7vehfb-vfpv3d16    ?= "armv7ve"
ARMPKGARCH_tune-armv7vethfb-vfpv3d16   ?= "armv7ve"
ARMPKGARCH_tune-armv7vehfb-vfpv3       ?= "armv7ve"
ARMPKGARCH_tune-armv7vethfb-vfpv3      ?= "armv7ve"
ARMPKGARCH_tune-armv7vehfb-vfpv4d16    ?= "armv7ve"
ARMPKGARCH_tune-armv7vethfb-vfpv4d16   ?= "armv7ve"
ARMPKGARCH_tune-armv7vehfb-neon        ?= "armv7ve"
ARMPKGARCH_tune-armv7vethfb-neon       ?= "armv7ve"
ARMPKGARCH_tune-armv7vehfb-neon-vfpv4  ?= "armv7ve"
ARMPKGARCH_tune-armv7vethfb-neon-vfpv4 ?= "armv7ve"
TUNE_FEATURES_tune-armv7vehfb             = "${TUNE_FEATURES_tune-armv7vehf} bigendian"
TUNE_FEATURES_tune-armv7vethfb            = "${TUNE_FEATURES_tune-armv7vethf} bigendian"
TUNE_FEATURES_tune-armv7vehfb-vfpv3d16    = "${TUNE_FEATURES_tune-armv7vehf-vfpv3d16} bigendian"
TUNE_FEATURES_tune-armv7vethfb-vfpv3d16   = "${TUNE_FEATURES_tune-armv7vethf-vfpv3d16} bigendian"
TUNE_FEATURES_tune-armv7vehfb-vfpv3       = "${TUNE_FEATURES_tune-armv7vehf-vfpv3} bigendian"
TUNE_FEATURES_tune-armv7vethfb-vfpv3      = "${TUNE_FEATURES_tune-armv7vethf-vfpv3} bigendian"
TUNE_FEATURES_tune-armv7vehfb-vfpv4d16    = "${TUNE_FEATURES_tune-armv7vehf-vfpv4d16} bigendian"
TUNE_FEATURES_tune-armv7vethfb-vfpv4d16   = "${TUNE_FEATURES_tune-armv7vethf-vfpv4d16} bigendian"
TUNE_FEATURES_tune-armv7vehfb-neon        = "${TUNE_FEATURES_tune-armv7vehf-neon} bigendian"
TUNE_FEATURES_tune-armv7vethfb-neon       = "${TUNE_FEATURES_tune-armv7vethf-neon} bigendian"
TUNE_FEATURES_tune-armv7vehfb-neon-vfpv4  = "${TUNE_FEATURES_tune-armv7vehf-neon-vfpv4} bigendian"
TUNE_FEATURES_tune-armv7vethfb-neon-vfpv4 = "${TUNE_FEATURES_tune-armv7vethf-neon-vfpv4} bigendian"
PACKAGE_EXTRA_ARCHS_tune-armv7vehfb             = "${PACKAGE_EXTRA_ARCHS_tune-armv7ahfb} armv7vehfb-vfp"
PACKAGE_EXTRA_ARCHS_tune-armv7vethfb            = "${PACKAGE_EXTRA_ARCHS_tune-armv7athfb} armv7vehfb-vfp armv7vet2hfb-vfp"
PACKAGE_EXTRA_ARCHS_tune-armv7vehfb-vfpv3d16    = "${PACKAGE_EXTRA_ARCHS_tune-armv7vehfb} armv7vehfb-vfpv3d16"
PACKAGE_EXTRA_ARCHS_tune-armv7vethfb-vfpv3d16   = "${PACKAGE_EXTRA_ARCHS_tune-armv7vethfb} armv7vehfb-vfpv3d16 armv7vet2hfb-vfpv3d16"
PACKAGE_EXTRA_ARCHS_tune-armv7vehfb-vfpv3       = "${PACKAGE_EXTRA_ARCHS_tune-armv7vehfb-vfpv3d16} armv7vehfb-vfpv3"
PACKAGE_EXTRA_ARCHS_tune-armv7vethfb-vfpv3      = "${PACKAGE_EXTRA_ARCHS_tune-armv7vethfb-vfpv3d16} armv7vehfb-vfpv3 armv7vet2hfb-vfpv3"
PACKAGE_EXTRA_ARCHS_tune-armv7vehfb-vfpv4d16    = "${PACKAGE_EXTRA_ARCHS_tune-armv7vehfb} armv7vehfb-vfpv4d16"
PACKAGE_EXTRA_ARCHS_tune-armv7vethfb-vfpv4d16   = "${PACKAGE_EXTRA_ARCHS_tune-armv7vethfb} armv7vehfb-vfpv4d16 armv7vet2hfb-vfpv4d16"
PACKAGE_EXTRA_ARCHS_tune-armv7vehfb-neon        = "${PACKAGE_EXTRA_ARCHS_tune-armv7vehfb} armv7vehfb-neon"
PACKAGE_EXTRA_ARCHS_tune-armv7vethfb-neon       = "${PACKAGE_EXTRA_ARCHS_tune-armv7vethfb} armv7vehfb-neon armv7vet2hfb-neon"
PACKAGE_EXTRA_ARCHS_tune-armv7vehfb-neon-vfpv4  = "${PACKAGE_EXTRA_ARCHS_tune-armv7vehfb-neon} armv7vehfb-neon-vfpv4"
PACKAGE_EXTRA_ARCHS_tune-armv7vethfb-neon-vfpv4 = "${PACKAGE_EXTRA_ARCHS_tune-armv7vethfb-neon} armv7vehfb-neon-vfpv4 armv7vet2hfb-neon-vfpv4"