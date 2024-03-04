#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("FINDNUM.INP", "r", stdin);
    freopen("FINDNUM.OUT", "w", stdout);
    int a, b;
    cin >> a >> b;
    long long sum = 0;
    for(int i = a; i <= b; i++)
    {
        if(i % 2 != 0) sum += i;
    }
    cout<<sum<<endl;
    cout<<a / __gcd(a, b)<<" "<<b / __gcd(a, b)<<endl;
    for(int i = 1; i <= a / 2; i++)
    {
        if((a - i) * i == b )
        {
            cout<<a - i<<" "<<i;
            return 0;
        }
    }
    return 0;
}
