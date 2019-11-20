
#include "hal_dc.h"
#include "mcal_pwm.h"
#include "mcal_gpio.h"
#include "mcal_gpio.h"

extern void hal_vInitMotor(void)
{
    PWM1_vInit();
    GPIO_u8SetPortPin(PORT_A, 9, DIGITAL, OUTPUT);
    
}

extern void hal_vSetMotorDir(direction dir)
{
    GPIO_u8WritePortPin(PORT_A, 9, dir);
}

extern void hal_vSetMotionSpeed(T_F16 speed)
{
   
    PWM1_vSetDuty(speed, 2);
}



extern void hal_vSetMotionDirection(T_F16 direction) //direction between -1, 1
{
    // timp total 20 sec la pwm
    // 1 ms -> -90
    // 1.5 ms -> 0
    // 2 ms -> +90;
    
    // -1 -> 5%
    // 0 -> 7.5%
    // 1 -> 10%
    
    // 7.5 + 2.5 * x
    
    direction = 7.5 + 2.5 * direction;
    
    
    PWM1_vSetDuty(direction, 1);
}

