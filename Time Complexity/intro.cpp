/*
    #
    Big O notation: upper bound
    Omega notation: lower bound
    Theta notation: upper and lower bound
----------------------------------------------------
    #
        Variable Time Complexity: O(n), O(n^2), O(n^3), O(nlogn) and all of the below (maybe)
        Polynomial Time Complexity: O(n^k), O(logn), O(nlogn), O(nrootn)
  [BAD] Exponential Time Complexity: O(2^n), O(3^n), O(c^n), O(n!)
-----------------------------------------------------------------------------
    # Big O:
    O(1): constant number of operation
        : variable number of operation
---------------------------------------------------------------------
    #
    O(n), O(n^2), O(n^3), O(n^k), O(logn), O(nlogn), O(nrootn)
    O(2^n), O(c^n)
----------------------------------------------------------------
    # Rule of Thumb: Modern Computer, 1s -> 10^9 or 2 x 10^8 operations

    # (c*n) = O(n)
 --------------------------------------------------------
    #
    n^2 vs nlogn

    n^2:
        input, n = 10^5
        n^2 = 10^5 * 10^5 = 10^10

        So, 10^10 / 10^8 [1s = 10^8 operations]
            = 10^2 seconds
            = 100 seconds

    nlogn:
        input, n = 10^5
            nlogn = 10^5 * log2(10^5)
                  = 10^5 * 17

        So, (17 * 10^5) / 10^8
            = < 1 seconds
--------------------------------------------------------------


*/
