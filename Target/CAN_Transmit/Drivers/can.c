/*
 * can.c
 *
 *  Created on: Jan 14, 2024
 *      Author: adria
 */


#include "can.h"





void CAN_init(HCAN *hcan) // TODO: PUT ERROR HANDLER IN PLACE INSTEAD OF VOID TYPE
{
	pMCRReg -> DBF = CLEAR_BIT; // ENABLE THE CAN IN DEBUG MODE

	// ENTER INITIALIZATION MODE
	pMCRReg -> INRQ = SET_BIT;

	while (pMSRReg -> INAK == 0)
	{
		// TODO: ERROR CODE and RETURN
	}

	// EXIT SLEEP MODE
	pMCRReg -> SLEEP = CLEAR_BIT;
	while (pMSRReg -> SLAK != 0)
	{
		// TODO: ERROR CODE and RETURN
	}

	/*
	 * ----------------------------------------------------
	 * |												  |
	 * |		  CONFIGURATION FOR bxCAN	init		  |
	 * |												  |
	 * ----------------------------------------------------
	 */

	// TIME TRIGGERED MODE
	if(hcan -> Init.TimeTriggered_Mode == ENABLE)
	{
		pMCRReg -> TTCM = ENABLE;
	}
	else
	{
		pMCRReg -> TTCM = DISABLE;
	}

	// AUTOMATIC BUS DISCONECTION
	if(hcan -> Init.AutoBusOff == ENABLE)
	{
		pMCRReg -> ABOM = ENABLE;
	}
	else
	{
		pMCRReg -> ABOM = DISABLE;
	}

	// AUTOMATIC WAKE UP
	if(hcan -> Init.AutoWakeUp == ENABLE)
	{
		pMCRReg -> AWUM = ENABLE;
	}
	else
	{
		pMCRReg -> AWUM = DISABLE;
	}

	// FIFO LOCKED MODE
	if(hcan -> Init.ReceiveFifoLocked == ENABLE)
	{
		pMCRReg -> RFLM = ENABLE;
	}
	else
	{
		pMCRReg -> RFLM = DISABLE;
	}

	// SET TRANSMIT FIFO PRIORITY
	if(hcan -> Init.TransmitFifoPriority == ENABLE)
	{
		pMCRReg -> TXFP = ENABLE;
	}
	else
	{
		pMCRReg -> TXFP = DISABLE;
	}

	if(hcan -> Init.Debug_config == ENABLE)
	{
		pMCRReg -> DBF = ENABLE;
	}
	else
	{
		pMCRReg -> DBF = DISABLE;
	}

	/*
	 * ----------------------------------------------------
	 * |		 BIT TIMING REGISTER & MODES			  |
	 * ----------------------------------------------------
	 */
	switch(hcan -> Init.Mode)
	{
		// NORMAL MODE
		case CAN_MODE_NORMAL: pBTRReg -> SILM = CLEAR_BIT;
							  pBTRReg -> LBKM = CLEAR_BIT;
			break;
		// LOOPBACK MODE
		case CAN_MODE_LOOPBACK: (pBTRReg -> LBKM = SET_BIT);
			break;
		// SILENT MODE
		case CAN_MODE_SILENT: (pBTRReg -> SILM = SET_BIT);
			break;
		// LOOPBACK SILENT MODE
		case CAN_MODE_SILENT_LOOPBACK: pBTRReg -> SILM = SET_BIT;
									   pBTRReg -> LBKM = SET_BIT;
			break;
		default:
			return; // TODO: ERROR CODE
		}

	// SYNC JUMP WIDH TIME QUATA 1-4

	switch(hcan -> Init.SyncJumpW)
	{

		case CAN_SJW_1TQ: (pBTRReg -> SJW = 0x0);
			break;

		case CAN_SJW_2TQ: (pBTRReg -> SJW = 0x1);
			break;

		case CAN_SJW_3TQ: (pBTRReg -> SJW = 0x2);
			break;

		case CAN_SJW_4TQ: (pBTRReg -> SJW = 0x3);
			break;
		default:
			return;
	}


	// BIT SEGMENT TIME QUANTA 1 - 16

	switch(hcan -> Init.Time_Seg1)
	{

		case CAN_BS1_1TQ: (pBTRReg -> TS1 = 0x0);
			break;

		case CAN_BS1_2TQ: (pBTRReg -> TS1 = 0x1);
			break;

		case CAN_BS1_3TQ: (pBTRReg -> TS1 = 0x2);
			break;

		case CAN_BS1_4TQ: (pBTRReg -> TS1 = 0x3);
			break;

		case CAN_BS1_5TQ: (pBTRReg -> TS1 = 0x4);
			break;

		case CAN_BS1_6TQ: (pBTRReg -> TS1 = 0x5);
			break;

		case CAN_BS1_7TQ: (pBTRReg -> TS1 = 0x6);
			break;

		case CAN_BS1_8TQ: (pBTRReg -> TS1 = 0x7);
			break;

		case CAN_BS1_9TQ: (pBTRReg -> TS1 = 0x8);
			break;

		case CAN_BS1_10TQ: (pBTRReg -> TS1 = 0x9);
			break;

		case CAN_BS1_11TQ: (pBTRReg -> TS1 = 0xA);
			break;

		case CAN_BS1_12TQ: (pBTRReg -> TS1 = 0xB);
			break;

		case CAN_BS1_13TQ: (pBTRReg -> TS1 = 0xC);
			break;

		case CAN_BS1_14TQ: (pBTRReg -> TS1 = 0xD);
			break;

		case CAN_BS1_15TQ: (pBTRReg -> TS1 = 0xE);
			break;

		case CAN_BS1_16TQ: (pBTRReg -> TS1 = 0xF);
			break;

		default:
			return; // TODO: ERROR CODE
	}


	// BIT SEGMENT 2 TIME QUANTAS 1-8

	switch(hcan -> Init.Time_Seg2)
	{

		case CAN_BS2_1TQ: (pBTRReg -> TS2 = 0x0);
			break;

		case CAN_BS2_2TQ: (pBTRReg -> TS2 = 0x1);
			break;

		case CAN_BS2_3TQ: (pBTRReg -> TS2 = 0x2);
			break;

		case CAN_BS2_4TQ: (pBTRReg -> TS2 = 0x3);
			break;

		case CAN_BS2_5TQ: (pBTRReg -> TS2 = 0x4);
			break;

		case CAN_BS2_6TQ: (pBTRReg -> TS2 = 0x5);
			break;

		case CAN_BS2_7TQ: (pBTRReg -> TS2 = 0x6);
			break;

		case CAN_BS2_8TQ: (pBTRReg -> TS2 = 0x7);
			break;
		default:
			return;
	}

	pBTRReg -> BRP = ((hcan -> Init.Prescaler) - 1U); // THIS INVOLVES 1024 POSIBLE VALUES I AM NOT DOING A MACRO FOR EVERY SINGLE ONE

	//pBTRReg -> LBKM = SET_BIT; // HARDCODE: Put it in LOOPBACK MODE

}

