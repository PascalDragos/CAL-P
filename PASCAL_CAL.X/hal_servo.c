#include "mcal_pwm.h"
#define rez 0.117  
#define ANGLE_MIN 65
#define offset 4

void hal_vInitServo(void)
{
    PWM1_vInit();
}


void hal_vSetMotionDirection(T_F16 angle) //angle between 65, 115
{
 
    T_F16 duty;
    if(angle < 65)
    {
        angle = 65;
    }
    else
        if(angle > 115)
        {
            angle = 115;
        }
    
    duty = (angle  - ANGLE_MIN) * rez + offset;
    
    PWM1_vSetDuty(duty, 1);
    
/*   
 *  T_F16 duty_cycle;
    T_F16 duty_cycleb; 
    duty_cycle = (angle - 4) * rez + 4;  
    duty_cycleb = 7.5 + (angle - 90)/80 * 3.5;
    
    
    if(duty_cycle > 8.81)
        duty_cycle = 8.81;
    if (duty_cycle < 6.15)
        duty_cycle = 6.15;
    
    PWM1_vSetDuty(duty_cycle, 1);
    
    int a =5;

  
 */
  
}
