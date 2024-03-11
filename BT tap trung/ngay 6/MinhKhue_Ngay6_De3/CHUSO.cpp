#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CHUSO.INP", "r", stdin);
    freopen("CHUSO.OUT", "w", stdout);
}
int main()
{
    //inoutput();
    int n, k;
    cin >> n >> k;
    long long ans = 1;
    int pows = 1;
    for(int i = 1; i <= k; i++)
    {
        pows *= 10;
    }
    for(int i = 1; i <= n; i++)
    {
        ans *= i;
        while(ans >= pows)
        {
            ans /= 10;
        }
    }

    cout<<ans;

    return 0;
}
