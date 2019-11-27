/* 
 * File:   hal_servo.h
 * Author: student
 *
 * Created on November 27, 2019, 6:15 PM
 */

#ifndef HAL_SERVO_H
#define	HAL_SERVO_H

#ifdef	__cplusplus
extern "C" {
#endif

    extern void hal_vSetMotionDirection(T_F16 angle);
    extern void hal_vInitServo(void);

#ifdef	__cplusplus
}
#endif

#endif	/* HAL_SERVO_H */

