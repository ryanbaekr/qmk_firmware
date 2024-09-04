<<<<<<<< HEAD:keyboards/lemokey/common/lemokey_task.h
/* Copyright 2022 @ Keychron (https://www.lemokey.com)
========
/* Copyright 2023 Deemen17 <https://github.com/Deemen17>
>>>>>>>> 2024jan:keyboards/deemen17/de60fs/config.h
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

<<<<<<<< HEAD:keyboards/lemokey/common/lemokey_task.h
#include "stdint.h"
#include "action.h"

bool lemokey_task_kb(void);
bool process_record_lemokey_kb(uint16_t keycode, keyrecord_t *record);
void lemokey_task(void);
========
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define RP2040_FLASH_GENERIC_03H
>>>>>>>> 2024jan:keyboards/deemen17/de60fs/config.h
