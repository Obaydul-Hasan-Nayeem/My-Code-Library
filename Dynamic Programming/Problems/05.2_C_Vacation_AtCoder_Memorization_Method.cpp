// Problem Link: https://atcoder.jp/contests/dp/tasks/dp_c
// not solved fully (4/13)


/*
    1. Define State:
        fun(n, x) => max happiness till day-n given that we are doing the task-x on day-n

    2. Identify the recursive equation for the smaller sub problem:
        Let, n = 4;
        (a, b, c)   (a, b, c)   (a, b, c)   (a, b, c)
            1           2           3           4

        fun(4, c) = max of
                         fun(3, a) + c
                     or, fun(3, b) + c

        fun(4, b) = max of
                         fun(3, a) + b
                     or, fun(3, c) + b

        fun(4, a) = max of
                         fun(3, b) + a
                     or, fun(3, c) + a

        ans = max of [fun(4, a), fun(4, b), fun(4, c)]

        So, generic equation will be,
            fun(n, x) = max of {fun(n-1, y) + h(n, x)}
                    where x != y
                    h(n, x) = happiness of task-x on day-n


    3.  Define Base Case
            fun(1, a) = h(1, a)
            fun(1, b) = h(1, b)
            fun(1, c) = h(1, c)

        So, fun(n, x) = h(n, x)


    Memory Complexity: fun(n, x) = O(n * x * x) = O(n)
    Space Complexity: fun(n, x) = dp[n][x] = O(n*x) = O(n)
*/


#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

int happiness[N][4], dp[N][4];

int fun(int day, int current_task) {
    // 1. handle base case
        if(day == 1) {
            return happiness[day][current_task];
        }

    // 2. if answer is already calculated, return it
        if(dp[day][current_task] != -1) {
            return dp[day][current_task];
        }

    // 3. calculate the answer from smaller sub-problem
        int max_profit = 0;
        for(int last_task = 1; last_task <= 3; last_task++) {
            if(last_task != current_task) {
                int candidate_profit = fun(day - 1, last_task) + happiness[day][current_task];
                max_profit = max(max_profit, candidate_profit);
            }
        }

        dp[day][current_task] = max_profit;
        return max_profit;
}

int main() {

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {

    /*
        int a, b, c;
        cin >> a >> b >> c;

        happiness[i][1] = a;
        happiness[i][2] = b;
        happiness[i][3] = c;
    */

        for(int j = 1; j <= 3; j++) {
            cin >> happiness[i][j];
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            dp[i][j] = -1;
        }
    }

    int ans_1 = fun(n, 1);
    int ans_2 = fun(n, 2);
    int ans_3 = fun(n, 3);

    cout << max({ans_1, ans_2, ans_3});

return 0;
}

















