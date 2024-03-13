#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TCP.INP", "r", stdin);
    freopen("TCP.OUT", "w", stdout);
}
const int maxarr = 1e6 + 5;
int a[maxarr];
int main()
{
    inoutput();
    int n;
    cin >> n;
    for(int i = 1; i <= n;i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for(int i =1; i <= n; i++)
    {
        long long temp = 0;
        while(a[i] > 0)
        {
            temp = temp * 10 + (a[i] % 10);
            a[i] /= 10;
        }
        if((long long) sqrt(temp) == (double)sqrt(temp))
        {
            ans++;

        }
    }
    cout<<ans;

    return 0;
}
