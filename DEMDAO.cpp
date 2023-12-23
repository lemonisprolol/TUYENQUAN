#include <bits/stdc++.h>

using namespace std;

const int maxarr = 1e3 + 5;
long a[maxarr][maxarr];
int s = 0;
void explode(long i , long y)
{
    a[i][y] = 0;
    if(a[i + 1][y] == 1)
    {
        explode(i + 1, y);
    }
    if(a[i - 1][y] == 1)
    {
        explode(i - 1, y);
    }
    if(a[i][y + 1 ] == 1)
    {
        explode(i, y + 1);
    }
    if(a[i][y - 1 ] == 1)
    {
        explode(i, y - 1);
    }
}
void matrixcout(int m, int n)
{
    for(int i = 1; i <= m; i++){
        for(int y = 1; y <= n; y++)
        {
            cout<<a[i][y];

        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    freopen("DEMDAO.INP", "r", stdin);
    freopen("DEMDAO.OUT", "w", stdout);
    int m, n;
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
    {
        for(int y = 1; y <= n; y++)
        {
            cin >> a[i][y];
        }
    }
    for(int i = 1; i <= m; i++)
    {
        for(int y = 1; y <= n; y++)
        {
            if(a[i][y] == 1)
            {
                explode(i, y);
                s++;
            }
        }
    }
    cout<<s;
    return 0;
}
