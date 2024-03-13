#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BANGSO.INP", "r", stdin);
    freopen("BANGSO.OUT", "w", stdout);
}
int main()
{
    inoutput();
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for(int i = 1; i <= sqrt(k); i++)
    {
        if(i > n) break;
        if(k % i == 0 && k / i <= n) ans+= 2;

    }
    cout<<ans;

    return 0;
}
