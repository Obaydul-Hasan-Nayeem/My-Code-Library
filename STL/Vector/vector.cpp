/*
Frequent Functions:
    size() -> size of the vector
    push_back() -> add a value on the last index
    pop_back() -> remove the value of the last index
    back() -> return the last element
    front() -> return the first element
    clear() -> clear / remove all the elements
    empty() -> return 1 if there is no element
    resize() -> to resize / redeclare / increase the size of the vector
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

//    vector<int> v;
    vector<int> v(n);
    //v.resize(10);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
//       int input;
//       cin >> input;
//       v.push_back(input);
    }

    int sz = v.size();

    cout << "\nThe Given Array:" << "\n";
    for(int i = 0; i < sz; i++) {
        cout << v[i] << " ";
    }

    v.pop_back();
    sz = v.size();
    cout << "\n\nThe Given Array after 1 pop:" << "\n";
    for(int i = 0; i < sz; i++) {
        cout << v[i] << " ";
    }

    cout << "\n\nLast Element: " << v.back() << "\n";
    cout << "\nFirst Element: " << v.front() << "\n";

    v.clear();
    sz = v.size();
    cout << "\nSize after cleared: " << sz << "\n";

    cout << "\nIs empty? " v.empty();

    return 0;
}
