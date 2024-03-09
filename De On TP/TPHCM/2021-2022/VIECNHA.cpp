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
const int maxarr = 1e3 + 5;
long a[maxarr];
int main()
{
    inoutput();
    int t;
    cin >> t;
    int n;
    cin >> n;
    for(int i = 1; i <=  n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    long long temp = 0;
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        temp += a[i];
        if(temp > t)
        {
            break;
        }
        else
        {
            ans++;
        }

    }
    cout<<ans;

    return 0;
}
