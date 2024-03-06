#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DUONGCHEO.INP", "r", stdin);
    freopen("DUONGCHEO.OUT", "w", stdout);
}

const int maxarr = 1e2 + 5;
int a[maxarr][maxarr];
int b[maxarr * 2];
int main()
{
    inoutput();
    int n;
    cin >> n;
    for(int i = 1; i <= n;i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    int MAX = INT_MIN;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            b[ n + (j - i)] += a[i][j];
            MAX = max(MAX, b[n + (j - i)]);
        }
    }
    cout<<MAX;




    return 0;
}
