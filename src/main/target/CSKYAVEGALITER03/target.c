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

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/sensor.h"
#include "drivers/bus.h"

//BUSDEV_REGISTER_SPI_TAG(busdev_mpu6000,     DEVHW_MPU6000,      MPU6000_SPI_BUS,    MPU6000_CS_PIN,     NONE,       0,  DEVFLAGS_NONE,  IMU_MPU6000_ALIGN);

timerHardware_t timerHardware[] = {
    // DEF_TIM(TIM3, CH3, PB0,  TIM_USE_PPM,         0, 0),   // PPM shared uart6 pc7

    DEF_TIM(TIM1, CH4, PE14, TIM_USE_OUTPUT_AUTO, 0, 0),   // S1_OUT D(2, 4, 6)
    DEF_TIM(TIM1, CH3, PE13, TIM_USE_OUTPUT_AUTO, 0, 1),   // S2_OUT D(2, 6, 6)
    DEF_TIM(TIM1, CH2, PE11, TIM_USE_OUTPUT_AUTO, 0, 1),   // S3_OUT D(2, 2, 6)
    DEF_TIM(TIM1, CH1, PE9,  TIM_USE_OUTPUT_AUTO, 0, 1),   // S4_OUT D(2, 1, 6)

    DEF_TIM(TIM3, CH4, PC9, TIM_USE_OUTPUT_AUTO, 0, 0),   // S5_OUT D(1, 2, 5)
    DEF_TIM(TIM3, CH3, PC8, TIM_USE_OUTPUT_AUTO, 0, 0),   // S6_OUT D(1, 7, 5)
    DEF_TIM(TIM3, CH2, PC7, TIM_USE_OUTPUT_AUTO, 0, 0),   // S7_OUT D(1, 5, 5)
    DEF_TIM(TIM3, CH1, PC6, TIM_USE_OUTPUT_AUTO, 0, 0),   // S8_OUT D(1, 4, 5)

    DEF_TIM(TIM2, CH1, PA15, TIM_USE_OUTPUT_AUTO,      0, 0),  // "S1"  D(1, 5, 3)
    DEF_TIM(TIM2, CH4, PB11, TIM_USE_OUTPUT_AUTO,      0, 0),  // "S2"  D(1, 7, 3)
    DEF_TIM(TIM2, CH2, PB3, TIM_USE_OUTPUT_AUTO,      0, 0),  // "S3"   D(1, 6, 3)
    DEF_TIM(TIM2, CH3, PB10, TIM_USE_OUTPUT_AUTO,      0, 0),  // "S4"  D(1, 1, 3)

    DEF_TIM(TIM12, CH1, PB14, TIM_USE_LED, 0, 0 ), // LED1

};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
