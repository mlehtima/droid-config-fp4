# Feel free to disable non-critical HA parts during devel by commenting lines out
# Generated in hadk by executing: rpm/dhd/helpers/add_new_device.sh

%package -n patterns-sailfish-device-configuration-fp4
Summary: Jolla Configuration fp4
Requires: patterns-sailfish-device-configuration-common-fp4
Requires: patterns-sailfish-device-adaptation-fp4

Requires: droid-config-fp4-sailfish
Requires: droid-config-fp4-pulseaudio-settings
Requires: droid-config-fp4-policy-settings
Requires: droid-config-fp4-preinit-plugin
Requires: droid-config-fp4-flashing
Requires: droid-config-fp4-bluez5
Requires: droid-hal-version-fp4

# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps

# Early stages of porting benefit from these:
Requires: patterns-sailfish-device-tools

Requires: sailfish-content-graphics-z%{icon_res}

# For multi-SIM devices
Requires: jolla-settings-networking-multisim

# Flashlight
Requires: jolla-settings-system-flashlight

# For devices which support NFC
Requires: jolla-settings-system-nfc
Requires: nfcd-dbuslog-plugin
Requires: nfcd-mce-plugin

# Introduced starting Sailfish OS 2.0.4.x:
# 3rd party accounts like Twitter, VK, cloud services, etc
Requires: jolla-settings-accounts-extensions-3rd-party-all

# Introduced starting Sailfish OS 2.1.1.26
# Required for Jolla Store Access
Requires: patterns-sailfish-consumer-generic

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Devices with 2G or more memory should also include this booster
# to improve camera startup times and the like
Requires: mapplauncherd-booster-silica-qt5-media

%description -n patterns-sailfish-device-configuration-fp4
Pattern with packages for fp4 configurations

%files -n patterns-sailfish-device-configuration-fp4
