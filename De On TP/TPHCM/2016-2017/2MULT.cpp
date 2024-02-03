#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("2MULT.INP", "r", stdin);
    freopen("2MULT.OUT", "w", stdout);
}
int main()
{
    inoutput();
    long a, b;
    cin >> a >> b;
    long long ans = 0;
    while(a > 0)
    {
        int mul = a % 10;
        long temp = b;
        while(temp > 0)
        {
            ans += mul * (temp % 10);
            temp /= 10;
        }
        a /= 10;
    }
    cout<<ans;

    return 0;
}
