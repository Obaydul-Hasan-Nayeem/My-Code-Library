/// Problem Statement

/*
    Problem Statement
You are given an array of size n . And the next line will contain n positive integers. Now you need to tell how many numbers are divisible by 3 and divisible by 5. For this you need to write two functions , First one is for finding whether a number is divisible by 3 or not and the second one is for finding whether a number is divisible by 5 or not. See the sample input/output and explanation for more clarification.

Print the total count of how many numbers are divisible by 3 and divisible by 5 if there are no such numbers then return -1 from the function.

Constraints-
1<=n<=100
Values of array will be given between 1-1000

Sample Input 1- 							Sample Output 1-
5										3
10 1 13 3 9 								Sample Output 2-
Sample Input 2- 								5
7
13 9 9 25 6 17 30


Explanation -
In sample input 1 -
10 is divisible by 5
3 and 9 is divisible by 3
Total count = 3
*/

/// Solution in C:
#include<stdio.h>

int div_by_three (int x); // prototype of the function
int div_by_five (int x); // prototype of the function

// driver code
int main () {
    int n;
    scanf("%d", &n);

    int ar[n + 1];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &ar[i]);
    }

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (div_by_three(ar[i]) == 1 || div_by_five(ar[i]) == 1) {
            count++;
        }
    }

    printf("%d\n", count);
return 0;
}


// function to check divisible by 3 or not
int div_by_three (int x) {
    if (x % 3 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

// function to check divisible by 5 or not
int div_by_five (int x) {
    if (x % 5 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}


