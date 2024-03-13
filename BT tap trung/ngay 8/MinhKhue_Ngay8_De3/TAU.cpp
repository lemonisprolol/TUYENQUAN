#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TAU.INP", "r", stdin);
    freopen("TAU.OUT", "w", stdout);
}
int main()
{
    inoutput();
    int m, n;
    cin >> m >> n;

    cout<<m * n / __gcd(m, n);

    return 0;
}
