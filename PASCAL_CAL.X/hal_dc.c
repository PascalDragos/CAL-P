
#include "hal_dc.h"
#include "mcal_pwm.h"
#include "mcal_gpio.h"
#include "mcal_gpio.h"

void hal_vInitMotor(void)
{
    PWM1_vInit();
    GPIO_u8SetPortPin(PORT_A, 9, DIGITAL, OUTPUT);
    
}

void hal_vSetMotorDir(direction dir)
{
    GPIO_u8WritePortPin(PORT_A, 9, dir);
}

void hal_vSetMotionSpeed(T_F16 speed)
{
    if (speed < 0)
        speed = 0;
    if (speed > 100)
        speed = 100;
              
    PWM1_vSetDuty(speed, 2);
}




