/*
    characters:  a-z , + , - , * , / , ( , )
*/

#include <bits/stdc++.h>

using namespace std;

int precedence(char ch) {
    if(ch == '+' || ch == '-') {
        return 0;
    }
    else if(ch == '*' || ch == '/') {
        return 1;
    }
    return -1;
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

        else if(ch == '(') {
            stk.push(ch);
        }

        else if(ch == ')') {
            while(stk.size() && stk.top() != '(') {
                ans += stk.top();
                stk.pop();
            }
            stk.pop();
        }

        else {
            while(stk.size() && precedence(stk.top()) >= precedence(ch)) {
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
