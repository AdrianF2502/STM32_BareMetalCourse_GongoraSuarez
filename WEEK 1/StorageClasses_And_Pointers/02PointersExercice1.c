/*
 * 02PointersExercice1.c
 *
 *  Created on: Jan 5, 2024  *
 *      Author: adria        *
*/
 
 #include <stdio.h>
 
 int main(void)
 {
    char val = 100; // Variable to be point to. / d in ASCII
    char * ptr_val; // Declaration / at this point is a wild pointer
    ptr_val = &val; // Initialize the pointer / we assign a value to the pointer the address of "char val"

    printf("Variable value %d\n", *ptr_val);

    *ptr_val = 65; // A in ASCII

    printf("Variable value2 %d", *ptr_val);

    int m = 10, n, o;
    int *z;
    z = &m;
    
    printf("z stores the address of m = %d", z);
    printf("*z stores the value of m = %d", *z);
    printf("&m stores the address of m = %d", &m);
    printf("z stores the address of m = %d", &o);
    printf("z stores the address of m = %d", &z);
    
    getchar();
    
 
 }