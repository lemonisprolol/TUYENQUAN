#include <iostream>

using namespace std;

const int MAX_N = 500;
const int MAX_M = 50000;

struct Item {
  int discount;
  int real_value;
  int quantity;
};

int dp[MAX_N + 1][MAX_M + 1];

int main() {
  int n, m;
  cin >> n >> m;

  // Initialize dp table
  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j <= m; ++j) {
      dp[i][j] = 0;
    }
  }

  // Read item data
  Item items[n];
  for (int i = 0; i < n; ++i) {
    cin >> items[i].discount >> items[i].real_value >> items[i].quantity;
  }

  // Build dp table
  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j <= m; ++j) {
      int discounted_price = items[i - 1].real_value - items[i - 1].discount;
      if (j >= discounted_price) {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - discounted_price] + items[i - 1].real_value);
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }

  // Backtrack to find chosen items (you can modify this to store chosen quantities)
  int chosen_items[n] = {0}; // Initialize to 0 chosen items
  int budget = m;
  for (int i = n; i > 0; --i) {
    if (dp[i][budget] != dp[i - 1][budget]) {
      chosen_items[i - 1] = 1; // Mark item chosen
      budget -= items[i - 1].real_value - items[i - 1].discount;
    }
  }

  // Output solution
  cout << dp[n][m] << endl;
  for (int i = 0; i < n; ++i) {
    cout << chosen_items[i] << endl; // Output chosen indicator (modify for quantity)
  }

  return 0;
}
