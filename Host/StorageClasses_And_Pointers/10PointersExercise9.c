/*
 * 10PointersExercice9.c
 *
 *  Created on: Jan 6, 2024  *
 *      Author: adria        *
*/ 
 //Write a program in C to print all permutations of a given string using pointers

 #include <stdio.h>

int main(void)
 {
    // Normal variable & Pointer
    int numArray = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &numArray);

    int varArray[numArray];

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

