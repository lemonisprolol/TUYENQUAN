#include <bits/stdc++.h>

using namespace std;

const int maxarr = 1e3 + 5;
long a[maxarr][maxarr];
const int x[4] = {-1, 0, 1, 0};
const int y[4] = {0, 1, 0, -1};
bool check(int i, int j)
{
    for(int r = 0; r < 4; r++)
    {
        if(a[i + x[r]][j + y[r]] == 1) return false;
    }
    return true;
}
int main()
{
        iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SQUARE.INP", "r", stdin);
    freopen("SQUARE.OUT", "w", stdout);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1 ;j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1 ;j <= n; j++)
        {
            if(a[i][j] == 1)
            {
                if(check(i, j))
                {
                    ans++;
                }
            }

        }
    }
    cout<<ans;
    return 0;
}
