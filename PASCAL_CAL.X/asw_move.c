#include "asw_move.h"
#include "rte.h"
#include "general.h"
#include "hal_dc.h"
#include "hal_servo.h"

void asw_moveInit()
{
    RTE_vInitMotor();
}

void asw_moveUpAndDown()
{
    static T_U16 time = 0;
    if(time == 0)
    {
        RTE_vSetMotorDir(forward);
        RTE_vSetMotionSpeed(13);
    }
    if(time == 10)
    {
        RTE_vSetMotorDir(backward);
        RTE_vSetMotionSpeed(20);
    }
    if(time < 15)
        ++time;
    else
        time = 0;
    
}

void asw_moveAhead()
{
    RTE_vSetMotorDir(forward);
    RTE_vSetMotionSpeed(13);   
}



void asw_dirInit()
{
    RTE_vInitServo();
}


void asw_moveRightAndLeft()
{
    static T_U16 time = 0;
    switch(time)
    {
        case 1:hal_vSetMotionDirection(50);
        break;
        
        case 2: hal_vSetMotionDirection(60);
        break;
        
        case 3: hal_vSetMotionDirection(70);
        break;
        
        case 4: hal_vSetMotionDirection(80);
        break;
        
        case 5: hal_vSetMotionDirection(90);
        break;
        
        case 6:hal_vSetMotionDirection(100);
        break;
        
        case 7: hal_vSetMotionDirection(110);
        break;
        
        case 8: hal_vSetMotionDirection(110);
        break;
        
        case 9: hal_vSetMotionDirection(130);
        break;
        
        default: hal_vSetMotionDirection(90);
    }
    
    if(time < 9)
        ++time;
    else
        time = 0;
    
}


void asw_moveRightAndLeft2()
{
    static T_U16 time = 0;
    switch(time)
    {
        case 1:hal_vSetMotionDirection(65);
        break;
        
        case 2: hal_vSetMotionDirection(90);
        break;
        
        case 3: hal_vSetMotionDirection(100);
        break;
        
        case 4: hal_vSetMotionDirection(115);
        break;
        
    }
    
    if(time < 5)
        ++time;
    else
        time = 0;
    
    
}
