/// Problem Statement:
/*
Suppose you want to declare an array of size 15 and the elements of the array will be in a geometric progression, the first one starting with 1 and the common ratio being 2. For example, the first few elements of that array will be 1, 2, 4, 8, 16, … and so on. Write a for loop to initialize the array with the required progression.
*/

/// My Solution
The source code of for loop to initialize the array with the required progression:

#include<stdio.h>
int main() {
    int ar[15];

    int c = 1;

    // for loop to initialize the array
    for (int i = 0; i < 15; i++) {
        ar[i] = c;
        c *= 2;
    }

return 0;
}


