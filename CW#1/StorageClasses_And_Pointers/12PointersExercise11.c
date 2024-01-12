/*
 * 12PointersExercise11.c
 *
 *  Created on: Jan 6, 2024  *
 *      Author: adria        *
*/ 
 //Write a program in C to print all permutations of a given string using pointers

 #include <stdio.h>

int main(void)
 {
    // Normal variable & Pointer
    int arrlimit = 9999;
    static int i=1;
    char varArray[arrlimit]; // A array with a limit

    printf("Please enter a number: ");
    scanf("%s", varArray);

    while(i < 9999) // size_t is an "unsiged long", weird way to say that.
    {
       if (varArray[i] == '\0')
       {
        break;
       }
        i++;
    }
    
    printf("The lenght of the given string is: %d", i);

    getchar();
    getchar();

    return 0;
 }

