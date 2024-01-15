/*
 * STM32446ze.h
 *
 *  Created on: Jan 9, 2024
 *      Author: adria
 */

#include <stdint.h>
#ifndef STM32F446xx_H_
#define STM32F446xx_H_
//#include "stm32f4xxx.h"



		/*		   Permissions			   */
#define _O						volatile  // Output REGISTER Permissions for READ ONLY
#define _IO						volatile  // INPUT/OUTPUT REGISTER Permissions for WRITE/READ
#define _RE 					const	  // FOR RESERVE SPACES, PREVENT CLUTTERING

		/*		   RCC REGISTER			   */
#define RCC_BASE_REG 			0x40023800UL								// BASE REGISTER
#define RCC_AHB1ENR_OFFSET  	0x30UL										//
#define RCC_AHB1ENR_REG 		(RCC_BASE_REG + RCC_AHB1ENR_OFFSET)			//

		/*		   bxCAN REGISTERS			   */
#define CAN1_BASE_REG			0x40006400UL
#define CAN2_BASE_REG			0x40006800UL

		/* 			CAN1			  */

#define CAN1_MCR CAN1_BASE_REG

#define CAN1_MSR_OFFSET 0x04UL
#define CAN1_MSR_REG (CAN1_BASE_REG + CAN1_MSR_OFFSET)

#define CAN1_TSR_OFFSET 0x08
#define CAN1_TSR_REG (CAN1_BASE_REG + CAN1_TSR_OFFSET)

#define CAN1_RF0R_OFFSET 0x0C
#define CAN1_RF0R_REG (CAN1_BASE_REG + CAN1_RF0R_OFFSET)

#define CAN1_RF1R_OFFSET 0x10
#define CAN1_RF1R_REG (CAN1_BASE_REG + CAN1_RF1R_OFFSET)

#define CAN1_IER_OFFSET 0x14
#define CAN1_IER_REG (CAN1_BASE_REG + CAN1_IER_OFFSET)

#define CAN1_ESR_OFFSET 0x18
#define CAN1_ESR_REG (CAN1_BASE_REG + CAN1_ESR_OFFSET)

#define CAN1_BTR_OFFSET 0x1C
#define CAN1_BTR_REG (CAN1_BASE_REG + CAN1_BTR_OFFSET)

#define CAN1_TI0R_OFFSET 0x180
#define CAN1_TI0R_REG (CAN1_BASE_REG + CAN1_TI0R_OFFSET)

#define CAN1_TDT0R_OFFSET 0x184
#define CAN1_TDT0R_REG (CAN1_BASE_REG + CAN1_TDT0R_OFFSET)

#define CAN1_TDL0R_OFFSET 0x188
#define CAN1_TDL0R_REG (CAN1_BASE_REG + CAN1_TDL0R_OFFSET)

#define CAN1_TDH0R_OFFSET 0x18C
#define CAN1_TDH0R_REG (CAN1_BASE_REG + CAN1_TDH0R_OFFSET)

#define CAN1_TI1R_OFFSET 0x190
#define CAN1_TI1R_REG (CAN1_BASE_REG + CAN1_TI1R_OFFSET)

#define CAN1_TDT1R_OFFSET 0x194
#define CAN1_TDT1R_REG (CAN1_BASE_REG + CAN1_TDT1R_OFFSET)

#define CAN1_TDL1R_OFFSET 0x198
#define CAN1_TDL1R_REG (CAN1_BASE_REG + CAN1_TDL1R_OFFSET)

#define CAN1_TDH1R_OFFSET 0x19C
#define CAN1_TDH1R_REG (CAN1_BASE_REG + CAN1_TDL1R_OFFSET)

#define CAN1_TI2R_OFFSET 0x1A0
#define CAN1_TI2R_REG (CAN1_BASE_REG + CAN1_TI2R_OFFSET)

#define CAN1_TDT2R_OFFSET 0x1A4
#define CAN1_TDT2R_REG (CAN1_BASE_REG + CAN1_TDT2R_OFFSET)

