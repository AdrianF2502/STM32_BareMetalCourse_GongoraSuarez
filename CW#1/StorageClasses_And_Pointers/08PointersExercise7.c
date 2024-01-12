/*
 * 07PointersExercice6.c
 *
 *  Created on: Jan 5, 2024  *
 *      Author: adria        *
*/
 //  Write a program in C to find the maximum number between two numbers using a pointer
 #include <stdio.h>
 
int maxiumNumber(int num1, int num2)
{

    if (num1 > num2)
    {
        return num1;
    }
    else if (num2 > num1)
    {
        return num2;
    }
    else
    {
        return 0;
    }

}

int main(void)
 {
    // Normal variable & Pointer
    int num1 = 0;
    int * ptr_num1 = &num1;
    int num2 = 0;
    int * ptr_num2 = &num2;
    int maxNum = 0;
    int * ptr_maxNum = &maxNum;

    printf("Please enter the first number: ");
    scanf("%d", ptr_num1);

    printf("Please enter the second number: ");
    scanf("%d", ptr_num2);

    *ptr_maxNum = maxiumNumber(*ptr_num1, *ptr_num2);

    if (*ptr_maxNum == 0)
    {
        printf("---------------------------------\n");
        printf("The numbers are equal\n");
        printf("---------------------------------\n");
        getchar();
        return 0;
    }
    
    printf("---------------------------------\n");
    printf("The Maximum number is: %i\n", *ptr_maxNum);
    printf("---------------------------------\n");

    getchar();
    return 0;
 }

