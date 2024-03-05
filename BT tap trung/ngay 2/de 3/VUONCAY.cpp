#include <bits/stdc++.h>

using namespace std;

const int maxarr = 1e7 + 5;
int a[maxarr];
int n;
int MIN = INT_MAX;

void input()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        MIN = min(MIN, a[i]);
    }
}
vector<int> ans;
void solve()
{
    for(int i = 1; i <= n; i++)
    {
        if(a[i] - MIN > 0)
        {
            ans.push_back(a[i] - MIN);
        }

    }
    cout<<ans.size()<<endl;
    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("VUONCAY.INP", "r", stdin);
    freopen("VUONCAY.OUT", "w", stdout);
    input();
    solve();

    return 0;
}
