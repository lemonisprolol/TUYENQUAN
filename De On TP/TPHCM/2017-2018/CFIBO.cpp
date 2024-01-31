#include <bits/stdc++.h>

using namespace std;

long long fib[91];
void fibo()
{
    fib[1] = 1;
    fib[2] = 2;
    for(int i = 3; i <= 100; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}
int main()
{
    freopen("CFIBO.INP", "r", stdin);
    freopen("CFIBO.OUT", "w", stdout);
    fibo();
    long long L, R;
    cin >> L >> R;
    int ans = 0;
    for(int i = 0; i <= 80; i++)
    {
        if(fib[i] >= L && fib[i] <= R)
        {
            ans++;
        }
        if(fib[i] > R) break;
    }
    cout<<ans;

    return 0;
}
