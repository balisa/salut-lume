/*============================================================================*/
/*                            The Freesclae Cup                               */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Source:         initapp.h
* %version:         1 %
* %created_by:      Continental %
* %date_created:     %
*=============================================================================*/
/* DESCRIPTION : Header file, initialization task cointainer                  */
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

#ifndef INITAPP_H                                /* To avoid double inclusion */
#define INITAPP_H

/* Includes */
/* -------- */
#include "stdtypedef.h"


/* Exported functions prototypes and macros */
/* ---------------------------------------- */

extern void initapp_task_5ms(void);
extern void initapp_task_10ms(void);
extern void initapp_task_20ms(void);
extern void initapp_task_100ms(void);
extern void initapp_task_500ms(void);
extern void initapp_task_1s(void);

#endif


