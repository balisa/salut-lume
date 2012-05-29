/*============================================================================*/
/*                          The Freescale Cup                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Source:         initapp.c
* %version:         1 %
* %created_by:      Continental %
* %date_created:     %
*=============================================================================*/
/* DESCRIPTION :  Initialize tasks                                            */
/*============================================================================*/
/* FUNCTION COMMENT : Add here your initialization tasks.                     */
/*                                                                            */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 22/08/2011  |  Revision                     | Continental      */
/*                                                                            */
/*============================================================================*/

/* Includes */
/* ------------------- */
/* Common declarations */
/* ------------------- */
#include "apptask.h"

/*       SW API    */
/* --------------- */
#include "APPLeds.h"

/* Exported functions prototypes */
/* ----------------------------- */
void initapp_task_5ms(void);
void initapp_task_10ms(void);
void initapp_task_20ms(void);
void initapp_task_100ms(void);
void initapp_task_500ms(void);
void initapp_task_1s(void);


/**************************************************************
 *  Name                 : initapp_task_5ms
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void initapp_task_5ms(void)
 {
	
 }
 
 /**************************************************************
 *  Name                 : initapp_task_10ms
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void initapp_task_10ms(void)
 {
	
 }
 
 /**************************************************************
 *  Name                 : initapp_task_20ms
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void initapp_task_20ms(void)
 {
	APPLeds_Led1_init();
 }
 
 /**************************************************************
 *  Name                 : initapp_task_100ms
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void initapp_task_100ms(void)
 {
 
 }
 
 /**************************************************************
 *  Name                 : initapp_task_500ms
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void initapp_task_500ms(void)
 {
 
 }
 
 /**************************************************************
 *  Name                 : initapp_task_1s
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void initapp_task_1s(void)
 {
 
 }
 


