#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("HVUONGCON.INP", "r", stdin);
    freopen("HVUONGCON.OUT", "w", stdout);
}
const int maxarr = 1e4 + 2 ;
long a[maxarr][maxarr];
long long prefix[maxarr][maxarr];

int main()
{
    inoutput();
    int m , k;
    cin >> m >> k;
    for(int i = 1; i <= m ;i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= m; i++)
    {
        for(int j= 1; j <=m; j++)
        {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] + a[i][j] - prefix[i - 1][j - 1];
        }
    }
    long long MAX = LLONG_MIN;
    for(int i = m; i >= k; i--)
    {
        for(int j = m; j >= k; j--)
        {
            long long sum = prefix[i][j] - prefix[i - k][j] - prefix[i][j - k] + prefix[i - k][j - k];
            MAX = max(MAX, sum);

        }
    }
    cout<<MAX;
    return 0;
}
