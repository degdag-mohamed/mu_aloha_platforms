[PcdsFixedAtBuild.common]
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferWidth|1080
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdMipiFrameBufferHeight|2340

# Smbios Info
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemBrand|"Qualcomm"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosBoardModel|"HHG"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"6"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosProcessorModel|"Snapdragon (TM) G3x Gen 1 @ 3.00 GHz"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdSmbiosProcessorRetailModel|"SG8175P"
gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdABLProduct|"QTI HHG 8350"

gArmTokenSpaceGuid.PcdSystemMemorySize|0x180000000 # 6GB

# Display Caller
# gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdDisplayCallerExitDisableDisplay|FALSE
# gSurfaceDuoFamilyPkgTokenSpaceGuid.PcdDisplayCallerStallBeforeEnable|2000000

[PcdsDynamicDefault.common]
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|1080
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|2340
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|1080
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|2340
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|99  # = 1080 / EFI_GLYPH_WIDTH(8)
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|123    # = 2340 / EFI_GLYPH_HEIGHT(19)
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|99       # = 1080 / EFI_GLYPH_WIDTH(8)
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|123         # = 2340 / EFI_GLYPH_HEIGHT(19)
