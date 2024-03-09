#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TRIEUPHU.INP", "r", stdin);
    freopen("TRIEUPHU.OUT", "w", stdout);
}
const int maxarr = 260;
string a[maxarr];
bool cmp(string x, string y)
{
    for(int i = 0; i < min(x.size(), y.size()); i++)
    {
        if(x[i] > y[i]) return 1;
        if(x[i] < y[i]) return 0;
    }
    return 0;
}
int main()
{
    inoutput();
    int ai = 1;
    while(cin >> a[ai])
    {
        ai++;
    }
    sort(a + 1, a + ai );
    cout<<ai - 1<<endl;
    for(int i = 1; i <= ai; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
