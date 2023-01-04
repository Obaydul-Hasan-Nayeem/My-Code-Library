#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector <int> v(n);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int low = 1, high = n;
    while(low <= high) {
        int mid = (low + high) / 2;
        if (v[mid] == k) {
            cout << "YES " << mid << "\n";
            break;
        }
        if(k < v[mid]) {
            high = mid - 1;
        }
        else {
            // k > v[mid]
            low = mid + 1;
        }
    }

    cout << "NO\n";


return 0;
}
