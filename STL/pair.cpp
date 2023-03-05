/*
<> Basic Info:
    - built by structure

<> Syntaxes:
    pair<dataType, dataType> variable;

    Examples:
        pair<string, int> p;
            p.first = "abc", p.second = 3; // or, p = {"abc", 3};

        pair<pair<string, string>, int>
            p.first.first = "Obaydul Hasan";
            p.first.second = "Nayeem";
            p.second = 5;
            // or, p = {{"Obaydul Hasan", "Nayeem"}, 5};

*/
#include <bits/stdc++.h>

using namespace std;

int main() {
/*
    pair<string, int> p;
    p.first = "abc";
    p.second = 25;
    //or, p = {"abc", 25};
    cout << p.first << " "  << p.second << "\n";
*/


/*
    pair<pair<string, string>, int> p2;
    //p2.first.first = "Obaydul Hasan";
   // p2.first.second = "Nayeem";
   // p2.second = 23;
    p2={{"Obaydul Hasan", "Nayeem"}, 23};

    cout << p2.first.first << " " << p2.first.second << " " << p2.second << "\n";
*/


/*
    int n;
    cin >> n;

    vector< pair<string, int> > v;

    for(int i = 1; i <= n; i++) {
        string name;
        int age;
        cin >> name >> age;
        v.push_back({name, age});
    }

    for(int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
*/

return 0;
}
