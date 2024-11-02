#ifndef __MAIN_CONFIG_H__
#define __MAIN_CONFIG_H__

#include "Arduino.h"

#define RET_PASS        0
#define RET_FAIL        -1

#define SUCCESS         0
#define FAILED          -1

#define LED_GPIO        LED_BUILTIN

#define PWM_GPIO_A1     D13
#define PWM_GPIO_A2     D12
#define PWM_GPIO_B1     D11
#define PWM_GPIO_B2     D10
#define PWM_GPIO_C1     D9
#define PWM_GPIO_C2     D8

#define RELAY_GPIO_DC   D14
#define RELAY_GPIO_AC   D15

#define CURRENT_ADC_A   A8
#define CURRENT_ADC_B   A9
#define CURRENT_ADC_C   A10

#endif //__MAIN_CONFIG_H__