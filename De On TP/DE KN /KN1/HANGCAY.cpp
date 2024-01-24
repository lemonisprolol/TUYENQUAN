#include <bits/stdc++.h>

using namespace std;
const int maxarr = 2005;

struct att
{
    int id;
    int range;
};
att a[maxarr];
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("HANGCAY.INP", "r", stdin);
    freopen("HANGCAY.OUT", "w", stdout);
    int m,n;
    cin >> m >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].id;
        cin >> a[i].range;

    }
    int cur = 1;
    int dem = 0;
    bool flag = false;
    for(int i = 1; i <= m; i++)
    {
        if(abs(i - a[cur].id) >  a[cur].range && flag == true)
        {
            flag = false;
            cur++;
        }
        if(abs(i - a[cur].id) <= a[cur].range)
        {
            dem++;
            flag = true;

        }



    }
    cout<<dem;

    return 0;
}
