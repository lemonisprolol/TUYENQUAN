#include <bits/stdc++.h>
using namespace std;
set<string> ans;
int main()
{
    freopen("MM.INP", "r", stdin);
    freopen("MM.OUT", "w", stdout);
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        string g = "";
        for(int j = i; j < s.size(); j++)
        {
            if(s[j] >= '0' && s[j] <= '9')
            {
                i++;
                g += s[j];

            }
            else break;
        }
        while(g[0] == '0')
        {
            g.erase(g.begin() + 0);
        }
        ans.insert(g);
    }
    cout<<ans.size() - 1;

    return 0;
}
