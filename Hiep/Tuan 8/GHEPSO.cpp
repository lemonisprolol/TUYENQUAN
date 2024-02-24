#include <bits/stdc++.h>

using namespace std;
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("GHEPSO.INP", "r", stdin);
    freopen("GHEPSO.OUT", "w", stdout);
}
const int maxarr = 1e2 + 5;
string a[maxarr];
bool comp(string a, string b)
{

    if(a[0] < b[0]) return 0;
    int as = a.size() - 1, bs = b.size() - 1;
    if(a[0] == b[0])
    {
        for(int i = 0; i <= max(a.size(), b.size()); i++)
        {
            //cout<<a[min(i, as)]<<" "<< b[min(i, bs)]<<" "<<a<<" "<<b<<endl;
            if(a[min(i, as)] < b[min(i, bs)])
            {
                return 0;
            }
            if(a[min(i, as)] > b[min(i, bs)]) return 1;
        }
    }
    if(a[0] > b[0])
    {
        return 1;
    }
}
int main()
{
    inoutput();
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, comp);
    for(int i = 1; i <= n; i++)
    {
        cout<<a[i];
    }
    return 0;
}
