// Problem:
/*
You will be given two integers n and k. First you need to print all the even numbers from 1 to n serially
and then followed by those even numbers print all the odd numbers in the same range.
Finally, find the k-th number in the sequence that you just printed.

Sample Input:
13 9

Sample Output:
2 4 6 8 10 12 1 3 5 7 9 11 13
The 9th element in this sequence is 5.

Explanation:
After printing the even numbers and then all the odd numbers if we look at the sequence the 9th element in the sequence is 5.
The 1st one is 2, the 2nd one is 4 and so on.

*/

// My Solution:
#include<stdio.h>

int count = 0, kth; // global variable

print_even (int n, int k); // function prototype
print_odd (int n, int k); // function prototype

// driver code
int main () {

    int n, k;
    scanf("%d%d", &n, &k);

    print_even(n, k);
    print_odd(n, k);

   if (k == 1) {
        printf("\nThe %dst element in this sequence is: %d.\n", k, kth);
   }
   else if (k == 2) {
        printf("\nThe %dnd element in this sequence is: %d.\n", k, kth);
   }
   else if (k == 3) {
        printf("\nThe %drd element in this sequence is: %d.\n", k, kth);
   }
   else {
        printf("\nThe %dth element in this sequence is: %d.\n", k, kth);
   }

return 0;
}

// function to print the even numbers from 1 to n
print_even (int n, int k) {
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            count++;
            if (count == k) {
                kth = i;
            }
        }
    }
    return kth;
}

// function to print the odd numbers from 1 to n
print_odd (int n, int k) {
     for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            printf("%d ", i);
            count++;
            if (count == k) {
                kth = i;
            }
        }
    }
    return kth;
}



// Problem Setter's Solution:
/*
#include <stdio.h>

int main(){
  int n, k;
  scanf("%d %d", &n, &k);
  int arr[n], index=0;

  for(int i=1; i<=n; i++){
    if(i%2==0){
      arr[index] = i;
      index++;
    }
  }

  for(int i=1; i<=n; i++){
    if(i%2!=0){
      arr[index] = i;
      index++;
    }
  }

  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }
  printf("\nThe %dth element in this sequence is %d.",k, arr[k-1]);

  return 0;
}
*/
