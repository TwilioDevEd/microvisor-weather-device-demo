/**
 *
 * Microvisor Weather Device Demo
 * Version 1.3.4
 * Copyright © 2022, Twilio
 * Licence: Apache 2.0
 *
 */
#ifndef _HT16K33_HEADER_
#define _HT16K33_HEADER_


/*
 * CONSTANTS
 */
#define     HT16K33_I2C_ADDR                0x70
#define     HT16K33_CMD_POWER_ON            0x21
#define     HT16K33_CMD_DISPLAY_ON          0x81
#define     HT16K33_CMD_BRIGHTNESS          0xE0


/*
 * PROTOTYPES
 */
void        HT16K33_init(uint8_t angle);
void        HT16K33_write_cmd(uint8_t cmd);
void        HT16K33_draw(void);
void        HT16K33_clear_buffer(void);
void        HT16K33_set_brightness(uint8_t brightness);
void        HT16K33_plot(uint8_t x, uint8_t y, bool is_set);
void        HT16K33_print(const char *text, uint32_t delay_ms);
void        HT16K33_define_character(const char* sprite, uint8_t index);
void        HT16K33_draw_def_char(uint8_t v);
void        HT16K33_rotate(uint8_t angle);


#endif  // _HT16K33_HEADER_
