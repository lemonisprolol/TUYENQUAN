#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SQROOT.INP", "r", stdin);
    freopen("SQROOT.OUT", "w", stdout);
}
int main()
{
    inoutput();

    int n;
    cin >> n;
    long long ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ans += (i *i) % 2021;
    }
    cout<<ans % 2021;

    return 0;
}
