#include <bits/stdc++.h>

using namespace std;

int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("XOASO.INP", "r", stdin);
    freopen("XOASO.OUT", "w", stdout);
    string s;
    cin >> s;

    int k;
    cin >> k;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < s.size(); j++)
        {
            if(k == 0)
            {
                cout<<s;
                return 0;
            }
            if(s[j] == (char) (i + '0'))
            {
                s.erase(s.begin() + j);
                k--;
            }

        }

    }

    return 0;
}
