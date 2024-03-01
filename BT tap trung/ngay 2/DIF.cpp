#include <bits/stdc++.h>

using namespace std;

const int maxarr = 1e4 + 5;
int a[maxarr];
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DIF.INP", "r", stdin);
    freopen("DIF.OUT", "w", stdout);
    map<int, int> fre;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        fre[a[i]]++;
    }
    int ans = 0;
    for(int i = 1; i  <= n; i++)
    {
        if(fre[a[i]] == 1)
        {
            ans++;

        }
    }
    cout<<ans;
    return 0;
}
