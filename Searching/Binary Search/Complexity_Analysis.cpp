/*
# Time Complexity: log2n

    Operation     length of the array
        0                 n = n/2^0
        1                 n/2 = n/2^1
        2                 (n/2)/2 = n/4 = n/2^2
        3                 (n/4)/2 = n/8 = n/2^3
        4                 n/16 = n/2^4
        ..
        k                 n/2^k

        So, n/2^k = 1 length of array
            n = 2^k
            k = log2n

        Now, if n = 10^9, log2n = 28 operations only
             if n = 10^18, log2n = 53 operations only

        So, Time Complexity is = log2n

*/


