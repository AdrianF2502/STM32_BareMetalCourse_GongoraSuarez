/*
 * main.c
 *
 *  Created on: Jan 9, 2024  *
 *      Author: adria        *
 *  STRUCT AND STRUCTURE TO PTR   *
 *                           */


#include <stdio.h>

struct myStruct01 // Structure declaration
{ // Start of structure
    int aNumber;       //Member (int)
    char aLetter;
    float aFloatingPointNum;
    double aDouble; // Member (double)
    int * ptrNumber; //Member (ptr)
}; // End of structure

/*
----------------------------------------
Nesting STRUCTURES:
----------------------------------------
*/

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    int age;
    struct Date birth_date;
};

struct Point {
    int x;
    int y;
};

// Nesting structures you can make a hearatical expression this way.

int main(void)
{   // LIKE A CLASS create variable for the struct
    struct myStruct01 s1;
    
    // now we can initialize each variable with the variable s1
    s1.aDouble = 12.23; 
    s1.aLetter = 'a';
    s1.aFloatingPointNum = 1.32343;

    // We can check that the struct works.
    printf("A double %f\n", s1.aFloatingPointNum);
    printf("A letter %c\n", s1.aLetter);

    // Now we can easily create multiple structure variable with differnt values
    // using only one structure.

    struct myStruct01 s2;

    s2.aDouble = 5.32;
    s2.aLetter = 'u';
    s2.aFloatingPointNum = 723.455632;

    //Differnt values same structure.
    printf("A FP num %f\n", s2.aFloatingPointNum);
    printf("A letter %c\n", s2.aLetter);

    // -------------------------------------
    // POINTERS IN STRUCTURES //////////////
    // -------------------------------------

    struct  Point p1 = {10, 20}; // we can intialize structs this way
    struct Point *ptr = &p1;

    printf("Coordinates: (%d, %d)\n", ptr->x, ptr->y);
    
    return 0;

}