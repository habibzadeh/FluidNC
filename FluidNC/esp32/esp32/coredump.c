// Copyright 2022 Mitch Bradley
// Use of this source code is governed by a GPLv3 license that can be found in the LICENSE file.
//
// Noop replacements for ESP-IDF coredump routines.
// This suppresses complaints about not being able to find a coredump partition.
// We don't want to waste space for such a partition, and the Arduino Framework
// enables coredumps.  We override that by stubbing out these routines.

#include <stddef.h>
#include "esp_err.h"
#include "esp_private/panic_internal.h"
// #include "esp_core_dump_summary_port.h"
#include "esp_core_dump.h"

#ifdef __cplusplus
extern "C" {
#endif

// cppcheck-suppress unusedFunction
esp_err_t esp_core_dump_get_summary(esp_core_dump_summary_t* summary) {
    return ESP_ERR_NOT_FOUND;
}

// cppcheck-suppress unusedFunction
void esp_core_dump_write(panic_info_t* info) {}

// cppcheck-suppress unusedFunction
esp_err_t esp_core_dump_get_panic_reason(char* reason_buffer, size_t buffer_size) {
    return ESP_ERR_NOT_FOUND;
}

// cppcheck-suppress unusedFunction
void esp_core_dump_init(void) {}

// cppcheck-suppress unusedFunction
void esp_core_dump_flash_init(void) {}

// cppcheck-suppress unusedFunction
void esp_core_dump_to_flash(void* info) {}

// cppcheck-suppress unusedFunction
esp_err_t esp_core_dump_image_check(void) {
    return ESP_ERR_NOT_FOUND;
}
// cppcheck-suppress unusedFunction
esp_err_t esp_core_dump_image_get(size_t* out_addr, size_t* out_size) {
    return ESP_ERR_NOT_FOUND;
}
// cppcheck-suppress unusedFunction
esp_err_t esp_core_dump_image_erase(void) {
    return ESP_OK;
}

#ifdef __cplusplus
}
#endif