#define CAN1_TDL2R_OFFSET 0x1A8
#define CAN1_TDL2R_REG (CAN1_BASE_REG + CAN1_TDL2R_OFFSET)

#define CAN1_TDH2R_OFFSET 0x1AC
#define CAN1_TDH2R_REG (CAN1_BASE_REG + CAN1_TDH2R_OFFSET)

#define CAN1_RI0R_OFFSET 0x1B0
#define CAN1_RI0R_REG (CAN1_BASE_REG + CAN1_RI0R_OFFSET)

#define CAN1_RDT0R_OFFSET 0x1B4
#define CAN1_RDT0R_REG (CAN1_BASE_REG + CAN1_RDT0R_OFFSET)

#define CAN1_RDL0R_OFFSET 0x1B8
#define CAN1_RDL0R_REG (CAN1_BASE_REG + CAN1_RDL0R_OFFSET)

#define CAN1_RDH0R_OFFSET 0x1BC
#define CAN1_RDH0R_REG (CAN1_BASE_REG + CAN1_RDH0R_OFFSET)

#define CAN1_RI1R_OFFSET 0x1C0
#define CAN1_RI1R_REG (CAN1_BASE_REG + CAN1_RI1R_OFFSET)

#define CAN1_RDT1R_OFFSET 0x1C4
#define CAN1_RDT1R_REG (CAN1_BASE_REG + CAN1_RDT1R_OFFSET)

#define CAN1_RDL1R_OFFSET 0x1C8
#define CAN1_RDL1R_REG (CAN1_BASE_REG + CAN1_RDL1R_OFFSET)

#define CAN1_RDH1R_OFFSET 0x1CC
#define CAN1_RDH1R_REG (CAN1_BASE_REG + CAN1_RDH1R_OFFSET)

#define CAN1_FS1R_OFFSET 0x20C
#define CAN1_FS1R_REG (CAN1_BASE_REG + CAN1_FS1R_OFFSET)

#define CAN1_FFA1R_OFFSET 0x214
#define CAN1_FFA1R_REG (CAN1_BASE_REG + CAN1_FFA1R_OFFSET)

#define CAN1_FA1R_OFFSET 0x21C
#define CAN1_FA1R_REG (CAN1_BASE_REG + CAN1_FA1R_OFFSET)

// WORK TO BE DONE
#define CAN1_F0R1
#define CAN1_F0R2
#define CAN1_F1R1
#define CAN1_F1R2
#define CAN1_F2R1
#define CAN1_F2R2
#define CAN1_F3R1
#define CAN1_F3R2
#define CAN1_F4R1
#define CAN1_F4R2
#define CAN1_F5R1
#define CAN1_F5R2
#define CAN1_F6R1
#define CAN1_F6R2
#define CAN1_F7R1
#define CAN1_F7R2
#define CAN1_F8R1
#define CAN1_F8R2
#define CAN1_F9R1
#define CAN1_F9R2
#define CAN1_F10R1
#define CAN1_F10R2
#define CAN1_F11R1
#define CAN1_F11R2
#define CAN1_F12R1
#define CAN1_F12R2
#define CAN1_F13R1
#define CAN1_F13R2
#define CAN1_F14R1
#define CAN1_F14R2
#define CAN1_F15R1
#define CAN1_F15R2
#define CAN1_F16R1
#define CAN1_F16R2
#define CAN1_F17R1
#define CAN1_F17R2
#define CAN1_F18R1
#define CAN1_F18R2
#define CAN1_F19R1
#define CAN1_F19R2
#define CAN1_F20R1
#define CAN1_F20R2
#define CAN1_F21R1
#define CAN1_F21R2
#define CAN1_F22R1
#define CAN1_F22R2
#define CAN1_F23R1
#define CAN1_F23R2
#define CAN1_F24R1
#define CAN1_F24R2
#define CAN1_F25R1
#define CAN1_F25R2
#define CAN1_F26R1
#define CAN1_F26R2
#define CAN1_F27R1
#define CAN1_F27R2

		/* 			CAN2			  */
#define CAN2_MCR CAN2_BASE_REG

		/*  	GPIOX MODDER REGISTER	   */
