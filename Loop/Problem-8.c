// Problem:

/*
Take two integers as input and print their LCM as the output. We know, LCM of two numbers is the least common multiple of two numbers.
You can use the logic from Question no. 6 to solve this problem.

Sample Input 1:
12 18
Sample Output 1:
The LCM of 12 and 18 is 36.
Explanation:
Since 36 is the least number which is divisible by both 12 and 18 so 36 is the output.
*/

// Solution:
#include <stdio.h>
int main()
{
  int n1, n2;
  scanf("%d%d", &n1, &n2);

  int lcm, mx, mn;

  if (n1 > n2) {
    mx = n1, mn = n2;
  } else {
    mx = n2, mn = n1;
  }

  int c = 1;
  while(1) {
    int temp = mx * c;
    if (temp % mn == 0) {
      lcm = temp;
      break;
    }
    c++;
  }

  printf("The LCM of %d and %d is %d\n", n1, n2, lcm);
  return 0;
}
