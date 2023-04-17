#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    // base case
    if(n == 0) return 0;
    if(n == 1) return 1;

    // general case
    return factorial(n - 1) + factorial(n - 2);
}

int main() {

int n;
cin >> n;

cout << factorial(n) << "\n";

return 0;
}
