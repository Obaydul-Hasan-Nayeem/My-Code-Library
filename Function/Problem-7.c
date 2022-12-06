// Problem:
/*
Write a C function that will take an array of integers as an argument
and return the median value of the array.
For hints see this
Note - The given array will not be sorted, hence first you need to sort the given array.
And calculate the median for both odd and even length arrays.


*/


// Solution:
#include<stdio.h>

float median (int n, int ar[]); // function prototype
void sort (int n, int ar[]); // function prototype

// driver code
int main () {

  int n;
  printf("Enter the length of the array: ");
  scanf("%d", &n);

  int ar[n + 1];
  printf("\nEnter the elements of the array:\n");
  for (int i = 1; i <= n; i++) {
    scanf("%d", &ar[i]);
  }

  float ans = median(n, ar);
  printf("\nThe Median of the elements is = %.1f\n", ans);

return 0;
}

// function to determine the median
float median (int n, int ar[]) {

    sort(n, ar);

    if (n % 2 == 0) {
        return (ar[n / 2] + ar[(n / 2) + 1]) / 2.0;
    }
    else {
        return ar[(n + 1) / 2];
    }
}

// function to sort the array
void sort (int n, int ar[]) {

    for (int i = 1; i <= n; i++) {
        int mn = ar[i], mnIndex = i;
        for (int j = i; j <= n; j++) {
            if (ar[j] < mn) {
                mn = ar[j];
                mnIndex = j;
            }
        }

        ar[mnIndex] = ar[i];
        ar[i] = mn;
    }
}


