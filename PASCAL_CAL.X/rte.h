/* 
 * File:   rte.h
 * Author: student
 *
 * Created on November 20, 2019, 6:13 PM
 */

#ifndef RTE_H
#define	RTE_H

#ifdef	__cplusplus
extern "C" {
#endif


#define RTE_vInitMotor hal_vInitMotor
#define RTE_vSetMotorDir hal_vSetMotorDir
#define RTE_vSetMotionSpeed hal_vSetMotionSpeed
#define RTE_vSetMotionDirection hal_vSetMotionDirection
#define RTE_vInitServo hal_vInitServo
    
    
#define RTE_vSetLineFollower hal_vSetLineFollower
#define RTE_vWriteLineFollower hal_vWriteLineFollower
#define RTE_vGetLineFollwer hal_vGetLineFollwer
    
    
    
    
#ifdef	__cplusplus
}
#endif

#endif	/* RTE_H */

