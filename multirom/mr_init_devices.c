#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{


	"/sys/class/graphics/fb0",

	"/sys/block/mmcblk0",
	"/sys/devices/soc",
        "/sys/devices/soc/7824900.sdhci",
	"/sys/devices/soc/7824900.sdhci/mmc_host",
	"/sys/devices/soc/7824900.sdhci/mmc_host",
	"/sys/devices/soc/7824900.sdhci/mmc_host/mmc0",
	"/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001",
	"/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
	"/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p21", //boot
	"/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p25", //cache
	"/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p1", //modem
	"/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p26", //persist
	"/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p24", //system
	"/sys/devices/soc/7824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p49", //userdata

//sdcard
	"/sys/devices/soc/7864900.sdhci/mmc_host/mmc1",
        "/sys/bus/mmc",
	"/sys/bus/mmc/drivers/mmcblk",
        "/sys/module/msm_bus_core",
	"/sys/module/mmcblk",

	"/sys/devices/virtual/input*",
        "/sys/devices/soc/soc:gpio_keys/input*",
	"/sys/devices/virtual/misc/uinput",

	// for adb
	"/sys/devices/virtual/tty/ptmx",
	"/sys/devices/virtual/android_usb/android0*",
	"/sys/bus/usb",

	NULL
};

