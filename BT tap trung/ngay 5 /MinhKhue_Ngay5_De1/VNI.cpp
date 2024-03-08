#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("VNI.INP", "r", stdin);
    freopen("VNI.OUT", "w", stdout);
}
const int maxarr = 1e5 + 5;
int a[maxarr];
int MAX[maxarr];
int ans[maxarr];
int main()
{
    inoutput();
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int s;
    cin >> s;
    MAX[n] = a[n];
    ans[n] = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        MAX[i] = max(a[i], MAX[i + 1]);
        ans[i] = ans[i + 1] + MAX[i] - a[i];

    }


    for(int i = 1; i <= s; i++)
    {
        int prob;
        cin >> prob;
        cout<<ans[prob]<<endl;
    }

    return 0;
}
