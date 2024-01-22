#include <bits/stdc++.h>

using namespace std;
void inouput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SODOCLAP.INP", "r", stdin);
    freopen("SODOCLAP.OUT", "w", stdout);
}
bool check(long long n)
{
    map<int, int> d;
    while(n > 0)
    {
        d[n % 10]++;
        if(d[n % 10] > 1) return 0;
        n /= 10;
    }
    return 1;
}
int main()
{
    inouput();
    long long n;
    cin >> n;
    while(!check(n))
    {
        n++;
    }
    cout<<n;

    return 0;
}
