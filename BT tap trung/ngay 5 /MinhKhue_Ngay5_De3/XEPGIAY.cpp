#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("XEPGIAY.INP", "r", stdin);
    freopen("XEPGIAY.OUT", "w", stdout);
}
const int change = 1e4;
int main()
{
    inoutput();

    long long a, b;
    cin >> a >> b;
    long long realb = b * change;
    long long gg = 2;
    int ans = 1;
    while(a * gg< realb)
    {
        gg *= 2;
        ans++;
    }
    cout<<ans;

    return 0;
}
