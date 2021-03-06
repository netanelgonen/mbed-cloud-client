// ----------------------------------------------------------------------------
// Copyright 2016-2017 ARM Ltd.
//
// SPDX-License-Identifier: Apache-2.0
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ----------------------------------------------------------------------------

#ifndef ARM_UC_PAL_FILESYSTEM_UTILS
#define ARM_UC_PAL_FILESYSTEM_UTILS

#include "update-client-common/arm_uc_error.h"
#include "update-client-common/arm_uc_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    FIRMWARE_IMAGE_ITEM_HEADER = 0,
    FIRMWARE_IMAGE_ITEM_DATA
} firmwareImageItemType;

arm_uc_error_t arm_uc_pal_filesystem_get_path(uint32_t location, firmwareImageItemType what, char *dest,
                                              uint32_t dest_size);

#ifdef __cplusplus
}
#endif

#endif // ARM_UC_PAL_FILESYSTEM_UTILS
