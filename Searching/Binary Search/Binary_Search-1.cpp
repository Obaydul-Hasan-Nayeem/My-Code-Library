/*
    Time Complexity:
        sort -> n*logn (built in)
        binary search = logn
        So, O(n*logn) + O(logn)
            = O(n*logn)
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector <int> v(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    sort(v.begin()+1, v.end()); // nlogn

    bool ans = false;

    int left = 1, right = n;

    while(left <= right) { // logn

        int mid = (left + right) / 2;

        if (v[mid] == k) {
            cout << "\nThe Sorted Array: ";
            for(int i = 1; i <= n; i++) {
                cout << v[i] << " ";
            }
            cout << "\nYES! " << k << " is available on the " << mid << "-th position.\n";
            ans = true;
            break;
        }
        else if(k < v[mid]) {
            right = mid - 1;
        }
        else {
            // k > v[mid]
            left = mid + 1;
        }
    }

    if(!ans) {
        cout << k << " is not available int the array.\n";
    }

return 0;
}

/*
5
6
3 6 -7 3 9

*/
