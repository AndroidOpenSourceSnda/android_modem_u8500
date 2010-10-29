#/************************************************************************
# *                                                                      *
# *  Copyright (C) 2010 ST-Ericsson                                      *
# *                                                                      *
# *  Author: Sebastian RASMUSSEN <sebastian.rasmussen AT stericsson.com> *
# *                                                                      *
# ************************************************************************/

ifeq ($(NWM_ENABLE_FEATURE_MODEMFS),true)

LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

include external/genext2fs/Config.mk

.PRECIOUS: $(PRODUCT_OUT)/modemfs.img
ALL_PREBUILT += $(PRODUCT_OUT)/modemfs.img
$(PRODUCT_OUT)/modemfs.img: $(LOCAL_PATH)/modemfs $(MKEXT2IMG)
ifeq ($(TARGET_USERIMAGES_USE_EXT2),true)
	$(hide) $(call build-userimage-ext2-target,$<,$@,modem,$(TARGET_USERIMAGES_USE_EXT3),$(BOARD_MODEMIMAGE_PARTITION_SIZE),$(BOARD_MODEMIMAGE_BLOCK_SIZE),$(BOARD_MODEMIMAGE_INODE_RATIO))
	$(hide) $(call assert-max-image-size,$@,$(BOARD_MODEMIMAGE_PARTITION_SIZE),raw)
else
	$(hide) echo "ERROR: File system image $@ has only been verified to work as an ext2/ext3 file system image!"; false
endif

endif

# Make sure that statements below are included if only modem is being built.
# It is important that this is below the rule for modemfs.img otherwise
# there is a conflict between including Android.mk for genext2fs and this
# modules LOCAL_PATH.

ifneq ($(ONE_SHOT_MAKEFILE),)
NWM_ENABLE_FEATURE_MODEMFS := true
include external/genext2fs/Android.mk
endif

