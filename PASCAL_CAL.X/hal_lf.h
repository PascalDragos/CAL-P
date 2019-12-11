/* 
 * File:   ha_lf.h
 * Author: student
 *
 * Created on December 11, 2019, 6:16 PM
 */
#include "general_types.h"


#ifndef HA_LF_H
#define	HA_LF_H

#ifdef	__cplusplus
extern "C" {
#endif

extern void hal_vSetLineFollower(T_U8);
extern void hal_vWriteLineFollower(BOOL);
extern T_U16 hal_vGetLineFollwer(void);


#ifdef	__cplusplus
}
#endif

#endif	/* HA_LF_H */

