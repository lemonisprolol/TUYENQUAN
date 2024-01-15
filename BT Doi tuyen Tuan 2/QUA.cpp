#include <bits/stdc++.h>

using namespace std;

const int maxarr = 1e5 + 5;
long a[maxarr];
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("QUA.INP", "r", stdin);
    freopen("QUA.OUT", "w", stdout);
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int start = 1, endd = n;
    long MAX = 0;
    while(start < endd)
    {
        if(a[start] + a[endd] > k)
        {
            endd--;
        }
        if(a[start] + a[endd] < k)
        {
            MAX = max(MAX, a[start] + a[endd]);

            start++;
        }
        if(a[endd] + a[start] == k && endd != start)
        {
            cout<<k;
            return 0;
        }

    }
    cout<<MAX;

    return 0;
}
