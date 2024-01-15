#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min_penalty(int N, int K, vector<int>& penalties) {
    vector<int> dp(N + 2, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= N + 1; ++i) {
        for (int j = 1; j <= min(i, K); ++j) {
            dp[i] = min(dp[i], dp[i - j] + penalties[i - j]);
        }
    }
    return dp[N + 1];
}

int main() {
    freopen("LOCO.INP", "r", stdin);
    freopen("LOCO.OUT", "w", stdout);
    int N, K;
    cin >> N >> K;
    vector<int> penalties;
    for(int i = 1; i <= n; i++)
    {
        cin >> penalties[i];
    }
    cout << min_penalty(N, K, penalties) << endl;  // Output: 45
    return 0;
}