#define GPIO_BASE_REG			0x40020C00UL
#define GPIO_MODDER_REG			0x40020C00UL
#define GPIOB_BASE_REG 			0x40020400UL								// BASE REGISTER
#define GPIOB_MODDER_REG 		0x40020400UL								// MODDER

		/*  	GPIOX OUTPUT REGISTER	   */
#define GPIOX_ORD_OFFSET 		0x14UL
#define GPIOD_ORD_REG 			(GPIOD_BASE_REG + GPIOX_ORD_OFFSET)	//
#define GPIOB_ORD_REG 			(GPIOB_BASE_REG + GPIOX_ORD_OFFSET)		    //

		/*		   GPIOX MODES VALUES	   */
#define GPIO_INPUT 					0x00UL
#define GPIO_OUTPUT 				0x01UL
#define GPIO_ALTERNATE_FUNC  		0x02UL
#define GPIO_ANALOG 				0x03UL
		/*		   GPIOX OUTPUT VALUES	   */
#define GPIO_HIGH 					0x01UL
#define GPIO_LOW  					0x00UL
		/*		  FUNCTION SET VALUES	   */
#define SET_BIT					0x01UL
#define CLEAR_BIT 				0x00UL
#define ENABLE				0x01UL
#define DISABLE				0x00UL

/*
 * ----------------------------------------------------
 * |												  |
 * |			RCC REGISTERS BIT STRUCTs			  |
 * |												  |
 * ----------------------------------------------------
 */



typedef struct
	{
	_IO uint32_t  GPIOA_EN		       :1;
	_IO uint32_t  GPIOB_EN		       :1;
	_IO uint32_t  GPIOC_EN		       :1;
	_IO uint32_t  GPIOD_EN		       :1;
	_IO uint32_t  GPIOE_EN		       :1;
	_IO uint32_t  GPIOF_EN		       :1;
	_IO uint32_t  GPIOG_EN		       :1;
	_IO uint32_t  GPIOH_EN		       :1;
	_RE uint32_t  				       :4;
	_IO uint32_t  CRC_EN			   :1;
	_RE uint32_t  				       :5;
	_IO uint32_t  BKP_SRAMEN		   :1;
	_IO uint32_t  				       :2;
	_IO uint32_t  DMA1_EN			   :1;
	_IO uint32_t  DMA2_EN			   :1;
	_RE uint32_t  				       :6;
	_IO uint32_t  OTGHS_EN		       :1;
	_IO uint32_t  OTGHS_ULPIEN	       :1;
	_RE uint32_t  			           :1;

} RCC_REG_AHB1ENR_t;

/*
 * ----------------------------------------------------
 * |												  |
 * |			GPIO REGISTERS BIT STRUCTs			  |
 * |												  |
 * ----------------------------------------------------
 */



typedef struct						/* PIN MODE */
{
	_IO uint32_t pin_0                  :2;
	_IO uint32_t pin_1                  :2;
	_IO uint32_t pin_2                  :2;
	_IO uint32_t pin_3                  :2;
	_IO uint32_t pin_4                  :2;
	_IO uint32_t pin_5                  :2;
	_IO uint32_t pin_6                  :2;
	_IO uint32_t pin_7                  :2;
	_IO uint32_t pin_8                  :2;
	_IO uint32_t pin_9                  :2;
	_IO uint32_t pin_10                 :2;
	_IO uint32_t pin_11                 :2;
	_IO uint32_t pin_12                 :2;
	_IO uint32_t pin_13                 :2;
	_IO uint32_t pin_14                 :2;
	_IO uint32_t pin_15                 :2;

} GPIOx_MODDER_t;

