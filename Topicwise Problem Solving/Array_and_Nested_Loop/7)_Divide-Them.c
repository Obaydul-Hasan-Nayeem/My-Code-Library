///Problem Statement

/*
English teacher Mr. Rahim of class Ten asked for the homeworks of the students.
Class captain has collected all the notebooks and put them in table.
But the class captain put the notebooks of girls first, and then the notebooks of the boys.
So Mr. Rahim asked the captain to keep the boy's notebooks to the left side
and then the girl's notebooks. If the last index (index starts from 1) of a girl's notebook
is K then can you print them in the right order? Note: If K is 0, that means
there is no girl's notebook.

Input Format
First line will contain N, the number of students in that class
Second line will contain Roll of the students
Third line will contain K, the last index of a girl's notebook

Constraints
1 <= N <= 20
1 <= Roll <= 20
0 <= K <= 20

Output Format
Output the rolls of the students in the right order that class teacher wants.

Sample Input 0
10
2 4 5 1 6 12 10 14 3 19
5

Sample Output 0
12 10 14 3 19 2 4 5 1 6

*/

/// Solution in C:
#include<stdio.h>
int main() {

  int n;
  scanf("%d", &n);

  int ar[n+1];
  for (int i = 1; i <= n; i++) {
    scanf("%d", &ar[i]);
  }

  int k;
  scanf("%d", &k);

  for (int i = k + 1; i <= n; i++) {
    printf("%d ", ar[i]);
  }

  for (int i = 1; i <= k; i++) {
    printf("%d ", ar[i]);
  }

  return 0;
}
