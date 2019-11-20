#include "asw_move.h"
#include "rte.h"
#include "general.h"
#include "hal_dc.h"


extern void asw_moveInit()
{
    RTE_vInitMotor();
  
    
}

extern void asw_moveUpAndDown()
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


extern void asw_moveRightAndLeft()
{
    static T_U16 time = 0;
    if(time == 0)
    {
        RTE_vSetMotionDirection(1);
    }
    if(time == 5)
    {
        RTE_vSetMotionDirection(-1);
    }
      if(time == 5)
    {
        RTE_vSetMotionDirection(0);
    }
    if(time < 15)
        ++time;
    else
        time = 0;
    
}
