#include <bits/stdc++.h>

using namespace std;

struct arr
{
    long x;
    int id;
};
const int maxarr = 1e6 + 5;
arr prefix[maxarr];
long a[maxarr];
bool compare(arr a, arr b)
{
    if(a.x == b.x) return a.id < b.id;
    else return a.x < b.x;
}
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ZERO.INP", "r", stdin);
    freopen("ZERO.OUT", "w", stdout);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        prefix[i].x = a[i] + prefix[i - 1].x;
        prefix[i].id = i;
    }
    prefix[0].x = 0;
    prefix[0].id = 0;
    sort(prefix, prefix + n + 1,compare);

    int lmax = 0, dau = prefix[0].id;
    prefix[n + 1].x = LONG_MAX, prefix[n + 1].id = n + 1;
    for(int i = 1; i <= n + 1; i++)
    {
        if(prefix[i].x != prefix[i - 1].x)
        {
            lmax = max(lmax, prefix[i- 1].id - dau);
            dau = prefix[i].id;
        }
    }

    cout<< lmax;
    return 0;
}
