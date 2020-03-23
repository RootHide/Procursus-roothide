ifneq ($(CHECKRA1N_MEMO),1)
$(error Use the main Makefile)
endif

LZ4_VERSION := 1.9.2
DEB_LZ4_V   ?= $(LZ4_VERSION)

ifneq ($(wildcard $(BUILD_WORK)/lz4/.build_complete),)
lz4:
	@echo "Using previously built lz4."
else
lz4: setup
	TARGET_OS=Darwin \
		$(MAKE) -C $(BUILD_WORK)/lz4 install \
		PREFIX=/usr \
		DESTDIR=$(BUILD_STAGE)/lz4 \
		CFLAGS="$(CFLAGS)"
	TARGET_OS=Darwin \
		$(MAKE) -C $(BUILD_WORK)/lz4 install \
		PREFIX=/usr \
		DESTDIR=$(BUILD_BASE) \
		CFLAGS="$(CFLAGS)"
	touch $(BUILD_WORK)/lz4/.build_complete
endif

lz4-package: lz4-stage
	# lz4.mk Package Structure
	rm -rf $(BUILD_DIST)/lz4
	mkdir -p $(BUILD_DIST)/lz4
	
	# lz4.mk Prep lz4
	$(FAKEROOT) cp -a $(BUILD_STAGE)/lz4/usr $(BUILD_DIST)/lz4
	
	# lz4.mk Sign
	$(call SIGN,lz4,general.xml)
	
	# lz4.mk Make .debs
	$(call PACK,lz4,DEB_LZ4_V)
	
	# lz4.mk Build cleanup
	rm -rf $(BUILD_DIST)/lz4

.PHONY: lz4 lz4-package
