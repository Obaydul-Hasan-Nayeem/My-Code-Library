/*
    [{()}] -> valid
    {[(])} -> invalid
    {()}[][ -> invalid

*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    string str;
    cin >> str;

    stack<char> stk;
    for(int i = 0; i < str.size(); i++) {
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '[') {
                stk.push(ch);
           }
        else {
            if(stk.empty()) {
                cout << "Invalid\n";
                return 0;
            }
            else if(ch == ')' && stk.top() == '(') {
                stk.pop();
            }
            else if(ch == '}' && stk.top() == '{') {
                stk.pop();
            }
            else if(ch == ']' && stk.top() == '[') {
                stk.pop();
            }
            else {
                cout << "iInvalid\n";
                return 0;
            }
        }
    }

    if(stk.empty()) {
        cout << "Valid\n";
    }
    else {
        cout << "Invalid\n";
    }

return 0;
}
