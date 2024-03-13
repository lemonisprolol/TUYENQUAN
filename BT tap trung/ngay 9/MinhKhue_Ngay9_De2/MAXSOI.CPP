#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MAXSOI.INP", "r", stdin);
    freopen("MAXSOI.OUT", "w", stdout);
}
int main()
{
    inoutput();
    int m, n;
    cin >> m >> n;

    int r = 1;
    int ans = 0;
    while(m %2 != 0 && n % 2 != 0)
    {
        ans += r;
        m /= 2;
        n /= 2;
        r *= 4;


    }
    cout<<ans;

    return 0;
}
