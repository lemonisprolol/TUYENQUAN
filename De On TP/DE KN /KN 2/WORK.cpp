#include <bits/stdc++.h>

using namespace std;

struct timeatt
{
    int one;
    int two;
};
const int maxarr = 1e6 + 5;
timeatt a[maxarr];
long s[maxarr];
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("WORK.INP", "r", stdin);
    freopen("WORK.OUT", "w", stdout);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].one;

    }
    for(int i = 1; i < n; i++)
    {
        cin >> a[i].two;
    }
    long work = 0;
    for(int i = 1; i <= n; i++)
    {
        //cout<<i<<" "<<a[i].one<<" "<<a[i].two<<endl;
        s[i] = min(s[])

    }
    cout<<work;
    return 0;
}
