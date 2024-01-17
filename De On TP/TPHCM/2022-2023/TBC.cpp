#include <bits/stdc++.h>

using namespace std;
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TCB.INP", "r", stdin);
    freopen("TCB.OUT", "w", stdout);
}
const int maxarr = 1e6 + 5;
long a[maxarr];
long b[maxarr];
int main()
{
    inoutput();
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    long long sum = 0;
    for(int i = 1; i <= n; i++)
    {
        long long temp = b[i] * i;
        a[i] = temp - sum;
        sum += b[i];
        cout<<a[i]<<" ";

    }




    return 0;
}
