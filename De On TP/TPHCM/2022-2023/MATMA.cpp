// AC solution

#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MATMA.INP", "r", stdin);
    freopen("MATMA.OUT", "w", stdout);
}
string ma[505];
int main()
{
    inoutput();
    int m, n, k , x;
    cin >> n >> m>> k >> x;
    string s;
    cin >> s;
    x--;
    for(int i = 1; i <= m; i++)
    {
        cin >> ma[i];
        sort(ma[i].begin(), ma[i].end());
    }
    vector<char> org;
    for(int i = m; i >= 1; i--)
    {
        org.push_back(ma[i][x % k]);
        x /= k;
    }
    int y = org.size() - 1;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '#')
        {
            s[i] = org[y];
            y--;
        }
    }
    cout<<s;




    return 0;
}
