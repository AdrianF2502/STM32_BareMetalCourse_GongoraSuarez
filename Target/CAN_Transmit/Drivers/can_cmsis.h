/*
 * can_cmsis.h
 *
 *  Created on: Jan 16, 2024
 *      Author: adria
 */

#ifndef CAN_CMSIS_H_
#define CAN_CMSIS_H_

#include <stm32f4xx.h>

#define CAN_RX_FIFO0	0UL
#define CAN_RX_FIFO0 	1UL

#define CAN_ID_STD 0x00UL
#define CAN_ID_EXT 0x04UL

#endif /* CAN_CMSIS_H_ */

typedef struct _CAN_HandleTypedef
{
	CAN_TypeDef			*Instance;

} CAN_HandleTypeDef

typedef struct
{

	uint_32 stdID;
	uint_32 extID;
	uint_32 IDE;
	uint_32 RTR;
	uint_32 DLC;
	uint_32 timeStamp;
	uint_32 FilterMatchIndex;

} CAN_RxHeader_t;

void CAN_GetRxMSG(CAN_HandleTypeDef *hcan, uint32_t RxFifo, CAN_RxHeaderTypeDef *pHeader, uint8_t aData[]);

void CAN_ConfigFilter(CAN_HandleTypeDef *hcan, CAN_FilterTypeDef *sFilterConfig);
