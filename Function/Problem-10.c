// Problem:
/*

*/


// Solution:
#include<stdio.h>

char determine_grade (int marks); // function prototype

// driver code
int main () {
    int marks;
    printf("Enter Your Obtained Marks:\n");
    scanf("%d", &marks);

    char grade = determine_grade(marks);

    printf("\nYour Grade is %c.\n", grade);
}

// function to determine the grade
char determine_grade (int marks) {
    if (marks >= 80 && marks <= 100) {
        return 'A';
    }
    else if (marks >= 60 && marks <= 79) {
        return 'B';
    }
    else if (marks >= 40 && marks <= 59) {
        return 'C';
    }
    else if (marks >= 0 && marks <= 39) {
        return 'F';
    }
}
