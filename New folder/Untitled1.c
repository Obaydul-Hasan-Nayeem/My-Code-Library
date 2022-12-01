/// Problem:
/*
Update the following code such that it swaps the contents of two two variables. 
You can only write code inside the two comments. Do not modify anything else. 
The printf function is supposed to print “13 and 5”. So basically the value must be swapped but you can not assign 13 directly to a and 5 directly to b. 
You can not use other numbers as well. But you can declare an extra variable if you need.

int a=5, b=13;
//Write code here
//End of code
printf(“%d and %d” , a, b);
*/

/// Solution:
int a=5, b=13;

int temp = 5; // declared an extra variable
a = 13;
b = temp;

printf(“%d and %d” , a, b); // It will print “13 and 5”
