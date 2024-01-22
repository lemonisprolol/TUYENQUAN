#include <bits/stdc++.h>

using namespace std;
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CHONQUA.INP", "r", stdin);
    freopen("CHONQUA.OUT", "w", stdout);
}
const int maxarr = 1e3 + 5;
int a[maxarr][maxarr];
int prefix[maxarr][maxarr];

int main()
{
    inoutput();
    int d, r, k;
    cin >> d >> r >> k;
    for(int i = 1; i <= d; i++)
    {
        for(int j = 1; j <= r; j++)
        {
            char c;
            cin >> c;
            if(c == '.') a[i][j] = 0;
            if(c == '*') a[i][j] = 1;

        }
    }
    k--;
    cout<<k<<endl;
    for(int i = 1; i <= d; i++)
    {
        for(int j = 1; j <= r; j++)
        {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] + a[i][j] - prefix[i - 1][j - 1];
        }
    }
    int MAX = INT_MIN;
    for(int i = d; i >= k; i--)
    {
        for(int j = r; j >= k; j--)
        {
            int sum = prefix[i][j] - prefix[i - k][j] - prefix[i][j - k] + prefix[i - k][j - k];
           // cout<<sum<<endl;
            MAX = max(MAX, sum);
        }
    }
    cout<<MAX;
    return 0;
}
