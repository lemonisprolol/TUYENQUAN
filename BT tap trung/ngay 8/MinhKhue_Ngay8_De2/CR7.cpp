#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CR7.INP", "r", stdin);
    freopen("CR7.OUT", "w", stdout);
}
const int maxarr = 1e5 + 5;
int a[maxarr];
int b[maxarr];
int main()
{
    inoutput();
    set<int> ax;
    set<int>bx;
    int m, n;
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
    {
        cin >> a[i];
        ax.insert(a[i]);
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
        bx.insert(b[i]);
    }
    set<int> ::iterator it;
    int ans = 0;
    for(it = ax.begin(); it != ax.end(); it++)
    {
        if(bx.find(*it) != bx.end()) ans++;
    }
    cout<<ans;


    return 0;
}
