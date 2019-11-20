/* 
 * File:   hal_dc.h
 * Author: student
 *
 * Created on November 20, 2019, 6:14 PM
 */

#ifndef HAL_DC_H
#define	HAL_DC_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "general.h"
    
typedef enum _direction {forward, backward} direction;

extern void hal_vInitMotor(void);
extern void hal_vSetMotorDir(direction dir);
extern void hal_vSetMotionSpeed(T_F16 speed);
extern void hal_vSetMotionDirection(T_F16 direction);



#ifdef	__cplusplus
}
#endif

#endif	/* HAL_DC_H */

