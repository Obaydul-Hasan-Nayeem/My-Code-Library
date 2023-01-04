/*
(Variable Complexity)
    #Time Complexity: O(n^2)


    #Memory Complexity: O(n)
*/

/*
#include <bits/stdc++.h>

using namespace std;

int called = 0;

int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    int x = fib(n - 1);
    called++;
    int y = fib(n - 2);
    called++;

    return x + y;
}

int main() {

    int n;
    cin >> n;
    cout << "Fib: " << fib(n) << "\n";
    cout << "Called: " << called << "\n";

return 0;
}

*/

/*
    n
    n-th fibonacci
    called

    4
    3
    8
*/


/// More Less Time Complexity: (if ans saved)
/*
(Variable Complexity)
    #Time Complexity: O(n)


    #Memory Complexity: O(n)
*/



#include <bits/stdc++.h>

using namespace std;

int called = 0;
int save[100];

int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(save[n] != 0) return save[n];

    int x = fib(n - 1);
    called++;
    int y = fib(n - 2);
    called++;

    save[n] = x + y;
    return x + y;
}

int main() {

    int n;
    cin >> n;
    cout << "Fib: " << fib(n) << "\n";
    cout << "Called: " << called << "\n";

return 0;
}

/*
    n
    n-th fibonacci
    called


*/
