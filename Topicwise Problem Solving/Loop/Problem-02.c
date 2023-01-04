// Problem:
/*
You need to take 4 distinct integer as input. Print the largest and smallest among them.
Distinct means all of them are separate integers. None of them is equal to any other of them.

Sample Input:
123 435 34 612
Sample Output:
Largest = 612
Smallest = 34
*/

// Solution:
#include <stdio.h>
int main(){
  int a, b, c, d, largest, smallest;
  scanf("%d %d %d %d", &a, &b, &c, &d);

  if(a>b && a>c && a>d){
    largest = a;
  }
  else if(b>a && b>c && b>d){
    largest = b;
  }
  else if(c>a && c>b && c>d){
    largest = c;
  }
  else {
    largest = d;
  }


  if(a<b && a<c && a<d){
    smallest = a;
  }
  else if(b<a && b<c && b<d){
    smallest = b;
  }
  else if(c<a && c<b && c<d){
    smallest = c;
  }
  else {
    smallest = d;
  }
  printf("Largest = %d\nSmallest = %d" ,largest,smallest);
  return 0;
}
