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

.PRECIOUS: $(PRODUCT_OUT)/modemfs.img
ALL_PREBUILT += $(PRODUCT_OUT)/modemfs.img
ALL_MODULES += $(PRODUCT_OUT)/modemfs.img
$(PRODUCT_OUT)/modemfs.img: $(LOCAL_PATH)/modemfs $(MKEXT2USERIMG) $(MAKE_EXT4FS)
ifeq ($(TARGET_USERIMAGES_USE_EXT4),true)
	$(call build-userimage-ext-target,$<,$@,modemfs,ext4,$(BOARD_MODEMIMAGE_PARTITION_SIZE))
else
	$(hide) echo "ERROR: File system image $@ has only been verified to work as an ext4 file system image!"; false
endif
endif

# Copies modem images to PRODUCT_OUT/modem_images
modem_images := $(wildcard $(LOCAL_PATH)/*.fs)
modem_images += $(wildcard $(LOCAL_PATH)/*_ipl_*)

copy_modem_images := $(foreach modem,$(subst $(LOCAL_PATH),,$(modem_images)),$(LOCAL_PATH)/$(modem):modem_images/$(modem))
PRODUCT_COPY_FILES += $(copy_modem_images)
