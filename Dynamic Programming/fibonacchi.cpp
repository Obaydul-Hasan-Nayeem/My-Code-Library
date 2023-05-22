/*
    Time Complexity: O(2^n) [Recursive way]
        Explanation:
            In binary tree of fib, total num of operations:
            2^0 + 2^1 + 2^2 + 2^3 + ... + 2^n
            = 2^n + 1
            = O(2^n)
*/

#include <bits/stdc++.h>

using namespace std;

int fib(int n) {
    if(n <= 2) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {

    cout << fib(50) << "\n";
    cout << fib(5) << "\n";

return 0;
}

/*
    1, 1, 2, 3, 5, 8, 13
*/
