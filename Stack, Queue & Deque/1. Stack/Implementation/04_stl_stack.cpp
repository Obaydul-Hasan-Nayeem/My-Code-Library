/*
    push() O(1)
    pop() O(1)
    top() O(1)
    size() O(1)
    empty() O(1)
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    stack<int> st;
    st.push(5);
    st.push(6);
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";

    cout << st.size() << "\n";
return 0;
}
