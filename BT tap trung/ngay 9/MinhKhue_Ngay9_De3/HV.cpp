#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("HV.INP", "r", stdin);
    freopen("HV.OUT", "w", stdout);
}
const int maxarr = 1e2 + 4;
int a[maxarr][maxarr];
int prefix[maxarr][maxarr];
int main()
{
    inoutput();
    int m, n;
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            prefix[i][j] = prefix[i - 1][j] + prefix[i ][j - 1]  - prefix[i - 1][j - 1] + a[i][j];
        }
    }
    int MAX = INT_MIN;
    int t1, t2;
    int s1, s2;
    for(int k = max(m, n); k >= 1; k--)
    {
        for(int i = m; i >= k; i--)
        {
            for(int j = n; j >= k; j--)
            {
                int sum = prefix[i][j] - prefix[i - k][j] - prefix[i][j - k] + prefix[i - k ][j - k];
                if(sum == k * k)
                {
                    if(sum > MAX)
                    {
                        MAX = sum;
                        t1 = i - k + 1;
                        t2 = j - k + 1;
                        s1 = i;
                        s2 = j;

                    }

                }
            }
        }
    }
    cout<<sqrt(MAX)<<endl;
    cout<<t1<<" "<<t2<<endl;
    cout<<s1<<" "<<s2<<endl;

    return 0;
}
