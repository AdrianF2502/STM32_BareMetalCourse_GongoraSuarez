/*
 * main.c
 *
 *  Created on: Jan 5, 2024  *
 *      Author: adria        *
 *  STORAGE CLASSES REVIEW   *
 *                           */


#include <stdio.h>

extern int global_variable = 23; // This initialization is a simulation of an actual file or library.

int localfunction(void) // Function using a Static Class
{
    static int counter1 = 10;
    counter1++;
    return counter1;
}

int localfunction2(void) // Function using normal local variable
{
    int counter2 = 7;
    counter2++;
    return counter2;
}

int main(void)
{
    //Static Class Demostration
	printf("  1 - cycle: ");
    printf("\nStatic Counter =: %d", localfunction());
    printf("\nLocal Counter =: %d", localfunction2());
    printf("\n\n  2 - cycle: ");
    printf("\nStatic Counter =: %d", localfunction());
    printf("\nLocal Counter =: %d", localfunction2());


    getchar();

    //Extern Class

    printf("\n\nThe local counter = %d\n", localfunction2()); // Call a local function or also could be a library function
    printf("The library extern variable = %d\n", global_variable); // Calling the extern variable

    getchar();

	return 0;
}
