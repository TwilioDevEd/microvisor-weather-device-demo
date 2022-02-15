/**
 *
 * Microvisor Weather Device Demo
 * Version 1.0.0
 * Copyright © 2022, Twilio
 * Licence: Apache 2.0
 *
 */
#ifndef _MAIN_H_
#define _MAIN_H_


/*
 * INCLUDES
 */
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

// Microvisor includes
#include "stm32u5xx_hal.h"
#include "cmsis_os.h"
#include "mv_syscalls.h"

// App includes
#include "logging.h"
#include "ht16k33.h"
#include "i2c.h"
#include "http.h"
#include "openweather.h"
#include "cJson.h"


#ifdef __cplusplus
extern "C" {
#endif


/*
 * CONSTANTS
 */
#define     LED_GPIO_BANK           GPIOA
#define     LED_GPIO_PIN            GPIO_PIN_5
#define     LED_FLASH_PERIOD        1000

#define     BUTTON_GPIO_BANK        GPIOF
#define     BUTTON_GPIO_PIN         GPIO_PIN_6

#define     DEBUG_TASK_PAUSE        1000
#define     DEFAULT_TASK_PAUSE      500

#define     WEATHER_READ_PERIOD     300000
#define     CHANNEL_KILL_PERIOD     15000

#define     CLEAR_DAY               0
#define     RAIN                    1
#define     DRIZZLE                 2
#define     SNOW                    3
#define     SLEET                   4
#define     WIND                    5
#define     FOG                     6
#define     CLOUDY                  7
#define     PARTLY_CLOUDY           8
#define     THUNDERSTORM            9
#define     TORNADO                 10
#define     CLEAR_NIGHT             11
#define     NONE                    12


/*
 * PROTOTYPES
 */
void        system_clock_config(void);
void        GPIO_init(void);
void        start_led_task(void *argument);
void        start_iot_task(void *argument);

void        log_device_info(void);
void        log_error(const char* msg, uint32_t value);
void        format_string(char* out_str, const char* in_str, uint32_t value);
void        sleep_ms(uint32_t ms);


#ifdef __cplusplus
}
#endif


#endif      // _MAIN_H_