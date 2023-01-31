/*
- Merge Sort is a divide and conquer algorithm.
- It is the best algorithm as efficiency.
- It uses recursion.
- C++ sort function is built by merge sort.

# Time Complexity:
    every divide = log2(n)
    every conquer = n
    So, O(n*log2(n))

*/



#include <bits/stdc++.h>

using namespace std;

// function to merge sort
vector<int> merge_sort(vector<int> v) {
    if(v.size() <= 1) {
        return v;
    }

    int mid = v.size() / 2;
    vector<int> a;
    vector<int> b;

    // dividing the array and inserting the 1st part into a vector
    for(int i = 0; i < mid; i++) {
        a.push_back(v[i]);
    }

    // dividing the array and inserting the 2nd part into b vector
    for(int i = mid; i < v.size(); i++) {
        b.push_back(v[i]);
    }

    // sorting the divided arrays
    vector<int> sorted_a = merge_sort(a);
    vector<int> sorted_b = merge_sort(b);

    vector<int> sorted_v; //to merge the divided arrays
    int idx1 = 0;
    int idx2 = 0;

    // merging the two divided array
    for(int i = 0; i < v.size(); i++) {
        if(idx1 == sorted_a.size()) { // Let, corner case: a = 1, 2 | b = 5, 6
            sorted_v.push_back(sorted_b[idx2]);
            idx2++;
        }

        else if(idx2 == sorted_b.size()) { // corner case: Let, a = 1, 2 | b = 5, 6
            sorted_v.push_back(sorted_a[idx1]);
            idx1++;
        }

        else if(sorted_a[idx1] < sorted_b[idx2]) {
            sorted_v.push_back(sorted_a[idx1]);
            idx1++;
        }

        else {
            sorted_v.push_back(sorted_b[idx2]);
            idx2++;
        }
    }
    return sorted_v;
}

// driver code
int main() {

    vector<int> v = {4, 2, 6, 0, 3, -6};
    vector<int> ans = merge_sort(v);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

return 0;
}

