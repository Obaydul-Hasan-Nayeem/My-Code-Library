///Problem Statement
/*
Noman is a social worker. He wants to keep his documents secret.
That's why he has bought a safe with him in his house.
Now he wants to put a secret code into the safe.
He was thinking that a number N would be a good secret code if no other number except 1
and N can divide that number. So, he was thinking of some numbers,
can you help him to find the one he was looking for?

Input Format
The first line will consist of T, the number of test cases.
The next T lines will contain a number N, the secret code that Noman was thinking.

Constraints
0 < T <= 100
0 < N <= 10^5

Output Format
Ouput "Yes" if the number could be a secret code, otherwise "No" without the quotation. Put a new line after

Sample Input 0
5
73
35
92
1
60

Sample Output 0
Yes
No
No
No
No

*/

/// Solution in C:
#include<stdio.h>
int main() {

  int t;
  scanf("%d", &t);

  start:
  while(t--) {
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("No\n");
        goto start;
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            printf("No\n");
            goto start;
        }
    }
    printf("Yes\n");
  }

  return 0;
}
