#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DIVISORS.INP", "r", stdin);
    freopen("DIVISORS.OUT", "w", stdout);
}
int mu(int n, int prime )
{
    int ans = 0;
    for(int i = prime; i <= n; i *= prime)
    {
        ans += n / i;

    }
    return ans;
}
const int maxarr = 1e6 + 5;
bool p[maxarr];
void sieve()
{
    for(int i = 2; i <= maxarr; i++) p[i] = true;
    for(int i = 2; i * i <= maxarr; i++)
    {
        if(p[i])
        {
            for(int j = i * i; j <= maxarr; j+= i)
            {
                p[j] = false;
            }
        }
    }
}

int main()
{
    inoutput();
    sieve();
    int n;
    cin >> n;
    long long res = 1;
    for(int i = 2; i <= n; i++)
    {
        if(p[i])
        {
            res *= mu(n, i) + 1;
            res %= MOD;

        }
    }
    cout<<res - 1;

    return 0;
}
