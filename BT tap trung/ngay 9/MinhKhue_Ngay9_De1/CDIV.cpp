#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CDIV.INP", "r", stdin);
    freopen("CDIV.OUT", "w", stdout);
}
const int maxarr = 2 * 1e5;
const int maxnum = 1e6 + 5;
long a[maxarr];
long b[maxnum];
int main()
{
    inoutput();
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        for(long long j = 1; j * j <= a[i]; j++)
        {
            if(a[i] % j == 0)
            {
                b[j]++;
                if(a[i ] % (a[i] / j) == 0 &&(a[i] / j) != j)
                {
                    b[a[i] / j]++;
                }
            }
        }
    }
    for(int i = maxnum; i >= 2; i--)
    {
        if(b[i] >= 2)
        {
            cout<<i;
            return 0;
        }
    }

    return 0;
}
