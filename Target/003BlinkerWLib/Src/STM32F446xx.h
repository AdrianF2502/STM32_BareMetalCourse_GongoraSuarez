/*
 * STM32446ze.h
 *
 *  Created on: Jan 9, 2024
 *      Author: adria
 */

#include <stdint.h>
#ifndef STM32F446xx_H_
#define STM32F446xx_H_

#endif /* STM32F446xx_H_ */

		/*		   RCC REGISTER			   */
#define RCC_BASE_REG 			0x40023800UL										// BASE REGISTER
#define RCC_AHB1ENR_OFFSET  	0x30UL										//
#define RCC_AHB1ENR_REG 		(RCC_BASE_REG + RCC_AHB1ENR_OFFSET)			//

		/*  	GPIOX MODDER REGISTER	   */
#define GPIOB_BASE_REG 			0x40020400UL									// BASE REGISTER
#define GPIOB_MODDER_REG 		0x40020400UL									// MODDER

		/*  	GPIOX OUTPUT REGISTER	   */
#define GPIOB_ORD_OFFSET 		0x14UL                                       //
#define GPIOB_ORD_REG 			(GPIOB_BASE_REG + GPIOB_ORD_OFFSET)		   //

		/*		   GPIOX MODES VALUES	   */
#define INPUT 					0x00UL
#define OUTPUT 					0x01UL
#define ALTERNATE_FUNC  		0x02UL
#define ANALOG 					0x03UL
		/*		   GPIOX OUTPUT VALUES	   */
#define HIGH 					0x01UL
#define LOW  					0x00UL
		/*		  RCC SET VALUES		   */
#define ENABLE					0x01UL
#define DISABLE 				0x00UL

typedef struct
{
	uint32_t volatile GPIOA_EN		       :1;
	uint32_t volatile GPIOB_EN		       :1;
	uint32_t volatile GPIOC_EN		       :1;
	uint32_t volatile GPIOD_EN		       :1;
	uint32_t volatile GPIOE_EN		       :1;
	uint32_t volatile GPIOF_EN		       :1;
	uint32_t volatile GPIOG_EN		       :1;
	uint32_t volatile GPIOH_EN		       :1;
	uint32_t volatile RESERVE1		       :4;
	uint32_t volatile CRC_EN			       :1;
	uint32_t volatile RESERVE2		       :5;
	uint32_t volatile BKP_SRAMEN		       :1;
	uint32_t volatile RESERVE3		       :2;
	uint32_t volatile DMA1_EN			       :1;
	uint32_t volatile DMA2_EN			       :1;
	uint32_t volatile RESERVE4		       :6;
	uint32_t volatile OTGHS_EN		       :1;
	uint32_t volatile OTGHS_ULPIEN	       :1;
	uint32_t volatile RESERVE5		       :1;

} RCC_REG_AHB1ENR_t;

typedef struct						/* PIN MODE */
{
	uint32_t volatile pin_0                  :2;
	uint32_t volatile pin_1                  :2;
	uint32_t volatile pin_2                  :2;
	uint32_t volatile pin_3                  :2;
	uint32_t volatile pin_4                  :2;
	uint32_t volatile pin_5                  :2;
	uint32_t volatile pin_6                  :2;
	uint32_t volatile pin_7                  :2;
	uint32_t volatile pin_8                  :2;
	uint32_t volatile pin_9                  :2;
	uint32_t volatile pin_10                 :2;
	uint32_t volatile pin_11                 :2;
	uint32_t volatile pin_12                 :2;
	uint32_t volatile pin_13                 :2;
	uint32_t volatile pin_14                 :2;
	uint32_t volatile pin_15                 :2;

} GPIOx_MODDER_t;

typedef struct						/* PIN OUTPUT*/
{
	uint32_t volatile pin_0                  :1;
	uint32_t volatile pin_1                  :1;
	uint32_t volatile pin_2                  :1;
	uint32_t volatile pin_3                  :1;
	uint32_t volatile pin_4                  :1;
	uint32_t volatile pin_5                  :1;
	uint32_t volatile pin_6                  :1;
	uint32_t volatile pin_7                  :1;
	uint32_t volatile pin_8                  :1;
	uint32_t volatile pin_9                  :1;
	uint32_t volatile pin_10                 :1;
	uint32_t volatile pin_11                 :1;
	uint32_t volatile pin_12                 :1;
	uint32_t volatile pin_13                 :1;
	uint32_t volatile pin_14                 :1;
	uint32_t volatile pin_15                 :1;
	uint32_t volatile RESERVE1			   :16;


} GPIOX_ORD_t;




