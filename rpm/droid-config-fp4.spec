%define device FP4
%define vendor fairphone

%define rpm_device fp4
%define rpm_vendor fairphone

%define vendor_pretty Fairphone
%define device_pretty Fairphone 4

# Community HW adaptations need this
%define community_adaptation 1

#define provides_own_board_mapping 1
%define out_of_image_files 1

%define android_version_major 13

%define pixel_ratio 1.75

# Device-specific ofono configuration
Provides: ofono-configs
Obsoletes: ofono-configs-mer
Obsoletes: ofono-configs-binder

# No device reset
Provides: jolla-settings-system-reset

# Device-specific usb-moded configuration
Provides: usb-moded-configs
Obsoletes: usb-moded-defaults

Obsoletes: audioflingerglue

Obsoletes: bluez5-configs-mer

Requires: libgbinder-tools

%define ofono_enable_plugins bluez5,hfp_ag_bluez5
%define ofono_disable_plugins bluez4,dun_gw_bluez4,hfp_ag_bluez4,hfp_bluez4,dun_gw_bluez5,hfp_bluez5

%include droid-configs-device/droid-configs.inc
%include patterns/patterns-sailfish-device-adaptation-fp4.inc
%include patterns/patterns-sailfish-device-configuration-fp4.inc
