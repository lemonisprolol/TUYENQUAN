#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("LUYENTAP.INP", "r", stdin);
    freopen("LUYENTAP.OUT", "w", stdout);
}
const int maxarr = 1e5 + 5;
int a[maxarr];
int MAX = 0;
map<int, int> freq;
int main()
{
    inoutput();
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
        MAX = max(MAX, freq[a[i]]);
    }
    cout<<MAX;


    return 0;
}
