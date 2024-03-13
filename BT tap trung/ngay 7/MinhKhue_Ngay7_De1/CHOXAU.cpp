#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CHONXAU.INP", "r", stdin);
    freopen("CHONXAU.OUT", "w", stdout);
}
string cmp(string s1, string s2)
{
    for(int i = 0; i < max(s1.size(), s2.size()); i++)
    {
        if(s1[i] > s2[i]) return s1;
        if(s2[i] > s1[i]) return s2;
    }
    return s1;
}
int main()
{
    inoutput();
    string s1, s2;
    cin >> s1 >> s2;
    map<char, int> fre1;
    map<char, int> fre2;
    for(int i = 0; i < s1.size(); i++)
    {
        fre1[s1[i]]++;
    }
    for(int i = 0; i < s2.size(); i++)
    {
        fre2[s2[i]]++;
    }
    string s1fin = "";
    for(int i = 0; i < s1.size(); i++)
    {
        if(fre2[s1[i]] >= 1)
        {
            s1fin += s1[i];
        }
    }
    string s2fin = "";

    for(int i = 0; i < s1.size(); i++)
    {
        if(fre1[s2[i]] >= 1)
        {
            s2fin += s2[i];
        }
    }
    string ans = "";
    for(int i = 0; i < s1fin.size(); i++)
    {
        string temp = "";
        for(int j = i; j < s1fin.size(); j++)
        {
            temp += s1fin[j];
            if(s2fin.find(temp) != -1)
            {
                ans = cmp(ans, temp);

            }

        }
    }
    cout<<ans;

    return 0;
}
