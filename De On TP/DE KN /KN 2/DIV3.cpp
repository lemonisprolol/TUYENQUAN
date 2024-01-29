#include <bits/stdc++.h>

using namespace std;

const int maxarr = 1e3 + 5;
long a[maxarr];
int b[3];
int main()
{
    freopen("DIV3.INP", "r", stdin);
    freopen("DIV3.OUT", "w", stdout);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[a[i] % 3]++;
    }
    int ans = 0;
    cout<<b[0] * (b[0] - 1) / 2 + b[1] * b[2];

    return 0;
}
