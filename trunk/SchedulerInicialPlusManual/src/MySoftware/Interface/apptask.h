/*============================================================================*/
/*                            The Freesclae Cup                               */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Source:         apptask.h%
* %version:         1 %
* %created_by:      Continental %
* %date_created:     %
*=============================================================================*/
/* DESCRIPTION : Header file, task cointainer                                 */
/*============================================================================*/
/* FUNCTION COMMENT :                                                         */
/*                                                                            */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 22/08/2011  | Revision                     | Continental       */
/*                                                                            */
/*============================================================================*/

#ifndef APPTASK_H                                /* To avoid double inclusion */
#define APPTASK_H

/* Includes */
/* -------- */
#include "stdtypedef.h"


/* Exported functions prototypes and macros */
/* ---------------------------------------- */

extern void apptask_5ms(void);
extern void apptask_10ms(void);
extern void apptask_20ms(void);
extern void apptask_100ms(void);
extern void apptask_500ms(void);
extern void apptask_1s(void);

#endif


