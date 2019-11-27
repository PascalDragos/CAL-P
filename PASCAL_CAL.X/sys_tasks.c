/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"
#include "light_sig.h"
#include "mcal_init.h"
#include "asw_com.h"
#include "asw_move.h"

T_U16 a = 0;

void TASK_Inits()
{
    MCAL_vInit();
    asw_moveInit();
    asw_dirInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL ,OUTPUT);
}

void TASK_1ms()
{
    
}

void TASK_5ms()
{

}

void TASK_10ms()
{   
    //obstacleDetected(); 
}

void TASK_100ms()
{ 

    lowBattery();
   
    
    
}


void TASK_500ms()
{ 
  //  asw_moveUpAndDown();  
 
}

void TASK_1000ms()
{
    asw_moveRightAndLeft();
  
    
}