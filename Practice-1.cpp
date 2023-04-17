#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string s) {
    int n = s.size();
    int l = 0, r = n-1;
    while(l < r) {
        if(s[l] != s[r]) {
            return false;
            break;
        }
        l++;
        r--;
    }
}

int main() {

    string s;
    cin >> s;

    cout << is_palindrome(s);

    return 0;
}
