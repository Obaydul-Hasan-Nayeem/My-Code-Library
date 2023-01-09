/*
WAP that takes a string as input,
and shifts all the characters in the even
indexed position by the following rule.

‘a’ becomes ‘b’
‘b’ becomes  ‘c’
…
‘z’ becomes  ‘a’


Sample input
abcdefg

Sample input
bbddffh

Sample output
zfth

Sample output
afuh
*/


#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i+=2) {
        int asc = s[i];
        if(asc == 122) {
            s[i] = 'a';
        }
        else {
            s[i] = asc+1;
        }
    }

    cout << s << "\n";

    return 0;
}
