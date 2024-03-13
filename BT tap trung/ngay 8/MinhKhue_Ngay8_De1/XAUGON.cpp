#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("XAUGON.INP", "r", stdin);
    freopen("XAUGON.OUT", "w", stdout);
}
void solve(string s)
{
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i - 1])
        {
            s.erase(s.begin() + i);
            i--;
        }
    }
    cout<<s<<" ";
}
int main()
{
    inoutput();
    string s;
    while(cin >> s)
    {
        solve(s);
    }

    return 0;
}
