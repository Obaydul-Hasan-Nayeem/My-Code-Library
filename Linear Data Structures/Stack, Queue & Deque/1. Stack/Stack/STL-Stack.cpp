/*
    push() -> insert at the top
    pop() -> remove the top element
    top() -> access the top element

    empty() -> 1 or true: no element, 0 or false: element available
*/


#include <bits/stdc++.h>

using namespace std;

int main() {

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    if(st.empty() == false) {
        st.pop();
    }

    cout << st.top() << "\n";

    // print all the elements
    while(st.empty() == false) {
        cout << st.top() << " ";
        st.pop();
    }

return 0;
}