typedef struct						/* PIN OUTPUT*/
{
	_IO uint32_t  pin_0                  :1;
	_IO uint32_t  pin_1                  :1;
	_IO uint32_t  pin_2                  :1;
	_IO uint32_t  pin_3                  :1;
	_IO uint32_t  pin_4                  :1;
	_IO uint32_t  pin_5                  :1;
	_IO uint32_t  pin_6                  :1;
	_IO uint32_t  pin_7                  :1;
	_IO uint32_t  pin_8                  :1;
	_IO uint32_t  pin_9                  :1;
	_IO uint32_t  pin_10                 :1;
	_IO uint32_t  pin_11                 :1;
	_IO uint32_t  pin_12                 :1;
	_IO uint32_t  pin_13                 :1;
	_IO uint32_t  pin_14                 :1;
	_IO uint32_t  pin_15                 :1;
	_RE uint32_t  			 			 :16;


} GPIOX_ORD_t;

/*
 * ----------------------------------------------------
 * |												  |
 * |		  bxCAN REGISTERS BIT STRUCTs			  |
 * |												  |
 * ----------------------------------------------------
 */


typedef struct
{

	_IO uint32_t	INRQ				:1;
	_IO uint32_t	SLEEP				:1;
	_IO uint32_t	TXFP				:1;
	_IO uint32_t	RFLM				:1;
	_IO uint32_t	NART				:1;
	_IO uint32_t	AWUM				:1;
	_IO uint32_t	ABOM				:1;
	_IO uint32_t	TTCM				:1;
	_RE uint32_t						:7; //RESERVED
	_IO uint32_t	RESET				:1;
	_IO uint32_t	DBF					:1;
	_RE uint32_t						:15; //RESERVED


} CAN_MCR_t;

typedef struct
{

	_IO uint32_t	INAK				:1;
	_IO uint32_t	SLAK				:1;
	_IO uint32_t	ERRI				:1;
	_IO uint32_t	WKUI				:1;
	_IO uint32_t	SLAKI				:1;
	_RE uint32_t						:3;
	_IO uint32_t	TXM					:1;
	_IO uint32_t	RXM					:1;
	_IO uint32_t	SAMP				:1;
	_IO uint32_t	RX					:1;
	_RE uint32_t						:20; //RESERVED


} CAN_MSR_t;

typedef struct
{

	_IO uint32_t	RQCP0				:1;
	_IO uint32_t	TXOK0				:1;
	_IO uint32_t	ALST0				:1;
	_IO uint32_t	TERR0				:1;
	_RE uint32_t						:3;
	_IO uint32_t	ABRQ0					:1;
	_IO uint32_t	RQCP1				:1;
	_IO uint32_t	TXOK1				:1;
	_IO uint32_t	ALST1				:1;
	_IO uint32_t	TERR1				:1;
	_RE uint32_t						:3; //RESERVED
	_IO uint32_t	ABRQ1				:1;
	_IO uint32_t	RQCP2				:1;
	_IO uint32_t	TXOK2				:1;
	_IO uint32_t	ALST2				:1;
	_IO uint32_t	TERR2				:1;
	_RE uint32_t						:3; //RESERVED
	_IO uint32_t	ABRQ2				:1;
	_IO uint32_t	CODE				:2;
	_IO uint32_t	TME0				:1;
	_IO uint32_t	TME1				:1;
	_IO uint32_t	TME2				:1;
	_IO uint32_t	LOW0				:1;
	_IO uint32_t	LOW1				:1;
	_IO uint32_t	LOW2				:1;

} CAN_TSR_t;

typedef struct
{

	_IO uint32_t	BRP					:10;
	_RE uint32_t						:6; //RESERVED
	_IO uint32_t	TS1					:4;
	_IO uint32_t	TS2					:3;
	_RE uint32_t						:1; //RESERVED
	_IO uint32_t	SJW					:2;
	_RE uint32_t						:4; //RESERVED
	_IO uint32_t	LBKM				:1;
	_IO uint32_t	SILM				:1;

} CAN_BTR_t;


/*
 * ----------------------------------------------------
 * |												  |
 * |		  MAILBOX REGISTERS	- IDENTIFER			  |
 * |												  |
 * ----------------------------------------------------
 */

typedef struct
{

	_IO uint32_t	TXRQ				:1;
	_IO uint32_t	RTR					:1;
	_IO uint32_t	IDE					:1;
	_IO uint32_t	EXID				:18; // TODO: CORRECT THIS
	_IO uint32_t	STID				:11;

} CAN_TI0R_t;

