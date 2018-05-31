/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* This file is used to define the properties of the filesystem
** images generated by build tools (mkbootfs and mkyaffs2image) and
** by the device side of adb.
*/

#include <private/android_filesystem_config.h>

#define NO_ANDROID_FILESYSTEM_CONFIG_DEVICE_DIRS
/* static const struct fs_path_config android_device_dirs[] = { }; */

/* Rules for files.
** These rules are applied based on "first match", so they
** should start with the most specific path and work their
** way up to the root. Prefixes ending in * denotes wildcard
** and will allow partial matches.
*/
static const struct fs_path_config android_device_files[] = {
    { 00755, AID_SYSTEM,    AID_SYSTEM,    (1ULL << CAP_NET_BIND_SERVICE), "vendor/bin/pm-service" },
    { 00755, AID_SYSTEM,    AID_SYSTEM,    (1ULL << CAP_NET_BIND_SERVICE), "vendor/bin/cnss-daemon"},
    { 00755, AID_SYSTEM,    AID_SYSTEM,    (1ULL << CAP_NET_BIND_SERVICE), "vendor/bin/imsdatadaemon" },
    { 00755, AID_SYSTEM,    AID_SYSTEM,    (1ULL << CAP_NET_BIND_SERVICE)
      | (1ULL << CAP_BLOCK_SUSPEND), "vendor/bin/cnd" },
    { 00755, AID_SYSTEM,    AID_RADIO,     (1ULL << CAP_NET_BIND_SERVICE), "vendor/bin/ims_rtp_daemon" },
    { 00755, AID_SYSTEM,    AID_SYSTEM,    (1ULL << CAP_SYS_NICE) | (1ULL << CAP_BLOCK_SUSPEND), "vendor/bin/wcnss_filter" },
#ifdef NO_ANDROID_FILESYSTEM_CONFIG_DEVICE_DIRS
    { 00000, AID_ROOT,      AID_ROOT,      0, "system/etc/fs_config_dirs" },
#endif
};
