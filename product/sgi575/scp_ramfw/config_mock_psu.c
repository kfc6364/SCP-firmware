/*
 * Arm SCP/MCP Software
 * Copyright (c) 2018-2019, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <fwk_element.h>
#include <fwk_module.h>
#include <mod_mock_psu.h>

static const struct fwk_element element_table[] = {
    {
        .name = "DVFS_GROUP0",
        .data =
            &(const struct mod_mock_psu_device_config){
                .default_enabled = true,
                .default_voltage = 100,
            },
    },
    {
        .name = "DVFS_GROUP1",
        .data =
            &(const struct mod_mock_psu_device_config){
                .default_enabled = true,
                .default_voltage = 100,
            },
    },
    { 0 }
};

static const struct fwk_element *get_element_table(fwk_id_t module_id)
{
    return element_table;
}

const struct fwk_module_config config_mock_psu = {
    .get_element_table = get_element_table,
};
