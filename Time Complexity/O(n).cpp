/*
(Variable Complexity)
    #Time Complexity:
        O(n + 1 + n)
        = O(2*n + 1)
        = O(2*n)
        = O(c*n)
        = O(n)
        Here, n dominates others

    #Memory Complexity: O(n)
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> v(n);
    //v.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int mx = v[0], mn = v[0], sum = 0;
    for (int i = 0; i < n; i++) {
        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
        sum += v[i];
    }

    cout << mx << "\n";
    cout << mn << "\n";
    cout << sum << "\n";

return 0;
}

