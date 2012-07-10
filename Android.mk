#/************************************************************************
# *                                                                      *
# *  Copyright (C) 2010 ST-Ericsson                                      *
# *                                                                      *
# *  Author: Sebastian RASMUSSEN <sebastian.rasmussen AT stericsson.com> *
# *                                                                      *
# ************************************************************************/

ifeq ($(NWM_ENABLE_FEATURE_MODEMFS),true)

LOCAL_PATH:= $(call my-dir)
PRIVATE_MODEM_PATH := $(LOCAL_PATH)
include $(CLEAR_VARS)

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
# $(o): sparse flag
# $(1): src directory
# $(2): output file
# $(3): ext variant (ext2, ext3, ext4)
# $(4): mount point
# $(5): size of the partition
	$(hide) PATH=$(foreach p,$(INTERNAL_USERIMAGES_BINARY_PATHS),$(p):)$$PATH \
	  $(MKEXTUSERIMG) $(INTERNAL_USERIMAGES_SPARSE_EXT_FLAG) $< $@ ext4 modemfs $(BOARD_MODEMIMAGE_PARTITION_SIZE)
else
	$(hide) echo "ERROR: File system image $@ has only been verified to work as an ext4 file system image!"; false
endif

include $(BUILD_PREBUILT)

# Copies modem images to PRODUCT_OUT/modem_images
modem_images := $(wildcard $(PRIVATE_MODEM_PATH)/*.fs)
modem_images += $(wildcard $(PRIVATE_MODEM_PATH)/*_ipl_*)
modem_images := $(subst $(PRIVATE_MODEM_PATH),,$(modem_images))

$(LOCAL_BUILT_MODULE): $(addprefix $(PRODUCT_OUT)/modem_images, $(modem_images))
$(PRODUCT_OUT)/modem_images%: $(PRIVATE_MODEM_PATH)% | $(ACP)
	$(transform-prebuilt-to-target)

endif #NWM_ENABLE_FEATURE_MODEMFS
