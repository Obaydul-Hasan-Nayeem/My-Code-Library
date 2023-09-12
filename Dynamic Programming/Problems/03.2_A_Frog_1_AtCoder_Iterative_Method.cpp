// Problem Link: https://atcoder.jp/contests/dp/tasks/dp_a

/*
    1. Define State
        stone(n) = minimum cost to reach nth stone


    2. Identify the recursive equation for the smaller subproblems
        if n = 8,
            stone(8) = min of,
                            stone(6) + |h8 - h6|
                            stone(7) + |h8 - h7|
                So, stone(n) = min of,
                                  stone(n-2) + |h(n) - h(n-2)|
                                  stone(n-1) + |h(n) - h(n-1)|

    3. Define base case
            stone(1) = 0


Time Complexity: O(n)
Space Complexity: O(n)
*/


#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

int h[N];
int dp[N];

int stone(int n) {

    // 1. base case
        if(n == 1) {
            return 0;
        }

    // 2. check if answer already exists
        if (dp[n] != -1) {
            return dp[n];
        }

    // 3. calculate answer from subproblems
    int ans1 = stone(n-1) + abs(h[n] - h[n-1]);

    if (n == 2) { // corner / edge case
        dp[n] = ans1;
        return ans1;
    }

    int ans2 = stone(n-2) + abs(h[n] - h[n-2]);

    int ans = min(ans1, ans2);
    dp[n] = ans;

    return ans;
}

int main() {

int n;
cin >> n;

for(int i = 1; i <= n; i++) {
    cin >> h[i];
}

// 1. handle base case
    dp[1] = 0;

// 2. loop through the states
    for(i = 2; i <= 2; i++) {
        // 2.1 solve from smaller subproblems
        int ans1 = dp[i-1] + abs(dp[i] - dp[i-1]);

        if(i == 2) { // corner case
            dp[i] == ans1;
            continue;
        }

        int ans2 = dp[i-2] + abs(dp[i] - dp[i-2]);
    }


cout << stone(n) << "\n";

return 0;
}
