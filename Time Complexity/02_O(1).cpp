/*
Constant Complexity
    Time Complexity: O(1)
    Memory Complexity: O(1)
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int mx = max({a, b, c});
    int mn = min({a, b, c});
    int sum = a + b + c;
    int mul = a * b * c;

    cout << mx << "\n";
    cout << mn << "\n";
    cout << sum << "\n";
    cout << mul << "\n";

return 0;
}
