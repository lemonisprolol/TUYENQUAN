#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BTICK.INP", "r", stdin);
    freopen("BTICK.OUT", "w", stdout);
}
int main()
{
    inoutput();
    int n, k , p1, p2;
    cin >> n >> k >> p1 >> p2;

    long long cp1 = p1 * n;
    long long cp2 = ((n / k) * p2)  + (p1 * (n % k ));
    cout<<min(cp1, cp2);

    return 0;
}
