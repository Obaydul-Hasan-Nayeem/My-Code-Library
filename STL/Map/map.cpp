/*
    <> Basic Info:
        > best solution for frequency array
        > only vector diyeo map er kaj kore neya jay. tarpor o map use kori. karon:
            1. map e key gulo unique thake.
            2. key gulo sorted thake.
            3. max function er time complexity log(n)
            4. onk gulo built in function ache.


    <> Syntax:
        > declaration:
            map<key, value> m;
                examples:
                    map<int, int> m;
                    map<string, string> m;
                    map<int, vector<int>> m;
                    map<int, pair< vector<int>, int> > m;
        > Size | O(1)
            mp.size();

        > Print
            # O(1)
                cout << mp[];

            # O(n)
                for(auto it: mp) {
                    cout << it.first << " " << it.second << "\n";
                }

            # O(n)
                for(pair<int, int> p: mp) {
                    cout << p.first << " " << p.second << "\n";
                }

            # printing inner elements of nested map
                map<string, map<int, int> > mp;
                    for(auto it: mp) {
                        for(auto itt: it.second) {
                            cout << itt.first << itt.second << "\n";
                        }
                    }

        > find()
            if(mp.find(5) != mp.end())
                cout << "available";
            else
                cout << "not available;
*/


#include <bits/stdc++.h>

using namespace std;

int main() {

/*
    map<int, int> mp;

    mp[2] = 6;
    mp[2] = 3;
    mp[5] = 7;
    mp[3] = 1;
    mp[9] = 0;

//    cout << mp[2];

    for(auto it: mp) {
        cout << "key->" << it.first << " -- " << "value->" << it.second << "\n";
    }
*/


/*
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int in;
        cin >> in;
        mp[in]++;
    }

     for(auto it: mp) {
        cout << "key->" << it.first << " -- " << "value->" << it.second << "\n";
    }
*/


return 0;
}
