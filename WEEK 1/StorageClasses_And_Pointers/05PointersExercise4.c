/*
 * 05PointersExercice4.c
 *
 *  Created on: Jan 5, 2024  *
 *      Author: adria        *
*/
 
 #include <stdio.h>
 
 int main(void)
 {

    int m = 300;
    double fx = 300.60006;
    char cht = 'z';

    int * ptr_m = &m;
    double * ptr_fx = &fx;
    char * ptr_cht = &cht;

    printf("---------------------------------\n");
    printf("using & operation: \n");
    
    printf("address of m %p\n", &m);
    printf("address of fx %p\n", &fx);
    printf("address of cht %p\n", &cht);

    printf("---------------------------------\n");
    printf("using & and * operation: \n");
    
    printf("address of m %i\n", *&m);
    printf("address of fx %f\n", *&fx);
    printf("address of cht %c\n", *&cht);

    printf("---------------------------------\n");
    printf("Using only pointer variable \n");
    
    printf("address of m %p\n", ptr_m);
    printf("address of fx %p\n", ptr_fx);
    printf("address of cht %p\n", ptr_cht);

    printf("---------------------------------\n");
    printf("Using only pointer variable \n");
    
    printf("address of m %i\n", *ptr_m);
    printf("address of fx %f\n", *ptr_fx);
    printf("address of cht %c\n", *ptr_cht);

    getchar();

 }