/// Problem Statement:
/*
To declare a string, Fahim uses the following code. What will happen in the second and the third statement. Explain.	(10)
	char a[10];
	a[0] = 98;
	a[1] = 97;
	a[2] = 'n';
	a[3] = 'a';
	a[4] = 'n';
	a[5] = 'a';
	a[6] = ‘\0’;

*/

/// My Solution
Explaining below about the 2nd and 3rd statement:
About 2nd Statement:
The statement is:             a[0] = 98;
Here, Fahim assigned the integer value 98 in the 0 numbered index of the character type array a[10]. But this integer value will be considered as an ASCII value.
According to ASCII values, 98 = b
So, the character ‘b’ will be assigned in the index.
That means, if we print the index a[0], the output will be: b

About 3rd Statement:
The statement is:             a[1] = 97;
Here, Fahim assigned the integer value 97 in the 1 numbered index of the character type array a[10]. But this integer value will be considered as an ASCII value.
According to ASCII values, 97 = a
So, the character ‘a’ will be assigned in the index.
That means, if we print the index a[0], the output will be: a

So, the array a[10] will be assigned by: banana





