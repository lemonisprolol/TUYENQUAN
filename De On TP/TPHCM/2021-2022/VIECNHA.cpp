#include <bits/stdc++.h>

using namespace std;
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("VIECNHA.INP", "r", stdin);
    freopen("VIECNHA.OUT", "w", stdout);
}
const int maxarr = 1e2 + 5;
long a[maxarr];
int main()
{
    inoutput();
    int t, c;
    cin >> t >> c;
    for(int i = 1; i <= c; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + c + 1);
    int sl = 0;
    for(int i = 1; i <= c; i ++)
    {
        if(t < c) break;
        t -= a[i];
        sl++;
    }
    cout<<sl;

    return 0;
}
