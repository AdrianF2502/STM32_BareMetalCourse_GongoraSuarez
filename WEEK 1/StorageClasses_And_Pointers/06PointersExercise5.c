/*
 * 06PointersExercice5.c
 *
 *  Created on: Jan 5, 2024  *
 *      Author: adria        *
*/
 
 #include <stdio.h>
 
 int main(void)
 {

    int m = 0;
    int * ptr_m = &m;
    int n = 0;
    int * ptr_n = &n;
    int sum = 0;
    int * ptr_sum = &n;

    printf("Please enter the first number: ");
    scanf("%d", ptr_m);

    printf("Please enter the second number: ");
    scanf("%d", ptr_n);

    *ptr_sum = *ptr_n + *ptr_m;

    printf("---------------------------------\n");
    printf("The sum of the two numbers is: %i\n", *ptr_sum);
    printf("---------------------------------\n");

    getchar();
 }