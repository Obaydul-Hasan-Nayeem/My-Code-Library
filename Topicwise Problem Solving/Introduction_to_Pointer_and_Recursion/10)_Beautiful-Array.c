/// Problem Statement
/*
Problem Statement:
You are given an array of size n. And the next line will contain n positive integers. Your favourite number is 7. The array will be nice if half or more of the numbers in the array have 7 digits. Implement it using a function and traverse the array using pointers.

See the sample input-output for more clarification.

Sample Input- 1
-----------------------
6
33 1 17 171 88 734

Sample Output- 1
-----------------------
Beautiful

Sample Input- 2
-----------------------
5
33 1 17 11 88

Sample Output- 2
-----------------------
Ugly

Explanation -
In sample input 1 -
17 have the last digit 7
171 have the middle digit 7
734 has the first digit 7
*/

/// Solution in C:
#include <stdio.h>

int find_seven(int n, int* ar); // prototype of the function

// driver code
int main () {
    // taking the length of the array
    int n;
    scanf("%d", &n);

    // taking the elements of the array
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    int* ptrAr = ar; // declared pointer to traverse the array

    int number_of_seven = find_seven(n, ptrAr); // traversing the array into the function with it's length by pointer

    // checking the number of 7 whether greater than the half of the total elements or not.
    if (number_of_seven >= ((n - 1) / 2)) {
        printf("Beautiful\n");
    }
    else {
        printf("Ugly\n");
    }

return 0;
}

// function to find the elements which is contained with 7
int find_seven(int n, int* ar) {

    int* ptr = ar; // assigned the 1st index of the array into a pointer variable
    int count = 0;

    while(n--) {
        int num = *ptr;
        int is_seven = 0;

        while(num != 0) {
            int rem = num % 10;
            if (rem == 7) {
                is_seven = 1;
                break;
            }
            num /= 10;
        }

        if (is_seven) {
            count++;
        }

        ptr++;
    }

    return count;
}


