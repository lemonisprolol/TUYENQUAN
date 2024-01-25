#include <bits/stdc++.h>

using namespace std;

struct timeatt
{
    int one;
    int two;
};
const int maxarr = 1e6 + 5;
timeatt a[maxarr];
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("WORK.INP", "r", stdin);
    freopen("WORK.OUT", "w", stdout);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].one;

    }
    for(int i = 1; i < n; i++)
    {
        cin >> a[i].two;
    }
    long work = 0;
    for(int i = 1; i <= n; i++)
    {
        //cout<<i<<" "<<a[i].one<<" "<<a[i].two<<endl;
        if(i == n)
        {
            work += a[i].one;
            continue;
        }


        if(a[i].one +  a[i + 1].one > a[i].two )
        {

            work += a[i].two;
            //cout<<a[i].two<<" "<<work<<endl;

            i++;

        }
        else
        {
            work += a[i].one;
            //cout<<a[i].one<<" "<<work<<endl;

        }

    }
    cout<<work;
    return 0;
}
