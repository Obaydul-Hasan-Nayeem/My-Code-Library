/// Problem Statement:
/*
Consider the following code.
char a[10];
		char ch = ‘a’;
		for(int i = 0; i<8;i++)
		{
			a[i] = ch+8-i;
		}
		a[8] = ‘\0’;
What will be stored in the given character array ‘a’ of the question after the execution of the block of code?    (10)

*/

/// My Solution
After the execution of the block of code, the array ‘a’ will be stored with the  characters: i, h, g, f, e, d, c, b

Explanation:
The for loop will be executed 8 times.
1st execution:
ar[i] = ch + 8 - i;
ar[0] = ch + 8 - 0;
ar[0] = 97 + 8 - 0; // The variable ch is declared with a. The ASCII                         code of ‘a’ is 97.
ar[0] = 105;
ar[0] = ‘i’;  // The ASCII value of 105 is lowercase ‘i’

2nd execution:
ar[i] = ch + 8 - i;
ar[1] = ch + 8 - 1;
ar[1] = 97 + 8 - 1;
ar[1] = 104;
ar[1] = ‘h’;  // The ASCII value of 105 is lowercase ‘h’

The 3rd, 4th, 5th, 6th & 7th execution of the loop will be continued like above.
That means,
ar[2] = ‘g’;
ar[3] = ‘f’;
ar[4] = ‘e’;
ar[5] = ‘d’;
ar[6] = ‘c’;
ar[7] = ‘b’;

The index ar[8] will be assigned a null (\0) value.

So, the final output will be: ihgfedcb



