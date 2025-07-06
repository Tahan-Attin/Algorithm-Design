#include <iostream>
#include <vector>
using namespace std;

int coinRowDP( vector<int>& coins) {
    int n = coins.size();
    if (n == 0) return 0;
    if (n == 1) return coins[0];

    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = coins[0];

    for (int i = 2; i <= n; ++i) {
        dp[i] = max(dp[i - 1], coins[i - 1] + dp[i - 2]);
    }
    return dp[n];
}
int main() {
    int n;
    cout << "Enter the size of the coin list: ";
    cin >> n;

    vector<int> coins(n);  // ✅ Resize the vector to hold n elements
    cout << "Enter the coin values:\n";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    cout << "Using DP: " << coinRowDP(coins) << endl;

    return 0;
}

