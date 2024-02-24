#include <bits/stdc++.h>

using namespace std;

const int maxarr = 1e5 + 5;
long a[maxarr];
int main()
{
    freopen("MARATHON.INP", "r", stdin);
    freopen("MARATHON.OUT", "w", stdout);
    int m,t, up, flat, down;
    cin >> m >> t >> up >> flat >> down;
    for(int i = 1; i <= t; i++)
    {
        char s;
        cin >> s;
        if(s == 'u')
        {
            a[i] = up;
        }
        if(s == 'f')
        {
            a[i] = flat;
        }
        else
        {
            a[i] = down;
        }
    }
    int go = 0, ret = 0;
    for(int i = 1; i <= t; i++)
    {
        if(a[i] == up)
        {
            go += a[i];
            ret += down;
        }
        if(a[i] == down)
        {
            go += down;
            ret += up;
        }
        else
        {
            go += flat;
            ret += flat;
        }
        if(go + ret == m)
        {
            cout<<i;
            return 0;

        }
        if(go + ret > m )
        {
            cout<< i - 1;
            return 0;
        }


    }

    return 0;
}
