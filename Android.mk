# Copyright 2010 ST-Ericsson

ifeq ($(NWM_ENABLE_FEATURE_MODEMFS),true)

LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

# Create all the necessary empty directories

ALL_PREBUILT += \
	$(TARGET_ROOT_OUT)/modemfs/PERM \
	$(TARGET_ROOT_OUT)/modemfs/PERM/PLAIN \
	$(TARGET_ROOT_OUT)/modemfs/PERM/PROT \
	$(TARGET_ROOT_OUT)/modemfs/RFHAL \
	$(TARGET_ROOT_OUT)/modemfs/CONF \
	$(TARGET_ROOT_OUT)/modemfs/CONF/PWR_CTRL \
	$(TARGET_ROOT_OUT)/modemfs/CONF/MCE
$(TARGET_ROOT_OUT)/modemfs/PERM :
	mkdir -p $@
$(TARGET_ROOT_OUT)/modemfs/PERM/PLAIN :
	mkdir -p $@
$(TARGET_ROOT_OUT)/modemfs/PERM/PROT :
	mkdir -p $@
$(TARGET_ROOT_OUT)/modemfs/RFHAL :
	mkdir -p $@
$(TARGET_ROOT_OUT)/modemfs/CONF :
	mkdir -p $@
$(TARGET_ROOT_OUT)/modemfs/CONF/PWR_CTRL :
	mkdir -p $@
$(TARGET_ROOT_OUT)/modemfs/CONF/MCE :
	mkdir -p $@

# Copy files that modem depends on to root file system directory
# so they eventually included in the root file system image.

ALL_PREBUILT += $(TARGET_ROOT_OUT)/modemfs/CONF/PWR_CTRL/VFT.CFG
$(TARGET_ROOT_OUT)/modemfs/CONF/PWR_CTRL/VFT.CFG : $(LOCAL_PATH)/modemfs/CONF/PWR_CTRL/VFT.CFG | $(ACP)
	$(transform-prebuilt-to-target)

ALL_PREBUILT +=	$(TARGET_ROOT_OUT)/modemfs/CONF/MCE/MCE.CFG
$(TARGET_ROOT_OUT)/modemfs/CONF/MCE/MCE.CFG : $(LOCAL_PATH)/modemfs/CONF/MCE/MCE.CFG | $(ACP)
	$(transform-prebuilt-to-target)

endif

