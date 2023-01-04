// Problem Statement
/*
Write a c program that asks the user to enter integers as inputs to be stored in the variables 'x' &  'y' respectively. There are also two integer pointers named ptrX &  ptrY. Assign the values of 'x' and 'y' to ptrX and ptrY respectively, and display them.

Sample Input
5 10

Sample Output
5 10

Tag: Pointer
*/

// Solution in C:

#include<stdio.h>

// driver code
int main () {
   int x, y;
   scanf("%d%d", &x, &y);

   int *ptrX, *ptrY; // integer pointers

   // assigning the values into the pointers
   ptrX = &x;
   ptrY = &y;

   printf("%d %d", *ptrX, *ptrY); // printing the values by pointers

   return 0;
}


