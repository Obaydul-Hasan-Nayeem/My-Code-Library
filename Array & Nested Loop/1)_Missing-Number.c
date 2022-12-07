// Problem:
/*
Given the sum of four numbers and three of those numbers, find the missing number. All four numbers are positive integers.

Input Format
The first line will contain T, number of test cases.
For every test case, the input will contain one integer S (the sum of the four numbers), A, B, C (three of those four numbers).

Constraints
0 < T <= 100
0 <= S, A, B, C <= 2^32

Output Format
Print the missing number. Don't forget to print a new line after printing the value.

Sample Input 0
1
10 1 2 3
Sample Output 0
4
*/

// Solution:
#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        long long int s, a, b, c;

        scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
        printf("%lld\n", s - (a + b + c));
    }

    return 0;
}
