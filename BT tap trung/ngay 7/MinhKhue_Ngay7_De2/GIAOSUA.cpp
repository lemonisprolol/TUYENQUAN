#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("GIAOSUA.INP", "r", stdin);
    freopen("GIAOSUA.OUT", "w", stdout);
}
const int maxarr = 1e6 + 5;
int a[maxarr];
int main()
{
    inoutput();
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int dagiao = 0;
    int songay = 1;
    int giaongay = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] >= songay)
        {
            dagiao++;
            giaongay++;
        }
        if(giaongay == k)
        {
            giaongay = 0;
            songay++;
        }

    }
    cout<<n - dagiao;





    return 0;
}
