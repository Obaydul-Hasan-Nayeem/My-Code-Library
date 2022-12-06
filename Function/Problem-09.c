// Problem:
/*
Write a C program that will take a 3x3 matrix as input and then print the transpose of that matrix.
For hints see this link (https://www.cuemath.com/algebra/transpose-of-a-matrix/).
*/


// Solution:
#include<stdio.h>

void take_matrix (int ar[3+1][3+1]); // function prototype
void print_matrix (int ar[3+1][3+1]); // function prototype

// driver code
int main() {

    int ar[3+1][3+1];
    printf("Enter the elements of a 3x3 matrix:\n");
    take_matrix(ar);

    printf("\nThe taken matrix is:\n");
    print_matrix(ar);

    printf("\nThe transpose of the matrix is:\n");
    transpose(ar);
    print_matrix(ar);

    return 0;
}

// function to take the matrix
void take_matrix (int ar[3+1][3+1]) {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            scanf("%d", &ar[i][j]);
        }
    }
}

// function to transpose the matrix
void transpose (int ar[3+1][3+1]) {
    int ar2[3+1][3+1];
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            ar2[i][j] = ar[j][i];
        }
    }

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            ar[i][j] = ar2[i][j];
        }
    }
}

// function to print the matrix
void print_matrix (int ar[3+1][3+1]) {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}


