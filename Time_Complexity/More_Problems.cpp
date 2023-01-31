-----------------------------------
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j = j + i) {
        cout << i << " " << j << " ";
    }
}

/*
   Time Complexity: O(nlogn)

   Explanation:
            n + n/2 + n/3 + ... + n/n
        =   n(1 + 1/2 + 1/3 + ... + 1/n)
        =   n log n [Harmonic Series]



*/


-----------------------------------
// fibonacci series O(n^2)
    int fib(int n) {
        if(n <= 1) {
            return n;
        }
        return fib(n-1) + fib(n+2);
    }

/*
   Time Complexity: O(2^n)

   Explanation:
        fib(0) = 1 operation
        fib(1) = 1
        fib(2) = 3
        fib(3) = 5
        fib(4) = 9
        fib(5) = 15
        fib(6) = 25
        fib(7) = 41
    sob gulo motamoti digun porimane barteche. tai complexity = O(2^n)
*/

-----------------------------------

int k=1;
while(k<=n){ // logn
	cout<<k<<endl;
	k=k*2;
}

/*
Time Complexity: O(logn)
if n = 8;
k = 1, 2, 4 -> 3 times
log(8) = 3

if n = 16;
k = 1, 2, 4, 8 -> 4 times
log(16) = 4
*/

-----------------------------------
for (int i = 0; i < n; i++) // n
        for (int j = i; j > 0; j--) // max n
            cout << i << j;

/*
   Time Complexity: O(n^2)

   Explanation:
        outer loop = n
        inner loop = n (max)
        So, O(n*n) = O(n^2)
*/

-----------------------------------
for (int i = 0; i < n; i++) //n
        for (int j = i; j > 0; j--) // max n
            for(int k=j; k > 0; k--) // max n
                cout << i << j << k;

/*
   Time Complexity: O(n^3)

   Explanation:
        outer loop = n
        2nd for loop = n (max)
        3rd for loop = n (max)
    So, O(n*n*n) = O(n^3)

*/
-----------------------------------

for(int i=n/2;i<=n;i++){ // n/2
	for(int j=1;j<=n;j=j*2){ // logn
   		cout<<i<<j<<endl;
	}
}

/*
   Time Complexity: O(nlogn)

   Explanation:
        outer loop: n/2 ~ n
        inner loop: logn
        So, O(n * logn)
            = O(nlogn)

*/
-----------------------------------

for(int i=n/2;i<=n;i++){ // n/2 ~ n
	for(int j=1;j<=n;j=j+i){ // 1
   		cout<<i<<j<<endl;
	}
}

/*
   Time Complexity: O(n)

   Explanation:
        outer loop: n/2 ~ n
        inner loop: 1
        So, O(n) + O(1)
            = O(n)


*/
-----------------------------------

for(int i=1;i<=n;i++) // n
{
	if(builtin_popcount(i) == 1) // 1
	{
		for(int j=1;j<=n;j++) // n
			cout<<i<<j<<endl;
	}
}
Note: builtin_popcount(i) returns the number of set bits in 'i'.
For example, builtin_popcount(5) = 2. Because, 5 = (101)2. So there are 2 set bits in 5.

/*
   Time Complexity: O(n)

   Explanation:
           outer loop: n
           inner loop: n ~ 1
           So, O(n + 1) = O(n)

      Details: The outer for loop has a complexity of O(n) because it will execute n times. The inner for loop also has a complexity of O(n) because it will execute n times for each iteration of the outer loop. The function builtin_popcount has a time complexity of O(1) because it will execute a constant number of times. Therefore, the overall complexity is O(n * n) = O(n^2). However, since the inner loop will only execute for a small fraction of the total iterations of the outer loop (specifically, for the iterations where builtin_popcount(i) == 1), the overall time complexity can be considered O(n).

*/
-----------------------------------


