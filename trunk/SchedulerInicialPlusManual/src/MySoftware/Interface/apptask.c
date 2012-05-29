/*============================================================================*/
/*                          The Freescale Cup                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Source:         apptask.c%
* %version:         1 %
* %created_by:      Continental %
* %date_created:     %
*=============================================================================*/
/* DESCRIPTION :  All tasks are called here                                   */
/*============================================================================*/
/* FUNCTION COMMENT : Add here your tasks, inside a periodic task             */
/* according to the desired execution period                                  */
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
void apptask_5ms(void);
void apptask_10ms(void);
void apptask_20ms(void);
void apptask_100ms(void);
void apptask_500ms(void);
void apptask_1s(void);


/**************************************************************
 *  Name                 : apptask_5ms
 *	ID					 : TASK_5MS
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void apptask_5ms(void)
 {
	
 }
 
 /**************************************************************
 *  Name                 : apptask_10ms
 *	ID					 : TASK_10MS
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void apptask_10ms(void)
 {
	
 }
 
 /**************************************************************
 *  Name                 : apptask_20ms
 *	ID					 : TASK_20MS
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void apptask_20ms(void)
 {
	APPLeds_Led1_app();
 }
 
 /**************************************************************
 *  Name                 : apptask_100ms
 *	ID					 : TASK_100MS
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void apptask_100ms(void)
 {

 }
 
 /**************************************************************
 *  Name                 : apptask_500ms
 *	ID					 : TASK_500MS
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void apptask_500ms(void)
 {
	
 }
 
 /**************************************************************
 *  Name                 : apptask_1s
 *	ID					 : TASK_1S
 *  Description          :
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  no
 **************************************************************/
 void apptask_1s(void)
 {

 }
 
