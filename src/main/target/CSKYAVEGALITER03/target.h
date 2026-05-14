/*
* This file is part of Cleanflight.
*
* Cleanflight is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Cleanflight is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define TARGET_BOARD_IDENTIFIER "CSKYAVEGALITER03"
#define USBD_PRODUCT_STRING     "CSKYAVEGALITER03"

//LEDS
#define LED0                    PC1    //green
#define LED1                    PF3    //blue

//BEEPER
#define BEEPER                  PD1
#define BEEPER_INVERTED

//IMU
#define USE_IMU_MPU6000
#define IMU_MPU6000_ALIGN       CW0_DEG_FLIP
#define MPU6000_CS_PIN          PB12
#define MPU6000_SPI_BUS         BUS_SPI2

//BARO
#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C2
#define USE_BARO_BMP388
#define BMP388_I2C_ADDR         0x77

#define USE_MAG
#define USE_MAG_ALL
#define MAG_I2C_BUS             BUS_I2C2

//UARTS-------------------------------------
#define USE_VCP
#define VBUS_SENSING_PIN PA9
#define VBUS_SENSING_ENABLED

#define USE_UART1
#define UART1_RX_PIN            PB7
#define UART1_TX_PIN            PB6

#define USE_UART2
#define UART2_RX_PIN            PA2
#define UART2_TX_PIN            PA3

#define USE_UART3
#define UART3_RX_PIN            PD9
#define UART3_TX_PIN            PD8

#define USE_UART5
#define UART5_TX_PIN            PC12
#define UART5_RX_PIN            PD2

#define USE_UART4
#define UART4_RX_PIN            PA1
#define UART4_TX_PIN            PA0

#define USE_UART6
#define UART6_RX_PIN            PG9
#define UART6_TX_PIN            PG14

#define USE_UART7
#define UART7_RX_PIN            PE7
#define UART7_TX_PIN            PE8

#define USE_UART8
#define UART8_RX_PIN            PE0
#define UART8_TX_PIN            PE1

#define SERIAL_PORT_COUNT       8
//UARTS--------------------------------------


//SPI----------------------------------------
//OSD
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PB4
#define SPI1_MOSI_PIN           PB5

//IMU
#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PC2
#define SPI2_MOSI_PIN           PC3

//SDCARD -----------------------------------
#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN            PC10
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PD6

#define USE_SDCARD
#define USE_SDCARD_SPI
#define SDCARD_SPI_BUS          BUS_SPI3
#define SDCARD_CS_PIN           PD7

#define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT
//------------------------------------------

#define USE_I2C
#define USE_I2C_DEVICE_2
#define I2C2_SCL                PF1
#define I2C2_SDA                PF0

//OSD
#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI1
#define MAX7456_CS_PIN          PF4

//PINIO-------------------------------------
#define USE_PINIO
#define USE_PINIOBOX
#define PINIO1_PIN           PE6    // S5
#define PINIO2_PIN           PE5    // S6
#define PINIO3_PIN           PB1    // S7
#define PINIO4_PIN           PB0    // S8
//------------------------------------------


#define USE_LED_STRIP
#define WS2811_PIN                      PB14

#define BOARD_HAS_VOLTAGE_DIVIDER
#define USE_ADC
#define ADC_CHANNEL_1_PIN               PC5
#define ADC_CHANNEL_2_PIN               PA4
#define ADC_CHANNEL_3_PIN               PC0
#define VBAT_ADC_CHANNEL                ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL       ADC_CHN_2
#define RSSI_ADC_CHANNEL                ADC_CHN_3

#define VBAT_SCALE_DEFAULT              2083

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_CRSF
#define SERIALRX_UART           SERIAL_PORT_USART2

#define SENSORS_SET (SENSOR_ACC | SENSOR_BARO)
#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL | FEATURE_OSD | FEATURE_VBAT | FEATURE_CURRENT_METER | FEATURE_BLACKBOX | FEATURE_TELEMETRY | FEATURE_LED_STRIP)

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff
#define TARGET_IO_PORTE         0xffff
#define TARGET_IO_PORTF         0xffff
#define TARGET_IO_PORTG         0xffff

#define USE_DSHOT
#define USE_ESC_SENSOR

#define MAX_PWM_OUTPUT_PORTS    8
