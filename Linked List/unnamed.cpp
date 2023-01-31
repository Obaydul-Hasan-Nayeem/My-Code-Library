/*
push() ->
push_back()
push_front()
back() -> last element
front() -> front element
pop_front()
pop_back()
sort()

*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(30);
    l.push_back(40);

    l.sort();
//    l.sort(greater<int>());

    for(auto it=l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";
    cout << l.back() << "\n";
}
