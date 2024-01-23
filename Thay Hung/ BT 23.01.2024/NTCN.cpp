#include <bits/stdc++.h>

using namespace std;
int a[105];
bool prime[1001];
void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i <= sqrt(1001); i++)
    {
        if(prime[i] == true)
        {
            for(int j = i * i; j <= 1001; j += i)
            {
                prime[j] = false;
            }
        }
    }

}
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("NTCN.INP", "r", stdin);
    freopen("NTCN.OUT", "w", stdout);
    sieve();
    int n;
    cin >> n;
    int MAX = INT_MIN;
    int bcnchung = 1;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        MAX = max(MAX, a[i]);
        bcnchung = bcnchung * a[i] / abs(__gcd(bcnchung, a[i]));

    }
    int ans = MAX - 1;
    while(abs(__gcd(ans, bcnchung)) != 1 )
    {
        ans--;
    }
    cout<<ans;

    return 0;
}
