/*
5
3 1 6 4 7

    3, 1, 6, 4, 7
    3 -> 3
    2 -> 1, 3
    6 -> 1, 3, 6
    4 -> 1, 3, 4, 6
    7 -> 1, 3, 4, 6, 7


#Time Complexity: O(n^2)
    = O(1 + 2 + 3 + .... + n)
    = O(n^2)

#Memory Complexity: O(n)
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector <int> v(n);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    for(int i = 2; i <= n; i++) {
        int idx = i;
        while(idx >= 2) {
            if(v[idx] < v[idx - 1]) {
                swap(v[idx], v[idx - 1]);
                idx--;
            }
            else {
                break;
            }
        }

        cout << "Considering index " << i << ": ";
        for(int i = 1; i <= n; i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    cout << "\nAfter Sorting: ";
    for(int i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }

    cout << "\n";

return 0;
}
