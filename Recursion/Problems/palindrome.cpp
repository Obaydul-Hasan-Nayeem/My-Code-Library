#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s) {
    if (s == "" || s.size() == 1) {
        return true;
    }

    int n = s.size();
    string smaller_s = s.substr(1, n-2);
    return is_palindrome(smaller_s) && (s[0] == s.back());
}

/// without recursion:
//bool is_palindrome(string s) {
//    int n = s.size();
//    int l = 0, r = n-1;
//    while(l < r) {
//        if(s[l] != s[r]) {
//            return false;
//            break;
//        }
//        l++;
//        r--;
//    }
//}

int main() {

    string s;
    cin >> s;

    if(is_palindrome(s)) cout << "YES\n";
    else cout << "NO\n";

return 0;
}
