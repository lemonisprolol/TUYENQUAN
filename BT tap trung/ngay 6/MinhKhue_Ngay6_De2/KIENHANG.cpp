#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("KIENHANG.INP", "r", stdin);
    freopen("KIENHANG.OUT", "w", stdout);
}
const int maxarr = 1e5 + 5;
int a[maxarr];
int main()
{
    inoutput();
    int n, m,k;
    cin >> n >> m>> k;
    long long kg = 0;
    int org = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        kg += a[i];
        if(kg > m)
        {
            break;
        }
        else org++;
    }
    m -= a[k];
    kg = 0;
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        kg += a[i];
        if(kg > m)
        {
            break;
        }
        else ans++;
    }
    cout<<org - ans;



    return 0;
}
