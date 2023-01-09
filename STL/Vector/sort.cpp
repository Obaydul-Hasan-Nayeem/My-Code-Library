#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
            cin >> v[i];
    }

    sort(v.begin(), v.end());
//     sort(v.rbegin(), v.rend()); // sort in reverse order
//     sort(v.begin(), v.end(), greater<int>()); // another way to sort in reverse order

    for(int val: v) {
        cout << val << " ";
    }

return 0;
}

