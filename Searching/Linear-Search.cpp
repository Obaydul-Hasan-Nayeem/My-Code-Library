/*
    Time Complexity: O(n)
    Memory Complexity: O(n)
*/


#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector <int> v(n);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++) {
        if (v[i] == k) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";

return 0;
}
