/// Problem Statement
/*

*/

/// Solution in C:
#include<stdio.h>

void find_consecutive_even(int n); // prototype of the function

// driver code
int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);
        find_consecutive_even(n);
        printf("\n");
    }

return 0;
}

// function to find the 4 consecutive even numbers which are the sum of the number
void find_consecutive_even(int n) {
    for (int i = 2; i <= n; i += 2) {
            int sum = 0, count = 0;
            for (int j = i; j <= n; j += 2) {
                sum += j;
                count++;

                if (count == 4 && sum == n) {

                    for (int k = i; k <= j; k += 2) {
                        printf("%d ", k);
                    }

                    return 0;
                }

                else if (count == 4 || sum > n) {
                    break;
                }
            }
    }
}


