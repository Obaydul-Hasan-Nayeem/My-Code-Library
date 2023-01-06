/*
5
6 -7 2 9 0

    pass-1:
                      6, -7, 2, 9, 0
            i = 1 --> -7, 6, 2, 9, 0
            i = 2 --> -7, 2, 6, 9, 0
            i = 3 --> -7, 2, 6, 9, 0
            i = 4 --> -7, 2, 6, 0, 9

    pass-2:
            i = 1 --> -7, 2, 6, 0, 9
            i = 2 --> -7, 2, 6, 0, 9
            i = 3 --> -7, 2, 0, 6, 9
            // i = 4 --> -7, 2, 0, 6, 9

    pass-3:
            i = 1 --> -7, 2, 0, 6, 9
            i = 2 --> -7, 0, 2, 6, 9
            // i = 3 --> -7, 0, 2, 6, 9
            // i = 4 --> -7, 0, 2, 6, 9

    pass-4:
            i = 1 --> -7, 2, 0, 6, 9
            //i = 2 --> -7, 0, 2, 6, 9
            //i = 3 --> -7, 0, 2, 6, 9
            //i = 4 --> -7, 0, 2, 6, 9


    # Time Complexity:
        pass = 1, count = n - 1
        pass = 2, count = n - 2
        pass = 3, count = n - 3
        ...
        pass = n - 1, count = 0

        So, Sum = ((n-1) + (n-2) + (n-3) + ... + 0)
                = (n*(n-1))/2
                = (n^2 - n) / 2
                = n^2/2 - n/2
                = n^2/2
                = n^2 [n^2 is dominating others]
        So, time complexity = O(n^2)

    # Memory Complexity: O(n)

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

    for(int pass = 1; pass <= n; pass++) {
        int last = n - pass;
        bool sorted = false; // more efficient
        cout << "pass = " << pass << ": \n";
        for(int i = 1; i <= last; i++) {
            if(v[i] > v[i+1]) {
                swap(v[i], v[i+1]);
                sorted = true;
            }
            cout << "i = " << i << ": ";
            for(int i = 1; i <= n; i++) {
                cout << v[i] << " ";
            }
            cout << endl;
            if(sorted) break;
        }
        cout << endl;
    }

    cout << endl;

    cout << "The Sorted Array: \n";
    for(int i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }

return 0;
}

