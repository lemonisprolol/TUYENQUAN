#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;
typedef long long ll;

ll dp[MAX][55], fact[MAX], inv[MAX], a[MAX];

ll power(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

ll C(int n, int k) {
    if (k > n || k < 0) return 0;
    return fact[n] * inv[k] % MOD * inv[n - k] % MOD;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("XOSO.INP", "r", stdin);
    freopen("XOSO.OUT", "w", stdout);

    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);

    fact[0] = inv[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = fact[i - 1] * i % MOD;
        inv[i] = power(fact[i], MOD - 2);
    }

    for (int i = 0; i <= n; i++) dp[i][0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= k; j++)
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;

    ll res = 0;
    for (int i = k; i <= n; i++)
        res = (res + a[i] * dp[i - 1][k - 1] % MOD) % MOD;

    cout << res;
    return 0;
}
