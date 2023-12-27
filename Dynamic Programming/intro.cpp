/*

    DYNAMIC PROGRAMING [DP]
    ==================

    PREREQUISITE:
        - Recursion
        - Complexity Analysis

    STEPS: (theoritical)
        - define state
        - identify the recursive equation from the smaller subproblems
        - define base cases

        state: akta function e jotogulo parameter thake sheguloi tar state

    WAYS TO SOLVE DP:
        - memorization / recursive / top-down method [For Beginner]
        - tabulation / iterative / bottom-up method


        Memorization / Recursive Method:
        --------------------------------
        fun(n, a, b, c) {
            1. handle base case
            2. if current state is already solved, return the result
            3. calculate the result from smaller sub-problems
        }

        Tabulation / Iterative Method:
        ------------------------------
        1. handle base case
        2. loop through the states
            2.1. and calculate the answer from smaller subproblems


    OTHERS:
        - DP te n er jonno kichu calculate korte hole dhorei nite hobe je (n-1) already solved. ai bepar ti k "Leap of Fail" bole.

*/


