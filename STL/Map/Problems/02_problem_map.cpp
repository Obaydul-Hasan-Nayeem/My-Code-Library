/*
    input:
    bcddaae

    output:
    a 4 5
    b 0
    c 1
    d 2 3
    e 6
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, vector<int>> mp;

    for(int i = 0; i < s.size(); i++) {
        mp[s[i]].push_back(i);
    }

    for(auto it: mp) {
        char ch = it.first;
        vector<int> v = it.second;

        cout << ch << " ";
        for(auto val: v) {
            cout << val << " ";
        }
        cout << "\n";
    }

return 0;
}
