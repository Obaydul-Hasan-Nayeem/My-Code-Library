/*
Problem:
WAP that takes 2 sorted (in non-increasing order) integer arrays as input,
then merges the two arrays into one array sorted in non-increasing order in O(n+m).

Sample input 1:
4
5 3 2 1
5
7 6 3 2 1

Sample output:
7 6 5 3 3 2 2 1 1

Sample input 2:
5
6 4 3 2 1
3
6 4 0
Sample output 2:
6 6 4 4 3 2 1 0
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

 int n1;
 cin >> n1;

 vector<int> v1(n1);
 for(int i = 0; i < n1; i++) {
    cin >> v1[i];
 }

 int n2;
 cin >> n2;

 vector<int> v2(n2);
 for(int i = 0; i < n2; i++) {
    cin >> v2[i];
 }

 int len = n1 + n2;
 vector<int> sorted(len);

 int idx1 = 0, idx2 = 0;
 for(int i = 0; i < len; i++) {
    if(idx1 == v1.size()) {
        sorted[i] = v2[idx2];
        idx2++;
    }
    else if(idx2 == v2.size()) {
        sorted[i] = v1[idx1];
        idx1++;
    }
    else if(v1[idx1] > v2[idx2]) {
        sorted[i] = v1[idx1];
        idx1++;
    }
    else {
        sorted[i] = v2[idx2];
        idx2++;
    }
 }

 for(int i = 0; i < len; i++) {
    cout << sorted[i] << " ";
 }

return 0;
}


