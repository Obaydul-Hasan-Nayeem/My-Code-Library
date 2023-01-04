//Problem Statement

/*
We have learned how to print patters in C language. This time you will have to print a different type of pattern of numbers.
Look at the output to understand the pattern. You will have to write a C program that will take an integer number
and creates similar patters for the corresponding inputs.

Input Format
You will be given a positive integer N as input.

Constraints
1 <= N <= 20
Output Format

Output the pattern
Sample Input 0
5

Sample Output 0
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

Sample Input 1
4

Sample Output 1
1
2 1
3 2 1
4 3 2 1
*/

// Solution in C:
#include<stdio.h>
int main() {

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int c = i;
        for (int j = 1; j <= i; j++) {
            printf("%d ", c);
            c--;
        }
        printf("\n");
    }

    return 0;
}
