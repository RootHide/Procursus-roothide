ifneq ($(PROCURSUS),1)
$(error Use the main Makefile)
endif

STRAPPROJECTS     += launchctl
LAUNCHCTL_COMMIT  := 8cf5e3b2a57f24f7262ac5f336c0a1d372ce8ba9
LAUNCHCTL_VERSION := 1.1.1-2
DEB_LAUNCHCTL_V   ?= 1:$(LAUNCHCTL_VERSION)

launchctl-setup: setup
	$(call GITHUB_ARCHIVE,roothide,launchctl,$(LAUNCHCTL_COMMIT),$(LAUNCHCTL_COMMIT))
	$(call EXTRACT_TAR,launchctl-$(LAUNCHCTL_COMMIT).tar.gz,launchctl-$(LAUNCHCTL_COMMIT),launchctl)

ifneq ($(wildcard $(BUILD_WORK)/launchctl/.build_complete),)
launchctl:
	@echo "Using previously built launchctl."
else
launchctl: launchctl-setup
	mkdir -p $(BUILD_STAGE)/launchctl/{$(MEMO_PREFIX)$(MEMO_SUB_PREFIX)/{bin,share/man/man{1,5,8}},$(MEMO_PREFIX)/bin}
	$(MAKE) -C $(BUILD_WORK)/launchctl install \
		PREFIX="$(MEMO_PREFIX)$(MEMO_SUB_PREFIX)" \
		DESTDIR="$(BUILD_STAGE)/launchctl" \
		LDFLAGS="$(LDFLAGS) -lroothide "
ifneq ($(MEMO_SUB_PREFIX),)
	$(LN_S) $(MEMO_PREFIX)$(MEMO_SUB_PREFIX)/bin/launchctl $(BUILD_STAGE)/launchctl/$(MEMO_PREFIX)/bin/launchctl
endif
	$(INSTALL) -m644 $(BUILD_MISC)/launchctl/launchctl.1 $(BUILD_STAGE)/launchctl/$(MEMO_PREFIX)$(MEMO_SUB_PREFIX)/share/man/man1/
	$(INSTALL) -m644 $(BUILD_MISC)/launchctl/launchd.plist.5 $(BUILD_STAGE)/launchctl/$(MEMO_PREFIX)$(MEMO_SUB_PREFIX)/share/man/man5/
	$(INSTALL) -m644 $(BUILD_MISC)/launchctl/launchd.8 $(BUILD_STAGE)/launchctl/$(MEMO_PREFIX)$(MEMO_SUB_PREFIX)/share/man/man8/
	$(call AFTER_BUILD)
endif

launchctl-package: launchctl-stage
	# launchctl.mk Package Structure
	rm -rf $(BUILD_DIST)/launchctl

	# launchctl.mk Prep launchctl
	cp -a $(BUILD_STAGE)/launchctl $(BUILD_DIST)/

	# launchctl.mk Sign launchctl
	$(call SIGN,launchctl,launchctl.xml)

	# launchctl.mk Make .debs
	$(call PACK,launchctl,DEB_LAUNCHCTL_V)

	# launchctl.mk Build cleanup
	rm -rf $(BUILD_DIST)/launchctl

.PHONY: launchctl launchctl-package
