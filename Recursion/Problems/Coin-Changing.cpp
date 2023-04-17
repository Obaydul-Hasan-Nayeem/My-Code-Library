/*
3 ta coin thakbe. shegulo diye akta shongkha banate hobe.
condition hocche- jotota kom shongkhok coin niye banano jay.
*/


#include <bits/stdc++.h>

using namespace std;

vector<int> coins = {1, 3, 4};

int coin_change(int n) {
    if(n == 0) {
        return 0;
    }

    int ans = 10000000;
    for(int i = 0; i < coins.size(); i++) {
        if(n >= coins[i]) {
            ans = min(ans, 1+ coin_change(n - coins[i]));
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << coin_change(n) << "\n";
}
