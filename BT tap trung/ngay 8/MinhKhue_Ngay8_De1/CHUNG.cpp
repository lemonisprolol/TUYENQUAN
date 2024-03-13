#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CHUNG.INP", "r", stdin);
    freopen("CHUNG.OUT", "w", stdout);
}
string cmp(string s1, string s2)
{
    if(s1.size() > s2.size()) return s1;
    if(s1.size() < s2.size()) return s2;
    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] < s2[i]) return s2;
        if(s1[i] > s2[i]) return s1;
    }
    return s1;
}
int main()
{
    inoutput();
    string s1, s2;
    cin >> s1 >> s2;
    string ans = "0";
    for(int i = 0; i < s1.size(); i++)
    {
        string temp = "";
        for(int j = i; j < s1.size(); j++)
        {
            if(s1[j] >= '0' && s1[j] <= '9')
            {
                temp += s1[j];
            }
            if(s2.find(temp) != -1)
            {
                ans = cmp(ans, temp);


            }
        }
    }
    cout<<ans;
    return 0;
}
