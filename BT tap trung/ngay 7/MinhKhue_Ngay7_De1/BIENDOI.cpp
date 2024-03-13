#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BIENDOI.INP", "r", stdin);
    freopen("BIENDOI.OUT", "w", stdout);
}
const int maxarr = 1e3 + 5;
struct pval
{
    int val;
    int height;
};
pval p[maxarr];
struct sta
{
    int l, r, x;
};
sta a[maxarr];
int main()
{
    inoutput();
    int m, n;
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
    {
        cin >> p[i].val;
        p[i].height = 0;
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].l >> a[i].r >> a[i].x;
    }
    for(int i = 1; i <= n; i++)
    {
        bool flag; //false mean pos off odd in + position
        if(a[i].l% 2 == 1)
        {
            flag = false;
        }
        else flag = true;
        for(int j = 1; j <= m; j++)
        {
            if(p[j].val % 2 == 1)
            {
                if(flag && p[j].val <= a[i].r && p[j].val >=  a[i].l) p[j].height -= a[i].x;
                if(!flag && p[j].val <= a[i].r && p[j].val >=  a[i].l) p[j].height += a[i].x;
            }
            else
            {
                if(flag && p[j].val <= a[i].r&& p[j].val >= a[i].l) p[j].height += a[i].x;
                if(!flag && p[j].val <= a[i].r && p[j].val >= a[i].l) p[j].height -= a[i].x;
            }

        }
    }
    for(int i = 1; i <= m; i++)
    {
        cout<<p[i].height<<endl;
    }

    return 0;
}
