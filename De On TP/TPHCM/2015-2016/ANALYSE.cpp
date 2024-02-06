#include <bits/stdc++.h>

using namespace std;

long long sum(int n)
{

    long long ans = 0;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            ans += i;
            if(n % (n / i) == 0 && n / i != i)
            {
                ans +=n / i;
            }
        }

    }
    return ans;
}
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ANALYSE.INP", "r", stdin);
    freopen("ANALYSE.OUT", "w", stdout);
    int a, b;
    cin >> a >> b;
    cout<<sum(a) + sum(b);

    return 0;
}
