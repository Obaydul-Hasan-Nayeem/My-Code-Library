// Problem Link: https://atcoder.jp/contests/dp/tasks/dp_b
// Solved by Memorization / recursive method of DP

/*
    1. Define State
        stone(n) = cost of reaching nth stone from 1st stone


    2. Identify the recursive equation for the smaller subproblems
        if n = 8,
            stone(8) = min of,
                            stone(6) + |h8 - h6|
                            stone(7) + |h8 - h7|
                            ....................
                            stone(k) + |h8 - hk|

                So, stone(n) = min of,
                                  stone(n-1) + |h(n) - h(n-1)|
                                  stone(n-2) + |h(n) - h(n-2)|
                                  ............................
                                  stone(n-k) + |h(n) - h(n-k)|
                So,
                    stone(n) = for (i = 1 to k):
                                    min (
                                            stone(n-1) + abs(h[n] - h[n-i])
                                         )

    3. Define base case
            stone(1) = 0

Time Complexity: O(n*k)
Space Complexity: O(n)
*/


#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
const int INF = 2e9;

int h[N];
int dp[N];
int n, k;

int stone(int n) {

    // 1. base case
        if(n == 1) {
            return 0;
        }

    // 2. if answer is already calculated, return it
        if(dp[n] != -1) {
            return dp[n];
        }

    // 3. calculate ans from smaller subproblems
    int ans = INF;
    for(int i = 1; i <= k; i++) {

        // handle corner case
        if(n-i <= 0) {
            continue;
        }

        int candidate_ans = stone(n-i) + abs(h[n] - h[n-i]);
        ans = min(ans, candidate_ans);
    }

    dp[n] = ans;
    return ans;
}

int main() {

    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    for(int i = 1; i <= n; i++) {
        dp[i] = -1;
    }

    cout << stone(n) << "\n";

return 0;
}
