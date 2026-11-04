/*
 * SPDX-FileCopyrightText: 2022-2023 Espressif Systems (Shanghai) CO LTD
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "esp_err.h"
#include "esp_log.h"

// Stub implementations to replace ESP-NOW functionality for offline builds

esp_err_t espnow_ctrl_responder_bind(uint32_t wait_ms, int8_t rssi, void *cb)
{
    return ESP_OK;
}

esp_err_t espnow_ctrl_responder_data(void *cb)
{
    return ESP_OK;
}

esp_err_t espnow_ctrl_initiator_bind(uint32_t initiator_attribute, bool enable)
{
    return ESP_OK;
}

esp_err_t espnow_ctrl_initiator_send(uint32_t initiator_attribute, uint32_t responder_attribute, uint32_t responder_value)
{
    return ESP_OK;
}

esp_err_t espnow_ctrl_recv(void *cb)
{
    return ESP_OK;
}
