#include <bits/stdc++.h>

using namespace std;
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TRONGCAY.INP", "r", stdin);
    freopen("TRONGCAY.OUT", "w", stdout);
}
const int maxarr = 1e3 + 5;
long a[maxarr];
long c[maxarr];
bool comp(long a, long b)
{
    return a > b;
}
int main()
{
    inoutput();
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        c[i] = a[i];
    }
    long ks = a[k];
    a[k] = INT_MAX;
    sort(a + 1, a + n + 1);
    for(int i = n + 1; i > k; i--)
    {
        a[i] = a[i - 1];

    }
    swap(a[n + 1], a[k]);
    a[k] = ks;


    long long ans1 = 0;
    for(int i = 2; i <= n; i++)
    {

        ans1 += abs(a[i] - a[i - 1]);
    }
    int j = 0;
    sort( c+ 1, c + n + 1, comp);
    for(int i = 0; i < k; i++)
    {
        c[i] = c[i + 1];
    }
    swap(c[0], c[k]);
    long long ans = 0;
    for(int i = 2; i <= n; i++)
    {
        ans += abs(c[i] - c[i - 1]);
    }


    cout<<min(ans1, ans);
    //cout<<"\n";
    return 0;
}
