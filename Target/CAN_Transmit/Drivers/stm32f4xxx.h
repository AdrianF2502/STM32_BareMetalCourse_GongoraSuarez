/*
 * stm32fxx.h
 *
 *  Created on: Jan 13, 2024
 *      Author: adria
 */

#ifndef STM32F4XXX_H_
#define STM32F4XXX_H_


// Uncoment the line below according to the target STM32 DEVICE

#if !defined (STM32F446xx) && !defined (STM32F407xx) // We check if its defined, if not we can define it here:

// #define STM32F407xx
 #define STM32F446xx

#endif

#if defined(STM32F407xx)
#include "stm32f405xx.h"
#elif defined(STM32F446xx)
#include "stm32f446xx.h"
#else
#error "ERROR: Please select a target STM32F4xx device, its not defined."
#endif


typedef enum
{
	CLEAR = 0U,
	SET = !CLEAR

} FlagStatus; // FLAG STATUS VALUES

typedef enum
{
	DISABLE = 0U,
	ENABLE = !DISABLE

} FunctionalState;
#define A_FUNCTIONAL_STATE(STATE) (((STATE == DISABLE) || (STATE) == ENABLE)) //DEFINE THAT A FUNCTIONAL STATE IS EITHER ENABLE OR DISABLE

typedef enum
{
 SUCCESS = 0U,
 ERROR = !SUCCESS
} ErrorStatus; // Values for the status of errors


/*			TABLES OF OPERATORS				*
 * ----------------------------------------	*
 * 		COMMAND(REG,BIT)		OPERATION	*/

#define SET_BIT(REG, BIT)		((REG) |= (BIT))

#define CLEAR_BIT(REG, BIT)		((REG) &= ~(BIT))

#define READ_BIT(REG, BIT)		((REG) & (BIT))

#define CLEAR_REG(REG) 			((REG) = (0x00UL))

#define WRITE_REG(REG, VAL)		((REG) = (VAL))

#define READ_REG(REG)			((REG))



#endif /* STM32F4XXX_H_ */

