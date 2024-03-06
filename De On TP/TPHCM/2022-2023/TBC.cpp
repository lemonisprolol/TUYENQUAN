#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TBC.INP", "r", stdin);
    freopen("TBC.OUT", "w", stdout);
}
const int maxarr = 1e6 + 5;
long long a[maxarr];
long long b[maxarr];
int main()
{
    inoutput();
    int n;
    cin >>n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    long long sumcur = 0;
    for(int i = 1; i <= n; i++)
    {
        b[i] = a[i] * i - sumcur;
        sumcur += b[i];
        cout<<b[i]<<" ";
    }




    return 0;
}
