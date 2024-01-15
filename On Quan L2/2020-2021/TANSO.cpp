#include <bits/stdc++.h>

using namespace std;
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TANSO.INP", "r", stdin);
    freopen("TANSO.OUT", "w", stdout);
}
const int maxarr = 1e3 + 5;
int a[maxarr];
int main()
{
    inoutput();
    map<int, int> freq;
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    cout<<freq[m];
    return 0;
}
