#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("NKE.INP", "r", stdin);
    freopen("NKE.OUT", "w", stdout);
}
const int maxarr = 2 * 1e4 + 5;
int a[maxarr];
int main()
{
    inoutput();
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int ans = 0;
    int fin = 0;
    for(int i = n; i >= 1; i--)
    {
        if(ans + a[i] >= k)
        {
            fin++;

            break;
        }
        fin++;
        ans += a[i];

    }
    cout<<fin;
    return 0;
}
