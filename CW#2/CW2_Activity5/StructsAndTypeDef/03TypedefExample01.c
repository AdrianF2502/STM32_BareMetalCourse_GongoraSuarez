/*
 * main.c
 *
 *  Created on: Jan 9, 2024  *
 *      Author: adria        *
 *  typedef for variables    *
 *                           */

#include <stdio.h>
#include <stdint.h>

typedef struct pPortAddress
{
    uint32_t * pClkcrtReg;
    uint32_t * pPortBModeReg; 
    uint32_t * pPortBoutReg;
} pPORTD;

void fPortD(void){

    pPORTD PORTD =
    {
    (uint32_t*)0x40023830,
    (uint32_t*)0x40020400,
    (uint32_t*)0x40020414,
    };


}


int main(void)
{
    


    return 0;
}