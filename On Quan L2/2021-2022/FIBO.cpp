#include <bits/stdc++.h>

using namespace std;

long f[46];
void sinhso()
{
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= 47; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("FIBO.INP", "r", stdin);
    freopen("FIBO.OUT", "w", stdout);
    sinhso();
    vector<int> ans;
    long n;
    cin >> n;
    while(n > 0)
    {
        for(int i = 46; i >= 1; i--)
        {
            if(f[i] <= n)
            {
                n -= f[i];
                ans.push_back(f[i]);
                break;
            }
        }

    }
    cout<<ans.size()<<endl;
    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
