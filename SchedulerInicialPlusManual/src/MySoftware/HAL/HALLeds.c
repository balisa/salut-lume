/*============================================================================*/
/*                         The Freescale Cup                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* %name:            %	HALLeds.c
* %version:         %	1.0
* %created_by:      %   David Robles
* %date_created:    %   Sun Aug 21 16:20:00 2011 
*=============================================================================*/
/* DESCRIPTION : Contains applications that use the TRK-MPC5604B LEDS         */
/*============================================================================*/
/* FUNCTION COMMENT : comment here										      */
/*                                                                            */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 21/08/2011  |                               | David Robles     */
/* Hardware abstraction layer of TRK-MPC5604B LEDS                         */
/*============================================================================*/

/* Includes */
/* -------- */
#include "HALLeds.h"
#include "MALioapi.h"

/* Functions macros, constants, types and datas         */
/* ---------------------------------------------------- */
/* Functions macros */

/*==================================================*/ 
/* Definition of constants                          */
/*==================================================*/ 
/* BYTE constants */


/* WORD constants */


/* LONG and STRUCTURE constants */



/*======================================================*/ 
/* Definition of RAM variables                          */
/*======================================================*/ 
/* BYTE RAM variables */


/* WORD RAM variables */


/* LONG and STRUCTURE RAM variables */


/*======================================================*/ 
/* close variable declaration sections                  */
/*======================================================*/ 

/* Private defines */


/* Private functions prototypes */
/* ---------------------------- */



/* Exported functions prototypes */
/* ----------------------------- */



/* Functions */
/* ------------------ */
/**************************************************************
 *  Name                 :	HALLeds_init_Led1_hardware
 *  Description          :  Initialization for LED1 hardware
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  No
 **************************************************************/
void HALLeds_init_Led1_hardware (void)
{	
	IO_SetPinFctn(LED1_PIN, PA_GPIO);
	IO_SetPinAsOutput(LED1_PIN);
}

/**************************************************************
 *  Name                 :	Set_Led1_State
 *  Description          :  Set the state of LED1
 *  Parameters           :  Inputs: E_SM_LED_ST le_LedState
 *  Return               :	none
 *  Critical/explanation :  No
 **************************************************************/
void Set_Led1_State (E_SM_LED_ST le_LedState)
{	
	switch(le_LedState)
	{
		case LED_OFF:
			IO_PinWrite(LED1_PIN, ZERO);
			break;
		case LED_ON:
			IO_PinWrite(LED1_PIN, ONE);
			break;
		default:
			// Do nothing
			break;
	}
}

/**************************************************************
 *  Name                 :	Get_Led1_State
 *  Description          :  Return the state of LED1
 *  Parameters           :  none
 *  Return               :	E_SM_LED_ST
 *  Critical/explanation :  No
 **************************************************************/
E_SM_LED_ST Get_Led1_State (void)
{	
	E_SM_LED_ST le_LedState;
	if(ONE == IO_PinReadOutput(LED1_PIN) )
	{
		le_LedState = LED_ON;
	}
	else
	{
		if(ZERO == IO_PinReadOutput(LED1_PIN))
		{
			le_LedState = LED_OFF;
		}
		else
		{
			
		}
	}
	return le_LedState;
}

/**************************************************************
 *  Name                 :	HALLeds_init_Led2_hardware
 *  Description          :  Initialization for LED2 hardware
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  No
 **************************************************************/
void HALLeds_init_Led2_hardware (void)
{	
	IO_SetPinFctn(LED2_PIN, PA_GPIO);
	IO_SetPinAsOutput(LED2_PIN);
}

/**************************************************************
 *  Name                 :	Set_Led2_State
 *  Description          :  Set the state of LED2
 *  Parameters           :  Inputs: E_SM_LED_ST le_LedState
 *  Return               :	none
 *  Critical/explanation :  No
 **************************************************************/
void Set_Led2_State (E_SM_LED_ST le_LedState)
{	
	if(LED_OFF == le_LedState)
	{
		IO_PinWrite(LED2_PIN, ZERO);
	}
	else
	{
		IO_PinWrite(LED2_PIN, ONE);
	}
}

/**************************************************************
 *  Name                 :	Get_Led2_State
 *  Description          :  Return the state of LED2
 *  Parameters           :  none
 *  Return               :	E_SM_LED_ST
 *  Critical/explanation :  No
 **************************************************************/
E_SM_LED_ST Get_Led2_State (void)
{	
	E_SM_LED_ST le_LedState;
	if(ONE == IO_PinReadOutput(LED2_PIN) )
	{
		le_LedState = LED_ON;
	}
	else
	{
		le_LedState = LED_OFF;
	}
	return le_LedState;
}

/**************************************************************
 *  Name                 :	HALLeds_init_Led3_hardware
 *  Description          :  Initialization for LED3 hardware
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  No
 **************************************************************/
void HALLeds_init_Led3_hardware (void)
{	
	IO_SetPinFctn(LED3_PIN, PA_GPIO);
	IO_SetPinAsOutput(LED3_PIN);
}

/**************************************************************
 *  Name                 :	Set_Led3_State
 *  Description          :  Set the state of LED3
 *  Parameters           :  Inputs: E_SM_LED_ST le_LedState
 *  Return               :	none
 *  Critical/explanation :  No
 **************************************************************/
void Set_Led3_State (E_SM_LED_ST le_LedState)
{	
	if(LED_OFF == le_LedState)
	{
		IO_PinWrite(LED3_PIN, ZERO);
	}
	else
	{
		IO_PinWrite(LED3_PIN, ONE);
	}
}

/**************************************************************
 *  Name                 :	HALLeds_init_Led4_hardware
 *  Description          :  Initialization for LED4 hardware
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  No
 **************************************************************/
void HALLeds_init_Led4_hardware (void)
{	
	IO_SetPinFctn(LED4_PIN, PA_GPIO);
	IO_SetPinAsOutput(LED4_PIN);
}

/**************************************************************
 *  Name                 :	Set_Led4_State
 *  Description          :  Set the state of LED4
 *  Parameters           :  Inputs: E_SM_LED_ST le_LedState
 *  Return               :	none
 *  Critical/explanation :  No
 **************************************************************/
void Set_Led4_State (E_SM_LED_ST le_LedState)
{	
	if(LED_OFF == le_LedState)
	{
		IO_PinWrite(LED4_PIN, ZERO);
	}
	else
	{
		IO_PinWrite(LED4_PIN, ONE);
	}
}

/**************************************************************
 *  Name                 :	LedToggle
 *  Description          :  Initialization for LED4 hardware
 *  Parameters           :  none
 *  Return               :	none
 *  Critical/explanation :  No
 **************************************************************/
void LedToggle (T_UBYTE pinLED)
{	
	IO_ToggleOutput(pinLED);
}
