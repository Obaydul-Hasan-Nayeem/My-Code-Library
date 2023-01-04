/// Problem Statement
/*
Problem Statement
You are given an array of size n. And the next line will contain n positive integers. Find the number of prime numbers in the array and find the average of all even integers in the array. Implement it using two functions(one is for prime and second one is for finding the average) and traverse the array using pointers.

See the sample input-output for more clarification.

Sample Input-
-----------------------
5
2 5 9 11 14

Sample Output-
-----------------------
Prime numbers: 3
Average of all positive integers: 8.00

*/

/// Solution in C:
#include <stdio.h>

int find_num_of_primes(int n, int ar[]); // prototype of the function
int find_average(int n, int *ar); // prototype of the function

// driver code
int main () {

    // taking the length of the array
    int n;
    scanf("%d", &n);

    // taking the elements of the array
    int ar[n + 1];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &ar[i]);
    }

    int *ptrAr = ar; // declared a pointer variable to traverse the array into the function

    int num_of_primes = find_num_of_primes(n, ptrAr); // traversing the array with it's length by pointer to find the number of primes
    double average = find_average(n, ptrAr); // traversing the array with it's length by pointer to find the average

    // printing the both results
    printf("Prime numbers: %d\n", num_of_primes);
    printf("Average of all positive integers: %.2lf\n", average);

    return 0;
}

// function to find the number of prime elements in the array
int find_num_of_primes(int n, int *ar) {

    int count = 0;
    int* ptr = ar; // assigned the array index into a pointer variable

    while(n--) {
        int is_prime = 1;

        if (*(ptr) <= 1) {
            is_prime = 0;
        }

        for (int j = 2; j <= sqrt(*(ptr)); j++) {
            if (*(ptr) % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            count++;
        }
        ptr++;
    }

    return count;
}

// function to find the average of even elements of the array
int find_average(int n, int *ar) {

    int* ptr = ar; // assigned the array index into a pointer variable

    double sum = 0, count = 0;
    for (int i = 1; i <= n; i++) {
        if (*(ptr + i) % 2 == 0) {
            sum += *(ptr + i);
            count++;
        }
    }

    return (sum / count);
}
