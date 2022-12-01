// Problem:

/*
Take two integers as input and print their GCD as the output. We know, GCD of two numbers is the greatest common divisor of two numbers.
You can use the logic from Question no. 6 to solve this problem.

Sample Input 1:
12 18
Sample Output 1:
The GCD of 12 and 18 is 6.
Explanation:
Since 6 is the largest number which divides both 12 and 18 so 6 is output.
*/

// Solution:
#include <stdio.h>
int main()
{
  int n1, n2;
  scanf("%d%d", &n1, &n2);

  int gcd;

  for (int i = 2; i <= n1 && i <= n2; i++) {
    if(n1 % i == 0 && n2 % i == 0) {
      gcd = i;
    }
  }

  printf("The GCD of %d and %d is %d\n", n1, n2, gcd);
  return 0;
}
