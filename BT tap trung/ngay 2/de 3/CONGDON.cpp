#include <bits/stdc++.h>

using namespace std;
#pragma
// global declaration
string s;
string gg = "0";
void inoutfile()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CONGDON.INP", "r", stdin);
    freopen("CONGDON.OUT", "w", stdout);
}
string sum(string a, string b)
{
    string ans = "";
    int x = a.size() - 1;
    int y = b.size() - 1;
    int sodu = 0;
    bool lll = false;
    while(x >= 0 || y >= 0 || lll == false)
    {
        int t1 = 0;
        int t2 = 0;
        if(x >= 0) t1 = a[x] - '0';
        if(y >= 0) t2 = b[y] - '0';
        y--;
        x--;
        int s = t1 + t2 + sodu;
        sodu = 0;
        if( s >= 10)
        {
            s %= 10;
            sodu = 1;
        }
        ans = (char)(s + '0') + ans;
        if(x < 0 && y < 0 && sodu == 0) lll = true;
    }
    return ans;
}
void solve()
{
    for(int i = 0; i < s.size(); i++)
    {
        string temp = "";

        for(int j = i; j < s.size(); j++)
        {
            if( s[j] >= '0' && s[j] <= '9')
            {
                temp += s[j];
                i++;
            }
            else break;

        }

        gg = sum(gg, temp);

    }
    cout<<gg;

}

int main()
{
    inoutfile();
    cin >> s;
    solve();

    return 0;
}