typedef struct
{

	_IO uint32_t	TXRQ				:1;
	_IO uint32_t	RTR					:1;
	_IO uint32_t	IDE					:1;
	_IO uint32_t	EXID				:18; // TODO: CORRECT THIS
	_IO uint32_t	STID				:11;

} CAN_TI1R_t;

typedef struct
{

	_IO uint32_t	TXRQ				:1;
	_IO uint32_t	RTR					:1;
	_IO uint32_t	IDE					:1;
	_IO uint32_t	EXID				:18; // TODO: CORRECT THIS
	_IO uint32_t	STID				:11;

} CAN_TI2R_t;

/*
 * ----------------------------------------------------
 * |												  |
 * | MAILBOX REGISTERS	- 	Data lenght / Time stamp  |
 * |												  |
 * ----------------------------------------------------
 */


typedef struct
{

	_IO uint32_t	DLC					:4;
	_RE uint32_t						:12;
	_IO uint32_t	TIME				:16;


} CAN_TDT0R_t;

typedef struct
{

	_IO uint32_t	DLC					:4;
	_RE uint32_t						:12;
	_IO uint32_t	TIME				:16;


} CAN_TDT1R_t;

typedef struct
{

	_IO uint32_t	DLC					:4;
	_RE uint32_t						:12;
	_IO uint32_t	TIME				:16;


} CAN_TDT2R_t;

/*
 * ----------------------------------------------------
 * |												  |
 * | MAILBOX REGISTERS	- 	DATA REGISTERS (LOW/HIGH) |
 * |												  |
 * ----------------------------------------------------
 */

typedef struct
{

	_IO uint32_t	DATA4				:8;
	_IO uint32_t	DATA5				:8;
	_IO uint32_t	DATA6				:8;
	_IO uint32_t	DATA7				:8;

} CAN_TDH0R_t;

typedef struct
{

	_IO uint32_t	DATA4				:8;
	_IO uint32_t	DATA5				:8;
	_IO uint32_t	DATA6				:8;
	_IO uint32_t	DATA7				:8;

} CAN_TDH1R_t;

typedef struct
{

	_IO uint32_t	DATA4				:8;
	_IO uint32_t	DATA5				:8;
	_IO uint32_t	DATA6				:8;
	_IO uint32_t	DATA7				:8;

} CAN_TDH2R_t;

///////////////////////////////////////////////////////

typedef struct
{

	_IO uint32_t	DATA0				:8;
	_IO uint32_t	DATA1				:8;
	_IO uint32_t	DATA2				:8;
	_IO uint32_t	DATA3				:8;

} CAN_TDL0R_t;

typedef struct
{

	_IO uint32_t	DATA0				:8;
	_IO uint32_t	DATA1				:8;
	_IO uint32_t	DATA2				:8;
	_IO uint32_t	DATA3				:8;

} CAN_TDL1R_t;

typedef struct
{

	_IO uint32_t	DATA0				:8;
	_IO uint32_t	DATA1				:8;
	_IO uint32_t	DATA2				:8;
	_IO uint32_t	DATA3				:8;

} CAN_TDL2R_t;

/*typedef struct
{
		struct CAN_MCR_t CAN_MCR_t;
		struct CAN_MSR_t MSR;
		struct CAN_TSR_t TSR;
		struct CAN_RF0R_t RF0R;
		struct CAN_RF1R_t RF1R;
		struct CAN_IER_t IER;
		struct CAN_ESR_t ESR;
		struct CAN_BTR_t BTR;
	   //RESERVED
		struct CAN_TDT0R_t;
		struct CAN_TDT1R_t;
		struct CAN_TDT2R_t;
		struct CAN_TDLT0R_t;
		struct CAN_TDLT1R_t;
		struct CAN_TDLT2R_t;
		struct CAN_TDHT0R_t;
		struct CAN_TDHT1R_t;
		struct CAN_TDHT2R_t;
		//TODO: FIFO MAILBOX REGISTERS
		//TODO: FILTER REGISTERS

} CAN_t; */


#endif /* STM32F446xx_H_ */


