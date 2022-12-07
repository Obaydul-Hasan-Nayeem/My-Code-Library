//Problem Statement

/*
There are N students in a class. Recently they got their Math course marks. One of them got the highest marks.
So now they want to know how much more marks they need to get the highest mark.
Can you calculate for every student what is the difference between their marks and the highest marks and print them!

Input Format
First line will contain N
Second line will contain the marks of N students

Constraints
1 <= N <= 100
0 <= Marks <= 100

Output Format
Output the difference between the marks of any student and highest marks

Sample Input 0
5
15 25 50 24 48

Sample Output 0
35 25 0 26 2
*/

// Solution in C:
#include<stdio.h>
int main() {
  int n;
  scanf("%d", &n);

  int ar[n+1];

  for (int i = 1; i <= n; i++) {
    scanf("%d", &ar[i]);
  }

  int mx = ar[1];
  for (int i = 2; i <= n; i++) {
    if (ar[i] > mx) {
        mx = ar[i];
    }
  }

  for (int i = 1; i <= n; i++) {
    printf("%d ", mx - ar[i]);
  }

  return 0;
}
