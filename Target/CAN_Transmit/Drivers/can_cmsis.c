/*
 * can_cmsis.c
 *
 *  Created on: Jan 17, 2024
 *      Author: adria
 */

#include <can_cmsis.h>


void CAN_ConfigFilter(CAN_HandleTypeDef *hcan, CAN_FilterTypeDef *sFilterConfig)
{
	uint32_t filter



}



/*	Function gets a message and stores it in an array	*/
void CAN_GetRxMSG(CAN_HandleTypeDef *hcan, uint32_t RxFifo, CAN_RxHeader_t *pHeader, uint8_t aData[])
{

	/* CHECK THE RX FIFOs	*/

	if(RxFifo == CAN_RX_FIFO0)
	{
		// Check that Rx FIFO 0 is not empty
		if((hcan->Instance->RF0R & CAN_RF0R_FMP0) == 0UL)
		{

			// ERROR HANDLER
		}

		else
		{	// Check Rx FIFO 1 is not empty
			if((hcan->Instance->RF0R & CAN_RF1R_FMP1) == 0U)
			{

				//ERROR HANDLER
			}

		}

		// We check the type of identifier (EXTENDER / STANDARD)
		pHeader->IDE = CAN_RI0R_IDE & hcan->Instance->sFIFOMailBox[RxFifo].RIR;

		if (pHeader->IDE = CAN_ID_STD)
		{
			// Standard IDE		CAN STDID MASK	AND	FIFO 1 or 0 Register RIR	>>	MOVE TO LSB AND SAVE IT
			pHeader->stdID = (CAN_RI0R_STID & hcan ->Instance->sFIFOMailBox[RxFifo].RIR) >> CAN_TI0R_STID_Pos;
		}
		else
		{	// Extended IDE 	LSB EXID MASK + STID MASK = EXID 	AND		TO FIFO 1 or 0				MOVE IT TO MAKE IT LSB
			pHeader->extID = ((CAN_RI0R_EXID | CAN_RI0R_STID) & hcan ->Instance->sFIFOMailBox[RxFifo].RIR) >> CAN_RI0R_EXID_Pos;
		}

		/* The next operations follow the same formula:
		 *
		 * 	REGISTER BIT MASK AND (*) to the given RxFIFO, use a shift operation to get the data needed (DLC, TIME, etc).
		 *
		 * 	( we basically give the range of bits that we want and then tell what register to get it from)
		 *
		 * 	Here we get the:
		 * 	- Remote Transmission Request (RTR)
		 * 	- Data lenght code (DLC)
		 * 	- FilterMarchIndex (FMI)
		 * 	- Time stamp (TIME)
		 *  */

			pHeader->RTR = (CAN_RI0R_RTR & hcan->Instance->sFIFOMailBox[RxFifo].RIR);
			pHeader->DLC = (CAN_RDT0R_DLC & hcan->Instance->sFIFOMailBox[RxFifo].RDTR) >> CAN_RD0R_DLC_Pos;
			pHeader->FilterMatchIndex = (CAN_RDT0R_FMI & hcan->Instance->sFIFOMailBox[RxFifo].RDTR) >> CAN_RD0R_FMI_Pos;
			pHeader->timeStamp = (CAN_RDT0R_TIME & hcan->Instance->sFIFOMailBox.RDTR) >> CAN_RDT0R_TIME_Pos;

			// NOW WE GET THE DATA (data low and data high)

			aData[0] = (uint8_t) ((CAN_RDL0R_DATA0 & hcan->Instance->sFIFOMailBox[RxFifo].RDLR) >> CAN_RDL0R_DATA0_Pos);
			aData[1] = (uint8_t) ((CAN_RDL0R_DATA1 & hcan->Instance->sFIFOMailBox[RxFifo].RDLR) >> CAN_RDL0R_DATA1_Pos);
			aData[2] = (uint8_t) ((CAN_RDL0R_DATA2 & hcan->Instance->sFIFOMailBox[RxFifo].RDLR) >> CAN_RDL0R_DATA2_Pos);
			aData[3] = (uint8_t) ((CAN_RDL0R_DATA3 & hcan->Instance->sFIFOMailBox[RxFifo].RDLR) >> CAN_RDL0R_DATA3_Pos);
			aData[4] = (uint8_t) ((CAN_RDH0R_DATA4 & hcan->Instance->sFIFOMailBox[RxFifo].RDLR) >> CAN_RDL0R_DATA4_Pos);
			aData[5] = (uint8_t) ((CAN_RDH0R_DATA5 & hcan->Instance->sFIFOMailBox[RxFifo].RDLR) >> CAN_RDL0R_DATA5_Pos);
			aData[6] = (uint8_t) ((CAN_RDH0R_DATA6 & hcan->Instance->sFIFOMailBox[RxFifo].RDLR) >> CAN_RDL0R_DATA6_Pos);
			aData[7] = (uint8_t) ((CAN_RDH0R_DATA7 & hcan->Instance->sFIFOMailBox[RxFifo].RDLR) >> CAN_RDL0R_DATA7_Pos);

		// Release the FIFO
		if (RxFifo == CAN_RX_FIFO0)
		{

			SET_BIT(hcan->Instance->RF0R, CAN_RF0R_RFOM0);

		}
		else
		{
			SET_BIT(hcan->Instance->RF1R, CAN_RF1R_RFOM1);

		}

	}else
	{
		//ERROR

	}
}
