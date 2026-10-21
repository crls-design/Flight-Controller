/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU STM32H743

#define BOARD_NAME CRLSH743
#define MANUFACTURER_ID CRLS

#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_ACCGYRO_ICM45686 // drop-in alternative on the same footprint
#define USE_SDCARD
#define USE_SDCARD_SDIO

// Baro is an ICP-20100 on I2C1 (0x63); Betaflight has no ICP201xx driver yet

#define MOTOR1_PIN PA7
#define MOTOR2_PIN PA6
#define MOTOR3_PIN PB1
#define MOTOR4_PIN PB0
#define MOTOR5_PIN PD12
#define MOTOR6_PIN PD13
#define MOTOR7_PIN PD14
#define MOTOR8_PIN PD15
#define SERVO1_PIN PC8
#define SERVO2_PIN PC6
#define SERVO3_PIN PC9
#define SERVO4_PIN PC7
#define LED_STRIP_PIN PE5

#define UART2_TX_PIN PA2
#define UART3_TX_PIN PD8
#define UART4_TX_PIN PD1
#define UART7_TX_PIN PE8
#define UART8_TX_PIN PE1
#define UART2_RX_PIN PA3
#define UART3_RX_PIN PD9
#define UART4_RX_PIN PD0
#define UART7_RX_PIN PE7
#define UART8_RX_PIN PE0

#define I2C1_SCL_PIN PB6
#define I2C2_SCL_PIN PB10
#define I2C1_SDA_PIN PB7
#define I2C2_SDA_PIN PB11

#define SPI2_SCK_PIN PD3
#define SPI3_SCK_PIN PC10
#define SPI4_SCK_PIN PE12
#define SPI2_SDI_PIN PC2
#define SPI3_SDI_PIN PC11
#define SPI4_SDI_PIN PE13
#define SPI2_SDO_PIN PC1
#define SPI3_SDO_PIN PC12
#define SPI4_SDO_PIN PE6

#define ADC_VBAT_PIN PA1

#define SDIO_CK_PIN PD6
#define SDIO_CMD_PIN PD7
#define SDIO_D0_PIN PB14
#define SDIO_D1_PIN PB15
#define SDIO_D2_PIN PB3
#define SDIO_D3_PIN PB4

#define GYRO_1_EXTI_PIN PC0
#define GYRO_2_EXTI_PIN PD2
#define GYRO_3_EXTI_PIN PC5
#define GYRO_1_CS_PIN PC15
#define GYRO_2_CS_PIN PA15
#define GYRO_3_CS_PIN PA5

// TIM1 (PWM13-16: PE14, PA8, PA10, PA9) is left unmapped so DShot bitbang
// can use it as its pacer timer
#define TIMER_PIN_MAPPING TIMER_PIN_MAP(0, PA7, 2, 0) TIMER_PIN_MAP(1, PA6, 1, 0) TIMER_PIN_MAP(2, PB1, 2, 0) TIMER_PIN_MAP(3, PB0, 2, 0) TIMER_PIN_MAP(4, PD12, 1, 0) TIMER_PIN_MAP(5, PD13, 1, 0) TIMER_PIN_MAP(6, PD14, 1, 0) TIMER_PIN_MAP(7, PD15, 1, 0) TIMER_PIN_MAP(8, PC8, 2, -1) TIMER_PIN_MAP(9, PC6, 2, -1) TIMER_PIN_MAP(10, PC9, 2, -1) TIMER_PIN_MAP(11, PC7, 2, -1) TIMER_PIN_MAP(12, PE5, 1, 0)

#define ADC1_DMA_OPT 8
#define TIMUP1_DMA_OPT 0

#define MAG_I2C_INSTANCE I2CDEV_2

#define DEFAULT_RX_FEATURE FEATURE_RX_SERIAL

#define DEFAULT_BLACKBOX_DEVICE BLACKBOX_DEVICE_SDCARD
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_NONE
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE_DEFAULT 206 // 10 * (100k + 5.1k) / 5.1k

#define SDCARD_DETECT_PIN NONE
#define SDIO_DEVICE SDIODEV_2
#define SDIO_USE_4BIT 1

#define GYRO_1_SPI_INSTANCE SPI2
#define GYRO_1_ALIGN CW0_DEG_FLIP
#define GYRO_2_SPI_INSTANCE SPI3
#define GYRO_2_ALIGN CW90_DEG_FLIP
#define GYRO_3_SPI_INSTANCE SPI4
#define GYRO_3_ALIGN CW270_DEG_FLIP
