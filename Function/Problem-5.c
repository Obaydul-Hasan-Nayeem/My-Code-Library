// Problem:
/*
Assume that you have a function named add_three_nums() which will take three numbers as arguments. The description of the function is also given here.
Just copy it and paste it in your code.
int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}
Now, write a C program where you will take only two inputs and add those two numbers using this function.
You can add them directly using the + operator. You must use this function to add them, but the challenge is you are only given two inputs.

*/


// Solution:
#include<stdio.h>

int add_three_nums(int a, int b, int c); // function prototype

// driver code
int main () {

    int a, b;
    scanf("%d%d", &a, &b);

    int sum = add_three_nums(a, b, 0);
    printf("The Sum of %d and %d is: %d\n", a, b, sum);

return 0;
}

// the given function
int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}

