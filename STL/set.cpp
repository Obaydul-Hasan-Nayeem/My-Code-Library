/*
    <> Conditions:
        i. sorted order
        ii. distinct value / not duplication of value

    <> Operations:
            > insert() | O(log n)
            > size() | O(1)
            > erase() | O(log n)
            > find() -> return the iterator of the memory location of the element | O(log n)
                if(st.find(6) != st.end())
                    cout << "found\n";
                else
                    cout << "not found\n";
            > print | O(1)

        [Above all, n = number of elements currently in the set]

*/


#include <bits/stdc++.h>

using namespace std;

int main() {

    set<int> st;
    // O(logn)
    st.insert(6);
    st.insert(2);
    st.insert(8);
    st.insert(2);

    // O(n)
    for(auto it: st) {
        cout << it << " ";
    }
    cout << "\n";

    // O(n): Another way to print
//    for(auto it = st.begin(); it != st.end(); it++) {
//        cout << *it << " ";
//    }
//    cout << "\n";

    // O(1)
    cout << st.size() << "\n";

return 0;
}
