// Complexity Analysis: Finding prime number from 1 to n

/*
    # Time Complexity:
                Inner Loop
        i = 2       n/2
        i = 3       n/3
        i = 4       0, Let n/4 [As we need upper bound]
        i = 5       n/5
        i = 6       0, Let n/6 [As we need upper bound]
        ...         ...

        = n/2 + n/3 + n/4 + n/5 + n/6 + ... + n/n
        = n(1/2 + 1/3 + 1/4 + 1/5 + 1/6 + ... + 1)
        = n(1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 + ... + 1/n)
        = n(ln(n)) [Harmonic Series]
        = n(logen)

        So, the complexity = nlogn

    # The way to remember nlogn complexity:
            Outer Loop: n number of iteration
            Inner Loop: multiple number of iteration
            Then we'll find harmonic series

            If we find harmonic series, then it is nlogn
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> primes;
    vector <bool> visited(n);

    for(int i = 2; i <= n; i++) {
        if(!visited[i]) {
            primes.push_back(i);
            for(int j = 2; i*j <= n; j++) {
                visited[i*j] = true;
            }
        }
    }

    cout << primes.size() << "\n";
    for(int i = 0; i < primes.size(); i++) {
        cout << primes[i] << " ";
    }

return 0;
}