void CAN_Transmit(HCAN *hcan, CAN_Tx_t *pHeader, uint8_t CAN_data[], uint32_t *pTxMailbox)
{
	uint32_t transmitmailbox;

	// CHECK ALL THE TX MAILBOXES IF THEY ARE FULL
	if(pTSRReg -> TME0 != 0 || pTSRReg -> TME1 != 0 || pTSRReg -> TME2 != 0)
	{
		// Check the value of the next available mailbox
		transmitmailbox = pTSRReg -> CODE;

		// Store the value
		*pTxMailbox = transmitmailbox;

		// SET UP THE ID ----------------------------------------

		if (pHeader -> IDE == CAN_ID_STD)
		{

			switch(*pTxMailbox)
			{
				case CAN_mailbox0:
					pTI0RReg -> STID = pHeader->Std_id;
					pTI0RReg -> RTR = pHeader-> RTR;
						break;
				case CAN_mailbox1:
					pTI1RReg -> STID = pHeader->Std_id;
					pTI1RReg -> RTR = pHeader-> RTR;
						break;
				case CAN_mailbox2:
					pTI2RReg -> STID = pHeader->Std_id;
					pTI2RReg -> RTR = pHeader-> RTR;
						break;
				default:
					return;
			}
		}
		else
		{
			switch(*pTxMailbox)
			{
				case CAN_mailbox0:
					pTI0RReg -> EXID = pHeader->Ext_id;
					pTI0RReg -> RTR = pHeader-> RTR;
						break;
				case CAN_mailbox1:
					pTI1RReg -> EXID = pHeader->Ext_id;
					pTI1RReg -> RTR = pHeader-> RTR;
						break;
				case CAN_mailbox2:
					pTI2RReg -> EXID = pHeader->Ext_id;
					pTI2RReg -> RTR = pHeader-> RTR;
						break;
				default:
					return;
			}

		}
		//SET UP DLC -------------------------------------------

		switch(*pTxMailbox)
					{
						case CAN_mailbox0:  // TODO: COMPLETE WITH THE TIMESTAP IF USED...
							pTDT0RReg -> DLC  = pHeader->DLC;
								break;
						case CAN_mailbox1:
							pTDT1RReg -> DLC  = pHeader->DLC;
								break;
						case CAN_mailbox2:
							pTDT2RReg -> DLC  = pHeader->DLC;
								break;
						default:
							return;
					}
		// SET UP THE DATA FIELD -------------------------------

		switch(*pTxMailbox)
					{
						case CAN_mailbox0:
							pTDH0RReg ->DATA7  = CAN_data[7];
							pTDH0RReg ->DATA6  = CAN_data[6];
							pTDH0RReg ->DATA5  = CAN_data[5];
							pTDH0RReg ->DATA4  = CAN_data[4];
							pTDL0RReg ->DATA3  = CAN_data[3];
							pTDL0RReg ->DATA2  = CAN_data[2];
							pTDL0RReg ->DATA1  = CAN_data[1];
							pTDL0RReg ->DATA0  = CAN_data[0];
								break;
						case CAN_mailbox1:
							pTDH1RReg ->DATA7  = CAN_data[7];
							pTDH1RReg ->DATA6  = CAN_data[6];
							pTDH1RReg ->DATA5  = CAN_data[5];
							pTDH1RReg ->DATA4  = CAN_data[4];
							pTDL1RReg ->DATA3  = CAN_data[3];
							pTDL1RReg ->DATA2  = CAN_data[2];
							pTDL1RReg ->DATA1  = CAN_data[1];
							pTDL1RReg ->DATA0  = CAN_data[0];
								break;
						case CAN_mailbox2:
							pTDH2RReg ->DATA7  = CAN_data[7];
							pTDH2RReg ->DATA6  = CAN_data[6];
							pTDH2RReg ->DATA5  = CAN_data[5];
							pTDH2RReg ->DATA4  = CAN_data[4];
							pTDL2RReg ->DATA3  = CAN_data[3];
							pTDL2RReg ->DATA2  = CAN_data[2];
							pTDL2RReg ->DATA1  = CAN_data[1];
							pTDL2RReg ->DATA0  = CAN_data[0];
								break;
						default:
							return;
					}

		// REQUEST THE TRANSMISSION
		switch(*pTxMailbox)
					{
						case CAN_mailbox0:
							pTI0RReg -> TXRQ = SET_BIT;

								break;
						case CAN_mailbox1:
							pTI1RReg -> TXRQ = SET_BIT;

								break;
						case CAN_mailbox2:
							pTI2RReg -> TXRQ = SET_BIT;

								break;
						default:
							return;
					}
	}
}

void CAN_START(void){

	pMCRReg -> INRQ = CLEAR_BIT;

	while (pMSRReg -> INAK != 0) // WAIT FOR ACK
	{
		// TODO: ERROR CODE and RETURN
	}

}

