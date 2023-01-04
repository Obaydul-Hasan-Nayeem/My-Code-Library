// Problem:
/*
Write a function that will take an integer as an argument and return the factorial of the integer. Then write another function
that will take two integers as arguments and then return the ratio of the factorials of the first argument with the second one.
You need to make two calls to the first function inside the second function to find the factorials of the numbers.
*/


// Solution:
#include<stdio.h>

int factorial (int a); // function prototype
void ratio (int a, int b); // function prototype

// driver code
int main () {
    //taking inputs
    int a, b;
    printf("Enter Two Integer Numbers:\n");
    scanf("%d%d", &a, &b);

    // printing outputs
    printf("\nFactorial of %d is: %d\n", a, factorial(a));
    printf("Factorial of %d is: %d\n", b, factorial(b));
    printf("\nRatio of the Factorials of %d & %d is = ", a, b);
    ratio(a, b);

return 0;
}

// function to find the factorial of a number
int factorial (int a) {
    int ans = 1;

    for (int i = 1; i <= a; i++) {
        ans *= i;
    }

    return ans;
}

// function to find the ratio of two numbers
void ratio (int a, int b) {

    a = factorial(a); // calling to the another function to find the factorial
    b = factorial(b); // calling to the another function to find the factorial

    // finding ratio
    int mn;
    if (a < b) {
        mn = a;
    }
    else {
        mn = b;
    }

    for (int i = 2; i <= mn; i++) {
        while(a % i == 0 && b % i == 0) {
            a /= i;
            b /= i;
        }
    }

    printf("%d : %d\n", a, b); // printing the ratio
}


