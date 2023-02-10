/*
(Variable Complexity)
    #Time Complexity: O(n + n^2) = O(n^2)
        i = 0 --> inner loop n times
        i = 1 --> inner loop n times
        i = 2 --> inner loop n times
        i = 3 --> inner loop n times
        i = n - 1 --> inner loop n times

        So, n * n = n^2

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

        for (int j = 0; j < n; j++)
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

