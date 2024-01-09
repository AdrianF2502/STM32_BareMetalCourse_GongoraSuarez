/*
 * main.c
 *
 *  Created on: Jan 9, 2024  *
 *      Author: adria        *
 *  UNIONS                   *
 *                           */


#include <stdio.h>

union uExample // SAME syntax as a STRUCT
{
    int aInt;
    float aFloat;
    double aDouble;
    char aChar;
};

int main(void)
{
    union uExample u1; // SAME syntax

    u1.aInt = 42;

    printf("Integer: %d\n", u1.aInt);

    u1.aFloat = 3.1416;
    // Unions share the same memory address so if one variable changes the other will.
    printf("Flotaing Point %f\n", u1.aFloat); // 3.1416
    printf("Integer after float initizalization: %d\n", u1.aInt); // 1078530041 

    


    return 0;
}