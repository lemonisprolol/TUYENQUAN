#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CHUDE.INP", "r", stdin);
    freopen("CHUDE.OUT", "w", stdout);
}
set<int> ans;

const int maxarr = 1e5 + 5;
int a[maxarr];
int main()
{
    inoutput();
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ans.insert(a[i]);
    }
    cout<<ans.size();

    return 0;
}
