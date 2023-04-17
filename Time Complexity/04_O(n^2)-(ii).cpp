/*
(Variable Complexity)
    #Time Complexity:
        i = 0 --> inner loop -> 1 to n-1 -> n-1 times
        i = 1 --> inner loop -> 2 to n-1 -> n-2 times
        i = 2 --> inner loop -> 3 to n-1 -> n-3 times
        i = 3 --> inner loop -> 4 to n-1 -> n-4 times
        i = n-1 --> inner loop -> 0 -> 0 times

        = (n-1) + (n-2) + (n-3) + ... + 2 + 1 + 0
        = ((n-1)*n)/2

        So,  O(n + ((n-1)*n)/2)
            = O(n + (n^2 - n)/2)
            = O(n + (n^2/2 - n/2))
            = O((n^2/2 - n/2))
            = O(n^2/2)
            = O(n^2)

    #Memory Complexity: O(n)
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        string ans = "NO\n";

        for (int j = i+1; j < n; j++)
        {
            if (i == j) continue;

            if (v[i] == v[j])
            {
                ans = "YES\n";
            }
        }
        cout << "i = " << i << " " << ans << "\n";
    }

    return 0;
}

