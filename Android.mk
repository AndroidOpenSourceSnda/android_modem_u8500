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

PRIVATE_MODEM_PATH := $(LOCAL_PATH)

TMP_MODEMFS := $(TARGET_OUT_INTERMEDIATES)/tmp_modemfs
$(shell mkdir -p $(TMP_MODEMFS))

include $(CLEAR_VARS)
LOCAL_PATH := $(TMP_MODEMFS)
LOCAL_SRC_FILES := modemfs.img
LOCAL_MODULE := modemfs.img
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_MODULE_PATH := $(PRODUCT_OUT)

$(addprefix $(LOCAL_PATH),/$(LOCAL_SRC_FILES)): $(PRIVATE_MODEM_PATH)/modemfs $(MKEXT2USERIMG) $(MAKE_EXT4FS)
ifeq ($(TARGET_USERIMAGES_USE_EXT4),true)
	$(call build-userimage-ext-target,$<,$@,modemfs,ext4,$(BOARD_MODEMIMAGE_PARTITION_SIZE))
else
	$(hide) echo "ERROR: File system image $@ has only been verified to work as an ext4 file system image!"; false
endif

include $(BUILD_PREBUILT)

# Copies modem images to PRODUCT_OUT/modem_images
modem_images := $(wildcard $(PRIVATE_MODEM_PATH)/*.fs)
modem_images += $(wildcard $(PRIVATE_MODEM_PATH)/*_ipl_*)

copy_modem_images := $(foreach modem,$(subst $(PRIVATE_MODEM_PATH),,$(modem_images)),$(PRIVATE_MODEM_PATH)/$(modem):modem_images/$(modem))
PRODUCT_COPY_FILES += $(copy_modem_images)

endif #NWM_ENABLE_FEATURE_MODEMFS
