/*
    infix expression:  agee operand, pore operator
    example: a+b

    postfix expression: agee operator, pore operand
    example: ab++

    # computer infix k postfix e convert kore tarpor kono kichu evaluate kore.
    # operator er precedence onushare check kore. jemon * > +

    example: infix to postfix
    a+b*c+d = abc*+d+ -> (at1+d+ = t2d+ = t3)
*/

// Characters: a-z , + , - , * , /
#include <bits/stdc++.h>

using namespace std;

int precedence(char ch) {
    if(ch == '+' || ch == '-') {
        return 0;
    }
    // or
    return 1;
}

int main() {
    string str;
    cin >> str;

    string ans = "";
    stack<char> stk;
    for(int i = 0; i < str.size(); i++) {
        char ch = str[i];

        if(ch >= 'a' && ch <= 'z') {
            ans += ch;
        }

        else {
            while(stk.size() && precedence(stk.top()) > precedence(ch)) {
                ans += stk.top();
                stk.pop();
            }

            stk.push(ch);
        }
    }

    while(stk.size()) {
        ans += stk.top();
        stk.pop();
    }

    cout << ans << "\n";

return 0;
}


