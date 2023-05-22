#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    if (n < 10) {
        return n;
    }

    return n % 10 + sumOfDigits(n / 10);
}

int main() {

    int n;
    cin >> n;

    if (n < 10 || n > 1000) {
       cout << "Invalid input! Please enter a valid integer between 10 and 1000." << std::endl;
      return 0;
    }

    int sum = sumOfDigits(n);

    cout << sum << endl;

    return 0;
}
