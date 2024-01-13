
#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("LOCO.INP", "r", stdin);
    freopen("LOCO.OUT", "w", stdout);
}
const int maxarr = 1e5 + 5;
long a[maxarr];
long f[maxarr];
int main()
{
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        long MIN = LONG_MAX;
        for(int j = 1; j <= k; j++)
        {
            MIN = min(MIN, f[i - j]);
        }
        f[i] = abs(a[i] - MIN) + f[i];
    }
    cout<<f[n];

    return 0;
}
