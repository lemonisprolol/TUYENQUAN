#include <bits/stdc++.h>

using namespace std;
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TRONGCAY.INP", "r", stdin);
    freopen("TRONGCAY.OUT", "w", stdout);
}
const int maxarr = 1e3 + 5;
long a[maxarr];
int main()
{
    inoutput();
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    long ks = a[k];
    sort(a + 1, a + n + 1);

    for(int i = 1; i <= n; i++)
    {
        if(a[i] == ks && a[k] > ks && a[i + 1] != ks)
        {
            swap(a[k], a[i]);
        }
        if(a[i] == ks && a[k] < ks && a[i - 1] != ks)
        {
            swap(a[k], a[i]);
        }
    }
    long long ans = 0;
    for(int i = 2; i <= n; i++)
    {
        //cout<<a[i]<<" ";
        ans += abs(a[i] - a[i - 1]);
    }
    //cout<<"\n";
    cout << ans;
    return 0;
}
