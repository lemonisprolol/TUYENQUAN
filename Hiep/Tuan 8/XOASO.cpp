#include <bits/stdc++.h>

using namespace std;

const int maxarr = 1e6 + 5;
long a[maxarr];
int odd[maxarr];
int even[maxarr];
int main()
{
    freopen("XOASO.INP", "r", stdin);
    freopen("XOASO.OUT", "w", stdout);
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 1; i <= n; i++)
    {

        cin >> a[i];
        sum += a[i];
    }
    for(int i = n; i >= 1; i--)
    {
        if(a[i] % 2 == 0)
        {
            even[i] = 1 + even[i + 1];
            odd[i] = odd[i + 1];
        }
        else
        {
            even[i] = even[i + 1];
            odd[i] = 1 + odd[i + 1];
        }
    }
    if(sum % 2 != 0)
    {
        cout<<odd[1] * even[1];
    }
    else
    {
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i ] % 2 == 0)
            {
                ans += even[i + 1];
            }
        }
        cout<<ans;
    }

    return 0;
}
