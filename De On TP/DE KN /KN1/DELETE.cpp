#include <bits/stdc++.h>

using namespace std;

const int maxarr = 1e6 + 5;
long a[maxarr];
long one[maxarr];
long three[maxarr];
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DELETE.INP", "r", stdin);
    freopen("DELETE.OUT", "w", stdout);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(a[i - 1] == 1)
        {
            one[i] = one[i - 1] + 1;
        }
        else one[i] = one[i - 1];

    }
    long cases = 0;
    for(int i = n; i >=1 ; i--)
    {
        if(a[i + 1] == 3)
        {
            three[i] = three[i + 1] + 1;
        }
        else three[i] = three[i + 1];

    }
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == 2)
        {
            //cout<<one[i]<<" "<<three[i]<<"\n";
            cases += one[i] * three[i];
        }
    }

    cout<<cases;


    return 0;
}
