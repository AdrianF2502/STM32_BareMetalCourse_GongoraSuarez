/*
 * 04PointersExercice3.c
 *
 *  Created on: Jan 5, 2024  *
 *      Author: adria        *
*/
 
 #include <stdio.h>
 
 int main(void)
 {

    int m = 29;

   
    printf("Address of m: %p\n", &m);
    printf("Value of m: %i\n\n", m);

     int * ab = &m;

    printf("Now AB is assigned with the address of m.\n");

    printf("Address of Ptr AB: %p\n", ab);
    printf("Value of Ptr AB: %i\n\n", *ab);

    printf("The value of m assigned to 34 now.\n");

    *ab = 34;

    printf("Address of Ptr AB: %p\n", ab);
    printf("Value of Ptr AB: %i\n\n", *ab);

    printf("The value of m assigned to 7 now.\n");

    *ab = 7;

    printf("Address of Ptr AB: %p\n", ab);
    printf("Value of Ptr AB: %i\n\n", *ab);

    getchar();
    
 }