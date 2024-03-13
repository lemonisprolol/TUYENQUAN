#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DAYSO.INP", "r", stdin);
    freopen("DAYSO.OUT", "w", stdout);
}
const int maxarr = 1e5 + 5;
int a[maxarr];
long long fib[32];
bool isfib[400000];
void fibs()
{
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;
    for(int i = 3; i <= 28; i++)
    {
        fib[i] = fib[i - 1] + fib[ i - 2];
        //cout<<fib[i]<<endl;

    }
    for(int i = 0; i <= 28; i++)
    {
        isfib[fib[i]] = true;
    }
}
int main()
{
    inoutput();
    fibs();
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(!isfib[a[i]]) cout<<a[i]<<" ";
    }

    return 0;
}
