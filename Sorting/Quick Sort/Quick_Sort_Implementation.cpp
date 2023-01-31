/*
    - Quick Sort is a Divide and Conquer algorithm
    - It uses recursion

    Divide:
        1. Pivot Choose
        2. All elements <= pivot
        3. All elements > pivot

    Conquer:
        sorted array + pivot + sorted array

    # Time Complexity:
        Worst Case: O(n^2)
        Best Case: O(nlogn)
        Average Case: O(nlogn)


    # Discussion:
      > For better time complexity: O(n^2) to ~ O(nlogn)
          pivot last index nile worst case O(n^2) hobe
          Solutio-1: Have to choose the pivot randomly
          Solution-2: pivot will be last index. but have to random suffle the elements before pivot

       Solution-1:
            If I choose a random pivot, in the maximum case,
            left -> 25% or of the elements ~ n/4 = (3^0/4^0)*n
            right -> 75% of the elements ~ 3n/4 = (3^1/4^1)*n
            [According to the advanced probability rules]

            So, (3^k/4^k)*n = 1
               => 3^k * n = 4^k
               => n = (4/3)^k
               => k = log(4/3)(n) [n = a^b; => b = loga(n)]

*/

#include <bits/stdc++.h>

using namespace std;

// function to quick sort
vector<int> quick_sort(vector<int>v) { // or: &v
    if(v.size() <= 1) { // base case
        return v;
    }

   // int pivot = v.size() - 1;
    int pivot = rand() % v.size(); // for better time complexity: solution-1

    vector<int> a, b; // to divide

    // O(n): dividing the v vector and putting into a and b vector
    for(int i = 0; i < v.size(); i++) {
        if(i == pivot) { // pivot element will not be put.
            continue;
        }
        if(v[i] < v[pivot]) {
            a.push_back(v[i]);
        }
        else {
            b.push_back(v[i]);
        }
    }

    // sorting the divided vectors by recursion
    vector<int> sorted_a = quick_sort(a);
    vector<int> sorted_b = quick_sort(b);

    vector<int> sorted_v; // to merge the divided vectors

    // O(n): merging the divided vectors: sorted array + pivot + sorted array
    for(int i = 0; i < a.size(); i++) {
        sorted_v.push_back(sorted_a[i]);
    }

    sorted_v.push_back(v[pivot]);

    for(int i = 0; i < b.size(); i++) {
        sorted_v.push_back(sorted_b[i]);
    }

    return sorted_v;
}

// driver code
int main() {

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> ans = quick_sort(v);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

return 0;
}


/*

*/
