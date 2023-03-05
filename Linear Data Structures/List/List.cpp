/*
    push_front() -> O(1)

*/

#include <bits/stdc++.h>

using namespace std;

void print(list<int> l) { //O(n)
    //list<int>::iterator a = l.begin();
    auto a = l.begin();
    while(a != l.end()) {
        cout << *a << " ";
        a++;
    }
}

int main() {

    list<int> l;
    l.push_front(5); // O(1)
    l.push_front(6);
    l.push_front(7);

    print(l);

    return 0;
}
