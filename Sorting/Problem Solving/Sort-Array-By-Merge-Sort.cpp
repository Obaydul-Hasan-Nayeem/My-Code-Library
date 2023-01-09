/*
Problem:
WAP that takes n integer numbers, sorts them using Merge sort.

Sample input 1:
5
6  2  3  3  5

Sample output 1:
2 3 3 5 6

Sample input 2:
6
5 6 7 8 0 1

Sample output 2:
0 1 5 6 7 8
*/

// my code
#include <bits/stdc++.h>

using namespace std;

vector<int> merge_sort(vector<int> v)
{
    if(v.size() <= 1) {
    return v;
    }

    int mid = v.size()/2;

    vector<int> a;
    vector<int> b;

    for(int i = 0; i < mid; i++)
    {
        a.push_back(v[i]);
    }

    for(int i = mid; i < v.size(); i++)
    {
        b.push_back(v[i]);
    }

    vector<int> sorted_a = merge_sort(a);
    vector<int> sorted_b = merge_sort(b);

    vector<int> sorted(v.size());
    int idx1 = 0, idx2 = 0;

    for(int i = 0; i < v.size(); i++)
    {
        if(idx1 == a.size())
        {
            sorted[i] = sorted_b[idx2];
            idx2++;
        }

        else if(idx2 == b.size())
        {
            sorted[i] = sorted_a[idx1];
            idx1++;
        }

        else if(sorted_a[idx1] < sorted_b[idx2])
        {
            sorted[i] = sorted_a[idx1];
            idx1++;
        }

        else
        {
            sorted[i] = sorted_b[idx2];
            idx2++;
        }
    }

    return sorted;
}

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> sorted = merge_sort(v);

    for(int i = 0; i < n; i++) {
        cout << sorted[i] << " ";
    }

    return 0;
}



