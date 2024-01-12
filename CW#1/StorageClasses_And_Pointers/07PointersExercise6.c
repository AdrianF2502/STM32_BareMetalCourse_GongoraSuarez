/*
 * 07PointersExercice6.c
 *
 *  Created on: Jan 5, 2024  *
 *      Author: adria        *
*/
 
 #include <stdio.h>


int sumOfPointers(int *num1, int *num2)
{
    int ptr_sum = *num1 + *num2;
    return ptr_sum;
}

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

    *ptr_sum = sumOfPointers(ptr_m, ptr_n);

    printf("---------------------------------\n");
    printf("The sum of the two numbers is: %i\n", *ptr_sum);
    printf("---------------------------------\n");

    getchar();
 }


