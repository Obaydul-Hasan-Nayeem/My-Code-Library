/// Problem Statement
/*
Update the following code so that the values in array b is �x� more than the corresponding values in array a.
You can only write only one line of code inside the loop (in the comment section marked �Write Code Here�). Do not modify anything else.                     (10)
int n = 10;
int x = 5;
int index = 0;
int a[] = {12, 7, 3, 71, 2, 43, 38, 23, 45, 22};
int b[n];
for (int i=0; i<n; i++) {
	//Write Code Here
}
*/

/// My Solution:
int n = 10;
int x = 5;
int index = 0;
int a[] = {12, 7, 3, 71, 2, 43, 38, 23, 45, 22};
int b[n];
for (int i=0; i<n; i++) {
	b[i] = a[i] + 5;
}

/// Problem Setter's Solution:
int n = 10;
int x = 5;
int index = 0;
int a[] = {12, 7, 3, 71, 2, 43, 38, 23, 45, 22};
int b[n];
for (int i=0; i<n; i++) {
	//Write Code Here
     b[i] = a[i] + x;
}
