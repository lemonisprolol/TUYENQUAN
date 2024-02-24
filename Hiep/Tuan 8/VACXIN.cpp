#include <bits/stdc++.h>

using namespace std;
const int maxarr = 1e5 + 5;
long long a[maxarr];
long long larg[maxarr];

void sieve()
{
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i <= maxarr; i += 2)
    {
        a[i] = a[i / 2];
        a[i + 1] = a[i / 2] + a[(i / 2) + 1];
    }
    larg[0] = 0;
    for(int i = 1; i <= maxarr; i++)
    {
        larg[i] = max(a[i], larg[i - 1]);
    }
}
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("VACXIN.INP", "r", stdin);
    freopen("VACXIN.OUT", "w", stdout);

    sieve();
    int t;
    cin >> t;


    for(int i = 1; i <= t; i++)
    {
        int s;
        cin >> s;
        cout<<larg[s]<<endl;
    }

    return 0;
}
