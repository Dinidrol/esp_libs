#ifndef __SSD1306_H__
#define __SSD1306_H__

#include <stdbool.h>
#include <i2cdev.h>
#include <esp_err.h>

#ifdef __cplusplus
extern "C" {
#endif

#define SSD1306_DEVICE_ADDRESS 0x3C

#if ! defined BIT
#define BIT( n ) ( 1 << n )
#endif

typedef enum {
    SSDCmd_Set_Contrast = 0x81,
    SSDCmd_Set_Display_Show_RAM = 0xA4,
    SSDCmd_Set_Display_Ignore_RAM = 0xA5,
    SSDCmd_Set_Normal_Display = 0xA6,
    SSDCmd_Set_Inverted_Display = 0xA7,
    SSDCmd_Set_Display_Off = 0xAE,
    SSDCmd_Set_Display_On = 0xAF,
    SSDCmd_Set_Memory_Addressing_Mode = 0x20,
    SSDCmd_Set_Mux_Ratio = 0xA8,
    SSDCmd_Nop = 0xE3,
    SSDCmd_Set_Display_Offset = 0xD3,
    SSDCmd_Set_Display_Start_Line = 0x40,
    SSDCmd_Set_Display_HFlip_Off = 0xA0,
    SSDCmd_Set_Display_HFlip_On = 0xA1,
    SSDCmd_Set_Display_VFlip_Off = 0xC0,
    SSDCmd_Set_Display_VFlip_On = 0xC8,
    SSDCmd_Set_COM_Pin_Config = 0xDA,
    SSDCmd_Set_Display_CLK = 0xD5,
    SSDCmd_Enable_Charge_Pump_Regulator = 0x8D,
    SSDCmd_Set_Column_Address = 0x21,
    SSDCmd_Set_Page_Address = 0x22
} SSDCmd;

typedef enum {
    AddressMode_Horizontal = 0,
    AddressMode_Vertical,
    AddressMode_Page,
    AddressMode_Invalid
} SSD1306_AddressMode;



#endif __SSD1306_H__