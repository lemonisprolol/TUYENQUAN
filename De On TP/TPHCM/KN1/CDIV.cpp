#include <bits/stdc++.h>

using namespace std;

const int maxarr = 2 * 1e5;
long a[maxarr];
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CDIV.INP", "r", stdin);
    freopen("CDIV.OUT", "w", stdout);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    long gcd = LONG_MIN;
    long MAX = a[1];
    for(int i = 2; i <= n; i++)
    {
        gcd = max(gcd, abs(__gcd(MAX, a[i])));

        MAX = max(MAX,a[i]);
    }
    cout<<gcd;

    return 0;
}
