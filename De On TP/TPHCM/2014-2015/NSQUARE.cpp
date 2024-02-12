#include <bits/stdc++.h>

using namespace std;

int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("NSQUARE.INP", "r", stdin);
    freopen("NSQUARE.OUT", "w", stdout);
    long long n;
    cin >> n;
    long long s = sqrt(n);
    while((s * s) % n != 0)
    {
        s++;
    }
    cout<<(s * s) / n;
    return 0;
}
