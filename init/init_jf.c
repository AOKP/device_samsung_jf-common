/*
Copyright (c) 2013, The Linux Foundation. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:
* Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.
* Redistributions in binary form must reproduce the above
copyright notice, this list of conditions and the following
disclaimer in the documentation and/or other materials provided
with the distribution.
* Neither the name of The Linux Foundation nor the names of its
contributors may be used to endorse or promote products derived
from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <stdlib.h>

#include "vendor_init.h"
#include "property_service.h"
#include "log.h"
#include "util.h"

#include "init_msm.h"

void init_msm_properties(unsigned long msm_id, unsigned long msm_ver, char *board_type)
{
    char platform[PROP_VALUE_MAX];
    char bootloader[PROP_VALUE_MAX];
    char device[PROP_VALUE_MAX];
    char devicename[PROP_VALUE_MAX];
    int rc;

    UNUSED(msm_id);
    UNUSED(msm_ver);
    UNUSED(board_type);

    rc = property_get("ro.board.platform", platform);
    if (!rc || !ISMATCH(platform, ANDROID_TARGET))
        return;

    property_get("ro.bootloader", bootloader);
    if (strstr(bootloader, "R970C")) {
        // jfltecri
        property_set("ro.product.device", "jfltecri");
        property_set("ro.product.model", "SCH-R970C");
        property_set("ro.build.description", "jfltecri-user 4.2.2 JDQ39 R970CVVUAME4 release-keys");
        property_set("ro.build.fingerprint", "samsung/jfltecri/jfltecri:4.2.2/JDQ39/R970CVVUAME4:user/release-keys");
        property_set("ro.cdma.home.operator.numeric", "310090");
        property_set("ro.cdma.home.operator.alpha", "Cricket");
        property_set("ro.gps.set_privacy", "1");
        property_set("ro.telephony.default_network", "8");
        property_set("telephony.lteOnCdmaDevice", "1");
        property_set("gsm.current.phone-type", "2");
    } else if (strstr(bootloader, "R970X")) {
        // jfltecsp
        property_set("ro.product.device", "jfltecsp");
        property_set("ro.product.model", "SCH-R970X");
        property_set("ro.build.description", "jfltecsp-user 4.2.2 JDQ39 R970XWWUAMFA release-keys");
        property_set("ro.build.fingerprint", "samsung/jfltecsp/jfltecsp:4.2.2/JDQ39/R970XWWUAMFA:user/release-keys");
        property_set("ro.cdma.home.operator.numeric", "311230");
        property_set("ro.cdma.home.operator.alpha", "C Spire");
        property_set("ro.gps.set_privacy", "1");
        property_set("ro.telephony.default_network", "8");
        property_set("telephony.lteOnCdmaDevice", "1");
        property_set("telephony.sms.pseudo_multipart", "1");
        property_set("persist.radio.snapshot_enabled", "1");
        property_set("persist.radio.snapshot_timer", "22");
        property_set("ro.config.combined_signal", "true");
        property_set("ro.gsm.data_retry_config=max_retries", "infinite,0,0,60000,120000,480000,900000");
        property_set("DEVICE_PROVISIONED", "1");
        property_set("persist.eons.enabled", "false");
        property_set("gsm.current.phone-type", "2");
    } else if (strstr(bootloader, "L720")) {
        // jfltespr
        property_set("ro.product.device", "jfltespr");
        property_set("ro.product.model", "SPH-L720");
        property_set("ro.build.description", "jfltespr-user 4.2.2 JDQ39 L720VPUAMF9 release-keys");
        property_set("ro.build.fingerprint", "samsung/jfltespr/jfltespr:4.2.2/JDQ39/L720VPUAMF9:user/release-keys");
        property_set("ro.cdma.home.operator.numeric", "310120");
        property_set("ro.cdma.home.operator.alpha", "Sprint");
        property_set("ro.telephony.default_network", "8");
        property_set("telephony.lteOnCdmaDevice", "1");
        property_set("telephony.sms.pseudo_multipart", "1");
        property_set("gsm.current.phone-type", "2");
    } else if (strstr(bootloader, "M919")) {
        // jfltetmo
        property_set("ro.product.device", "jfltetmo");
        property_set("ro.product.model", "SGH-M919");
        property_set("ro.build.description", "jfltetmo-user 4.2.2 JDQ39 M919UVUAMDB release-keys");
        property_set("ro.build.fingerprint", "samsung/jfltetmo/jfltetmo:4.2.2/JDQ39/M919UVUAMDB:user/release-keys");
        property_set("telephony.lteOnGsmDevice", "1");
        property_set("ro.telephony.default_network", "9");
        property_set("gsm.current.phone-type", "1");
    } else if (strstr(bootloader, "R970")) {
        // jflteusc
        property_set("ro.product.device", "jflteusc");
        property_set("ro.product.model", "SCH-R970");
        property_set("ro.build.description", "jflteusc-user 4.2.2 JDQ39 R970VXUAMDB release-keys");
        property_set("ro.build.fingerprint", "samsung/jflteusc/jflteusc:4.2.2/JDQ39/R970VXUAMDB:user/release-keys");
        property_set("ro.gps.set_privacy", "1");
        property_set("ro.cdma.home.operator.numeric", "311225");
        property_set("ro.cdma.home.operator.alpha", "U.S.Cellular");
        property_set("ro.telephony.default_network", "8");
        property_set("telephony.lteOnCdmaDevice", "1");
        property_set("persist.radio.snapshot_enabled", "1");
        property_set("persist.radio.snapshot_timer", "22");
        property_set("ro.config.multimode_cdma", "1");
        property_set("ro.config.combined_signal", "true");
        property_set("ro.gsm.data_retry_config=max_retries", "infinite,5000,5000,60000,120000,480000,900000");
        property_set("DEVICE_PROVISIONED", "1");
        property_set("persist.eons.enabled", "false");
        property_set("ro.telephony.default_cdma_sub", "0");
        property_set("gsm.current.phone-type", "2");
    } else if (strstr(bootloader, "I545")) {
        // jfltevzw
        property_set("ro.product.device", "jfltevzw");
        property_set("ro.product.model", "SCH-I545");
        property_set("ro.build.description", "jfltevzw-user 4.2.2 JDQ39 I545VRUAME7 release-keys");
        property_set("ro.build.fingerprint", "Verizon/jfltevzw/jfltevzw:4.2.2/JDQ39/I545VRUAME7:user/release-keys");
        property_set("ro.cdma.home.operator.numeric", "311480");
        property_set("ro.cdma.home.operator.alpha", "Verizon");
        property_set("ro.telephony.default_network", "8");
        property_set("telephony.lteOnCdmaDevice", "1");
        property_set("persist.radio.snapshot_enabled", "1");
        property_set("persist.radio.snapshot_timer", "22");
        property_set("ro.config.multimode_cdma", "1");
        property_set("ro.config.combined_signal", "true");
        property_set("ro.gsm.data_retry_config=max_retries", "infinite,5000,5000,60000,120000,480000,900000");
        property_set("DEVICE_PROVISIONED", "1");
        property_set("persist.eons.enabled", "false");
        property_set("ro.telephony.default_cdma_sub", "0");
        property_set("gsm.current.phone-type", "2");
    }

    // rild args
    property_set("rild.libargs", "-d /dev/smd0");

    // Hardware info
    property_set("ro.device.chipset", "Qualcomm Snapdragon 600 APQ8064T");
    property_set("ro.device.cpu", "1.9 GHz quad-core Krait 300");
    property_set("ro.device.gpu", "Adreno 300");
    property_set("ro.device.rear_cam", "13 MP");
    property_set("ro.device.front_cam", "2 MP");
    property_set("ro.device.screen_res", "1080x1920");

    property_get("ro.product.device", device);
    strlcpy(devicename, device, sizeof(devicename));
    ERROR("Found bootloader id %s setting build properties for %s device\n", bootloader, devicename);
}
