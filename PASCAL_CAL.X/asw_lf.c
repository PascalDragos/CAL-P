#include "asw_lf.h"
#include "asw_move.h"
#include "rte.h"
#include "general.h"
#include "hal_dc.h"
#include "hal_servo.h"
#include "hal_lf.h"

void asw_readLineFollower()
{
    T_U8 value =  RTE_vGetLineFollwer();
    int a;
   
}


void moveOnWhite()
{
    T_U16 value =  RTE_vGetLineFollwer();
    if (value == 0x00)
    {
           RTE_vSetMotorDir(forward);
           RTE_vSetMotionSpeed(13);  
    }
    else        
    {
        RTE_vSetMotorDir(backward);
        RTE_vSetMotionSpeed(10);  
    }
}