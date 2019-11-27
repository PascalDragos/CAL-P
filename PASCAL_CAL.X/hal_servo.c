#include "mcal_pwm.h"
#define rez 0.04375  


void hal_vInitServo(void)
{
    PWM1_vInit();
}


void hal_vSetMotionDirection(T_F16 angle) //angle between 10, 170
{
    T_F16 duty_cycle;
    T_F16 duty_cycleb;
    
    duty_cycle = (angle - 4) * rez + 4;  
    duty_cycleb = 7.5 + (angle - 90)/80 * 3.5;
    
    
    if(duty_cycle > 8.81)
        duty_cycle = 8.81;
    if (duty_cycle < 6.15)
        duty_cycle = 6.15;
    
    PWM1_vSetDuty(duty_cycle, 1);
    
    int a =5;
}
