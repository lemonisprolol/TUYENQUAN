#include <bits/stdc++.h>

using namespace std;

const int maxarr = 1e4 + 5;
int a[maxarr];
set<int> d;

void fib(int n)
{
    a[1] = 1;
    a[2] = 1;
    d.insert(1);
    for(int i = 3; i <= n; i++)
    {
        a[i] = (a[i - 1] + a[i - 2]) % 100;
        d.insert(a[i]);
    }
}
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DAYSO.INP", "r", stdin);
    freopen("DAYSO.OUT", "w", stdout);

    int n;
    cin >> n;
    fib( n);

    cout<<a[n]<<endl;
    cout<<d.size()<<endl;
    return 0;
}
