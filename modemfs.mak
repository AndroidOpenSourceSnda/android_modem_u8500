#/************************************************************************
# *                                                                      *
# *  Copyright (C) 2012 ST-Ericsson                                      *
# *                                                                      *
# *  Author: Axel Lilliecrantz <axel.lilliecrantz AT stericsson.com>     *
# *                                                                      *
# ************************************************************************/

PACKAGE_NAME=modemfs

TARGET_MODEMFS_ROOT := /modemfs
TARGET_CONF := $(TARGET_MODEMFS_ROOT)/CONF
TARGET_PERM := $(TARGET_MODEMFS_ROOT)/PERM

LOCAL_ROOT := $(CURDIR)
LOCAL_MODEMFS_ROOT := $(LOCAL_ROOT)/modemfs
LOCAL_CONF := $(LOCAL_MODEMFS_ROOT)/CONF
LOCAL_PERM := $(LOCAL_MODEMFS_ROOT)/PERM

.PHONY: build
build:
	@echo "Now building for $(PACKAGE_NAME)"

install: build
	@echo "Creating modem file system directories"
	@$(PACKAGE_DIR) $(TARGET_MODEMFS_ROOT) 770 0 0
	@$(PACKAGE_DIR) $(TARGET_CONF) 770 0 0
	@$(PACKAGE_DIR) $(TARGET_CONF)/MCE 770 0 0
	@$(PACKAGE_DIR) $(TARGET_PERM) 770 0 0
	@$(PACKAGE_DIR) $(TARGET_PERM)/PROT 770 0 0


	@echo "Adding files to conf"
	@$(PACKAGE_FILE) $(TARGET_CONF)/MCE/MCE.CFG $(LOCAL_CONF)/MCE/MCE.CFG 755 0 0
	@echo "Adding files to perm"
	@$(PACKAGE_FILE) $(TARGET_PERM)/PROT/PPVALUES.DAT $(LOCAL_PERM)/PROT/PPVALUES.DAT 755 0 0

clean:
	@echo "Now cleaning for $(PACKAGE_NAME)"
	rm -rf $(ROOTFS)/$(TARGET_MODEMFS_ROOT)

