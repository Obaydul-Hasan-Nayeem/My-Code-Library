#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s = "";

        for(int i = 1; i <= 2*n-2; i++)
        {
            string sub;
            cin >> sub;

            if (s.find(sub) != string::npos)
            {
                s = s;
            }
            else
            {
                if(sub[0] > s[0])
                {
                    s = s + sub;
                }
                else
                {
                    s = sub + s;
                }
            }
        }

        cout << s << "\n";

        bool is_palindrome = equal(s.begin(), s.begin() + s.size()/2, s.rbegin());

        if(is_palindrome)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
