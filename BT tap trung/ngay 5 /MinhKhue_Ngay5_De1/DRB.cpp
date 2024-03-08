#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DRB.INP", "r", stdin);
    freopen("DRB.OUT", "w", stdout);
}
int main()
{
    inoutput();
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int g = (c - a)/ (b - d);
    if(g >= 0)
    {
        cout<<g;
    }
    else cout<<-1;


    return 0;
}
