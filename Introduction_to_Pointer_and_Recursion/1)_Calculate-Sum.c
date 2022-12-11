/// Problem Statement

/*
You have given a series, 1+2+3-4-5-6+7+8+9-10-11-12+......N . Your task is to print the sum of the Nth element.

Sample Input 1
10

Sample Output 1
5

Sample Input 2
20

Sample Output 2
12

Explanation of Sample Input 2:
1+2+3-4-5-6+7+8+9-10-11-12+13+14+15-16-17-18+19+20 = 12. Sum up to the 20th of this series.
*/


/// Solution in C:
#include<stdio.h>

int calculate_sum (int n); // prototype of the function

// driver code
int main () {

    int n;
    scanf("%d", &n);
    int sum = calculate_sum(n);
    printf("%d\n", sum);

return 0;
}

// function to calculate the sum of the nth element of the series
int calculate_sum (int n) {

    int toggle = 1, count = 0, sum = 0;

    for (int i = 1; i <= n; i++) {
        if (count >= 3) {
            if (toggle == 1) {
                toggle = -1;
            }
            else {
                toggle = 1;
            }
            count = 0;
        }

        if (toggle == 1) {
            sum += i;
            count++;
        }

        else if (toggle == -1) {
            sum -= i;
            count++;
        }
    }

    return sum;
}

