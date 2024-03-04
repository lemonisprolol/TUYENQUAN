#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("FARM.INP", "r", stdin);
    freopen("FARM.OUT", "w", stdout);
}
const int maxarr = 1e2 + 5;
bool a[maxarr][maxarr];
int main()
{
    inoutput();
    int m, n;
    cin >> m >> n;
    int k;
    cin >> k;
    for(int i = 1; i <= k; i++)
    {
        int x, y;
        cin >> x >> y;
        for(int v = x - 2; v <= x + 2; v++)
        {
            for(int t = y - 2; t <= y + 2; t++)
            {
                a[v][t] = 1;
            }

        }

    }
    int ans = 0;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(a[i][j] == 0)
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
