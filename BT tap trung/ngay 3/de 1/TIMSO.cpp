#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TIMSO.INP", "r", stdin);
    freopen("TIMSO.OUT", "w", stdout);
}
int con(string k)
{
    int ans = 0;
    for(int i = 0; i < k.size(); i++)
    {
        ans = ans * 10 + (int) (k[i] - '0');

    }
    return ans;
}
bool checknt(string n)
{
    int g = con(n);
    if(g < 1) return 0;
    if(g < 4) return 1;
    if(g % 2 == 0 || g % 3 == 0) return 0;
    for(int i = 5; i <= sqrt(g); i += 6)
    {
        if(g % i == 0 || g % (i + 2) == 0) return 0;
    }
    return 1;
}
int main()
{
    inoutput();
    string s;
    cin >> s;
    int MAX = 0;
    for(int i = 0; i < s.size(); i++)
    {
        string n = "";
        for(int j = i; j < i + 2 ; j++)
        {
            if(s[j] >= '0' && s[j] <= '9')
            {
                n += s[j];
            }

        }
        if(checknt(n))
        {
            MAX = max(MAX, con(n));
        }


    }
    cout<<MAX;

    return 0;
}
