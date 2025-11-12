//
//  kern_start.cpp
//  Sample
//
//  Created by royalgraphx on 11/9/24.
//  Edited by Calebh101 (all credit goes to the guy above)
//

#include "kern_start.hpp"

// Main Function
void sampleInit() {
    panic("Did you really think this kext would fix all your GPU problems?");
}

const char *bootargOff[] {
    "-imnotdumb"
};

PluginConfiguration ADDPR(config) {
    xStringify(PRODUCT_NAME),
    parseModuleVersion(xStringify(MODULE_VERSION)),
    LiluAPI::AllowNormal |
    LiluAPI::AllowSafeMode |
    LiluAPI::AllowInstallerRecovery,
    bootargOff,
    arrsize(bootargOff),
    KernelVersion::Mavericks,
    KernelVersion::Sequoia,
    []() {
        sampleInit();
    }
};
