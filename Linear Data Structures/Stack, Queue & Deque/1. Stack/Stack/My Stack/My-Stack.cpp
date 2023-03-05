#include <bits/stdc++.h>
#include "My-Stack.h"

using namespace std;

int main() {

Stack st;
st.PUSH(10);
st.PUSH(20);
st.PUSH(30);
st.PUSH(40);
st.POP();
st.PUSH(50);
st.PUSH(60);
st.PUSH(70);
cout << st.TOP() << "\n";
cout << st.TOP() << "\n";
cout << st.EMPTY() << "\n";
cout << st.SIZE() << "\n";

while(st.EMPTY() == false) {
    cout << st.TOP() << " ";
    st.POP();
}

}

