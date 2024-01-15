#include <bits/stdc++.h>

using namespace std;

int to_inter(string t)
{
    int ans = 0;
    for(int i = 0; i < t.size(); i++)
    {
        ans = ans * 10 + (int)(t[i] - '0');
    }
    return ans;
}


int main()
{
    /*iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/
    freopen("ASCII.INP", "r", stdin);
    freopen("ASCII.OUT", "w", stdout);
    string s;
    cin>>s;
    int next = 0;
    for(int i = next; i < s.size(); i++)
    {
        string temp = "";
        int running;
        if(s[i] == '1') running = 3;
        if(s[i] == '9') running = 2;
        if(s[i] != '1' && s[i] != '9') { continue;}


        for(int j = i; j <= i + running -1 ; j++)
        {
            temp += s[j];
        }
        i+= running - 1;

        if(to_inter(temp) >= 97 && to_inter(temp) <= 122)
        {
            cout<<(char) to_inter(temp);
        }
    }
    return 0;
}
