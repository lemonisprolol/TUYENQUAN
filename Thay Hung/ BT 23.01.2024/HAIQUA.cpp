#include <bits/stdc++.h>

using namespace std;

const int maxarr = 105;
long a[maxarr][maxarr];
long maxtil[maxarr][maxarr];
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("HAIQUA.INP", "r", stdin);
    freopen("HAIQUA.OUT", "w", stdout);

    int m, n;
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<int> d;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            maxtil[i][j] = max(maxtil[i - 1][j], maxtil[i][j - 1 ]) + a[i][j];


           // cout<<maxtil[i][j]<<" ";
        }
       // cout<<endl;

    }
    cout<<maxtil[m][n]<<endl;
    int x = m;
    int y = n;
    while(x >= 1 && y >= 1)
    {
        d.push_back(a[x][y]);
        //cout<<a[x][y]<<endl;
        if(maxtil[x - 1][y] > maxtil[x ][y - 1])
        {
            x = x - 1;
            continue;
        }
         if(maxtil[x - 1][y] <= maxtil[x ][y - 1]) {y = y - 1;}
    }
    for(int i = d.size() - 1; i>= 0; i--)
    {
        cout<<d[i]<<" ";
    }

    return 0;
}
