/*
 * can.h
 *
 *  Created on: Jan 14, 2024
 *      Author: adria
 */

#ifndef CAN_H_
#define CAN_H_


#include "stm32f446xx.h"
#include <stdint.h>
//#include <stddef.h>
/*
 *
 * 		STRUCTURES FOR EACH PARAMENTER IN bxCAN
 *
 */

//CAN_MCR_t volatile *const pMCRReg = (CAN_MCR_t*) CAN1_BASE_REG;
//CAN_MSR_t volatile *const pMSRReg = (CAN_MSR_t*) CAN1_MSR_REG;
//CAN_TSR_t volatile *const pTSRReg = (CAN_TSR_t*) CAN1_TSR_REG;

#define pMSRReg ((CAN_MSR_t volatile *const)CAN1_MSR_REG)
#define pTSRReg ((CAN_TSR_t volatile *const)CAN1_TSR_REG)
#define pMCRReg ((CAN_MCR_t volatile *const)CAN1_BASE_REG)
#define pBTRReg ((CAN_BTR_t volatile *const)CAN1_BTR_REG)
#define pTSRReg ((CAN_TSR_t volatile *const)CAN1_TSR_REG)

// IDENTIFIER REGISTERS
#define pTI0RReg ((CAN_TI0R_t volatile *const)CAN1_TI0R_REG)
#define pTI1RReg ((CAN_TI1R_t volatile *const)CAN1_TI1R_REG)
#define pTI2RReg ((CAN_TI2R_t volatile *const)CAN1_TI2R_REG)

// DATA LENGHT / TIME STAMP
#define pTDT0RReg ((CAN_TDT0R_t volatile *const)CAN1_TDT0R_REG)
#define pTDT1RReg ((CAN_TDT1R_t volatile *const)CAN1_TDT1R_REG)
#define pTDT2RReg ((CAN_TDT2R_t volatile *const)CAN1_TDT2R_REG)

// DATA REGISTERS HIGH
#define pTDH0RReg ((CAN_TDH0R_t volatile *const)CAN1_TDH0R_REG)
#define pTDH1RReg ((CAN_TDH1R_t volatile *const)CAN1_TDH1R_REG)
#define pTDH2RReg ((CAN_TDH2R_t volatile *const)CAN1_TDH2R_REG)

//DATA REGISTERS LOW
#define pTDL0RReg ((CAN_TDL0R_t volatile *const)CAN1_TDL0R_REG)
#define pTDL1RReg ((CAN_TDL1R_t volatile *const)CAN1_TDL1R_REG)
#define pTDL2RReg ((CAN_TDL2R_t volatile *const)CAN1_TDL2R_REG)



// CAN Operating modes value
#define CAN_MODE_NORMAL		  		1UL
#define CAN_MODE_LOOPBACK		   	2
#define CAN_MODE_SILENT			   	3
#define CAN_MODE_SILENT_LOOPBACK   	4

// CAN SyncJumpWidth
#define CAN_SJW_1TQ					 1
#define CAN_SJW_2TQ					 2
#define CAN_SJW_3TQ					 3
#define CAN_SJW_4TQ					 4

// BIT SEGMENT 1
#define CAN_BS1_1TQ					 1
#define CAN_BS1_2TQ					 2
#define CAN_BS1_3TQ					 3
#define CAN_BS1_4TQ					 4
#define CAN_BS1_5TQ					 5
#define CAN_BS1_6TQ					 6
#define CAN_BS1_7TQ					 7
#define CAN_BS1_8TQ					 8
#define CAN_BS1_9TQ					 9
#define CAN_BS1_10TQ				 10
#define CAN_BS1_11TQ				 11
#define CAN_BS1_12TQ				 12
#define CAN_BS1_13TQ				 13
#define CAN_BS1_14TQ				 14
#define CAN_BS1_15TQ				 15
#define CAN_BS1_16TQ				 19

// BIT SEGMENT 2
#define CAN_BS2_1TQ					 1
#define CAN_BS2_2TQ					 2
#define CAN_BS2_3TQ					 3
#define CAN_BS2_4TQ					 4
#define CAN_BS2_5TQ					 5
#define CAN_BS2_6TQ					 6
#define CAN_BS2_7TQ					 7
#define CAN_BS2_8TQ					 8

// CAN IDENTIFIER TYPE
#define CAN_ID_STD					0x00UL
#define CAN_ID_EXT					0x01UL

// CAN TYPE OF TRANSMISSION
#define CAN_RTR_DATA				0x00UL
#define CAN_RTR_REMOTE				0x01UL

//CAN Mailbox values
#define CAN_mailbox0 				0x00UL
#define CAN_mailbox1				0x01UL
#define CAN_mailbox2 				0x02UL

/*typedef enum
{
	CAN_STATE_RESET				= 0x00U,
	CAN_STATE_READY				= 0x01U,
	CAN_STATE_LISTENING			= 0x02U,
	CAN_STATE_SLEEP_PENDING		= 0x03U,
	CAN_STATE_SLEEP_ACTIVE		= 0x04U,
	CAN_STATE_ERROR				= 0x05U
} CAN_State_t; */





typedef struct
	{

	uint32_t Prescaler ;
	uint32_t Mode;
	uint32_t SyncJumpW;
	uint32_t Time_Seg1;
	uint32_t Time_Seg2;
	uint32_t TimeTriggered_Mode;
	uint32_t AutoBusOff;
	uint32_t AutoWakeUp;
	uint32_t AutoRetransmission;
	uint32_t ReceiveFifoLocked;
	uint32_t TransmitFifoPriority;
	uint32_t Debug_config;


} CAN_Init_t;


typedef struct
{

	uint32_t Std_id;
	uint32_t Ext_id;
	uint32_t IDE;
	uint32_t RTR;
	uint32_t DLC;
	uint32_t Timestamp;

} CAN_Tx_t;

typedef struct
{

	uint32_t Std_id;
	uint32_t Ext_id;
	uint32_t IDE;
	uint32_t RTR;
	uint32_t DLC;
	uint32_t Timestamp;
	uint32_t FilterMatchIndex;

} CAN_Rx_t;


typedef struct CAN_typedef
{

 CAN_Init_t		Init;
 //CAN_t			CAN;

} HCAN;

/*
 * 	FUNCTION DECLARATION
 *
 * */

void CAN_init(HCAN *hcan);
void CAN_Transmit(HCAN *hcan, CAN_Tx_t *pHeader, uint8_t CAN_data[], uint32_t *pTxMailbox);
void CAN_START(void);


#endif /* CAN_H_ */
