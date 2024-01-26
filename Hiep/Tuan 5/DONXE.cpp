#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DONXE.INP", "r", stdin);
    freopen("DONXE.OUT", "w", stdout);
}
const int maxarr = 1e6 + 5;
int a[maxarr];
int main()
{
    inoutput();
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[i] = x + y;
    }
    int dem = 0;
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == a[1]) dem++;

    }
    cout<<dem;
}
