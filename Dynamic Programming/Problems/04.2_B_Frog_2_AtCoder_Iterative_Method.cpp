// Problem Link: https://atcoder.jp/contests/dp/tasks/dp_b
// Solved by Iterative / Tabulation Method of DP

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

Corner Case: can't jump from stones with number <= 0

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


}

int main() {

    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    // 1. base case
    dp[1] = 0;

    // 2. loop over the states
    for(int i = 2; i <= n; i++) {
        dp[i] = INF;

        // 2.1. calculate ans from smaller sub-problems
        for(int j = 1; j <= k; j++) {

            int from_stone = i - j;
            // corner case
            if(from_stone <= 0) {
                break;
            }

            int candidate_ans = dp[from_stone] + abs(h[i] - h[from_stone]);
            dp[i] = min(dp[i], candidate_ans);
        }
    }

    cout << dp[n] << "\n";

return 0;
}
