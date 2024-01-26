#include <bits/stdc++.h>
using namespace std;
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CHONGOI.INP", "r", stdin);
    freopen("CHONGOI.OUT", "w", stdout);
}
const int maxarr = 1e6 + 5;
int a[maxarr];
int main()
{
    inoutput();
    int n, k;
    cin >> n >> k;
    int i = 1;
    int l = 1, r = n;
    a[n / 2] = i;
    l = n / 2 - 1;
    r = n / 2 + 1;
    i++;
    while(l >= 1 || r <= n)
    {
        a[r] = i;
        i++;
        r++;
        a[r ] = i;
        i++;
        r++;
        a[l] = i;
        i++;
        l--;
        a[l] = i;
        i++;
        l--;

    }
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == k)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
