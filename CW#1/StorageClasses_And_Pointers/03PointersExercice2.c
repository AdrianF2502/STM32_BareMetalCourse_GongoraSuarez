/*
 * 03PointersExercice2.c
 *
 *  Created on: Jan 5, 2024  *
 *      Author: adria        *
*/
 
 #include <stdio.h>
 
 int main(void)
 {

    int m = 10, n, o;
    int *z;
    z = &m;
    
    printf("z stores the address of m = %p\n", z);
    printf("*z stores the value of m = %d\n", *z);
    printf("&m stores the address of m = %p\n", &m);
    printf("z stores the address of m = %p\n", &o);
    printf("z stores the address of m = %p\n", &z);
    
    getchar();
    
 }