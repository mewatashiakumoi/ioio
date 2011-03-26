#ifndef __BOOTLOADERDEFS_H__
#define __BOOTLOADERDEFS_H__

#include "GenericTypeDefs.h"

// attribute for variables that can be recycled after bootloader terminates,
// i.e. located in application data space.
#define BOOTDATA __attribute__((section("bootdata"),far))
#define BOOTCNST __attribute__((space(auto_psv)))

#define BOOTLOADER_MIN_APP_ADDRESS 0x5000
#define BOOTLOADER_MAX_APP_ADDRESS 0x15300
#define BOOTLOADER_FINGERPRINT_ADDRESS BOOTLOADER_MAX_APP_ADDRESS
#define BOOTLOADER_FINGERPRINT_PAGE (BOOTLOADER_FINGERPRINT_ADDRESS & 0xFFFFF400)
#define BOOTLOADER_INVALID_ADDRESS ((DWORD) -1)

static const char manager_app_name[] = "ioio.manager";


#endif  // __BOOTLOADERDEFS_H__
