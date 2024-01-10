/*
 * 10PointersExercice9.c
 *
 *  Created on: Jan 6, 2024  *
 *      Author: adria        *
*/ 
 //Write a program in C to find the largest element using Dynamic Memory Allocation.
 // IN PROGRESS

 #include <stdio.h>

int main(void)
 {
    // Normal variable & Pointer
    int numArray = 0;
    int varArray[numArray];

    printf("Enter the number of elements: ");
    scanf("%d", &numArray);

    if (numArray < 100)
    {
        varArray[numArray];
    }
    else
    {
        printf("ERROR: Above 100 elements");
        return 0;
    }

    for (size_t i = 0; i < numArray; i++) // size_t is an "unsiged long", weird way to say that.
    {
        int var;
        printf("Please enter a number: ");
        scanf("%d", varArray + i);
       // varArray[numArray] = var;
    }
       
    for (size_t i = 0; i < numArray; i++)
    {
        printf("variable num - %d | value - %d\n", i, *(varArray + i));
    }

    getchar();
    getchar();

    return 0;
 }