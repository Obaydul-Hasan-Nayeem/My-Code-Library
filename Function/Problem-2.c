// Problem:
/*
int i=0;
while(i<10)
{
	printf(“I am inside the loop”);
}
What is wrong with this block of C code? Mark the errors and fix them.
*/


// Solution:
Marking the errors below:
> On the 1st line, the value of the variable ‘i’ is not changing from (i = 0). For this reason, the loop has become an infinite loop.
> On the 4th line, the inverted commas (“ ”) aren't written like C syntax (" ").
> On the 4th line, We should use a backslash n (\n) after the word - ‘loop’.

Fixing the errors below:
int i=0;
while(i<10)
{
	printf("I am inside the loop\n");
	i++;
}

