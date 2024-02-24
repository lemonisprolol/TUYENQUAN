#include <bits/stdc++.h>

using namespace std;

const int maxarr = 1e5 + 5;
long a[maxarr];
long long p[maxarr];
int main()
{
    freopen("BAIHAT.INP", "r", stdin);
    freopen("BAIHAT.OUT", "w", stdout);
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        p[i] = p[i - 1] + a[i];
    }
    long long MAX = LLONG_MIN;
    int x, y;
    for(int i = k; i <= n; i++)
    {
        if(p[i] - p[i - k] > MAX)
        {
            MAX = p[i] - p[i - k];
            x = i;
            y = i - k + 1;
        }
        //cout<<MAX<<endl;


    }
    for(int i = y; i <= x; i++)
    {
        cout<<i<<" ";
    }
    cout<<MAX;

    return 0;
}
