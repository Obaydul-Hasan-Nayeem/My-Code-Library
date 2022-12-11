/// Problem Statement
/*
Problem Statement:
You are given a positive integer n .The second line will contain n positive integers. And the third line will contain a value Q. The next line will contain Q queries,every query will contain two values L and R.Now,You need to swap two values by the following way-

>> Swap the values of index L  with R .

And lastly print the modified array.

Note - You must swap the values using a function with pointers. And Consider the array as 1 base index.

See the sample input output for more clarification.

Constraints-
2<=n<=100
Values of array will be given between 1-1000
1<=L,R<=100 and L!=R

Sample Input : 							     Sample Output :

7
9 1 17 3 5 2 7
4									     17 3 5 2 9 1 7
1 3
2 4
5 3
4 6

Explanation -
1st query - swap 1st index value with 3rd index value then the array will be -  17 1 9 3 5 2 7

*/

/// Solution in C:
#include<stdio.h>

void swap_elements(int *x, int *y); // prototype of the function

// driver code
int main () {
    // taking the length n of the positive integers
    int n;
    scanf("%d", &n);

    // taking the integers into an array
    int ar[n + 1];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &ar[i]);
    }

    // taking the length of the quries
    int q;
    scanf("%d", &q);

    // swapping of each query by a pointer function
    for (int i = 1; i <= q; i++) {
        int l, r;
        scanf("%d%d", &l, &r);

        swap_elements(&ar[l], &ar[r]);
    }

    // printing the array
     for (int i = 1; i <= n; i++) {
        printf("%d ", ar[i]);
    }

    return 0;
}

// function to swap the elements by pointer
void swap_elements(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

