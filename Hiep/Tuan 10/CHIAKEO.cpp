#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("CHIAKEO.INP", "r", stdin);
    freopen("CHIAKEO.OUT", "w", stdout);
    long long n;
    cin >> n;
    int i = 1;
    long long temp = n;
    vector<int> stor;
    if(n % 2 != 0)
    {
        cout<<n / 2<<" "<<(n / 2) + 1;
        return 0;
    }
    while(n > 0)
    {
        n -= i;
        stor.push_back(i);
        i++;
    }
    int sum = 0;
    int breaking;

    for(int y = 0; y < stor.size(); y++)
    {
        if(sum == abs(n))
        {
            breaking = y;
            break;
        }
        sum += stor[y];
    }
    if(sum > abs(n))
    {
        cout<< temp;
        return 0;
    }
    for(int y =  breaking; y < stor.size(); y++)
    {
        cout<<stor[y]<<" ";
    }
    return 0;
}
