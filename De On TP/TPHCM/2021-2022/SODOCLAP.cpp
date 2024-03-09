#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SODOCLAP.INP", "r", stdin);
    freopen("SODOCLAP.OUT", "w", stdout);
}
map<char, int> d;

string taoso(int anchor, string s)
{
    bool found = false;
    while(!found)
    {
        for(char j = '0'; j <= '9'; j++)
        {
            //cout<<s<<endl;


            if(s[anchor] < j && d[j] == 0)
            {
                s[anchor] = j;
                d[j]++;
                found = true;
                break;
            }
        }
        if(!found)
        {
            s[anchor] = '0';
            anchor--;
        }
    }



    for(int i = anchor + 1 ; i < s.size(); i++)
    {
        for(int j = '0'; j <= '9'; j++)
        {
            //cout<<i<<" "<<d[j]<<" "<<j<<endl;
            if(d[j] <= 0 )
            {
               // cout<<d[j]<<endl;
               d[s[j]]--;
                s[i] = j;


                d[j]++;
                break;

            }
        }



    }
    return s;

}
int main()
{
    inoutput();
    string s;
    cin >> s;
    s = '0' + s;
    int anchor = s.size() - 1;

    for(int i = 1; i < s.size(); i++)
    {
        d[s[i]]++;
        if(d[s[i]] > 1)
        {
            anchor = i;
            d[s[i]]--;
            break;

        }
    }


    string ans = taoso(anchor, s);
    if(ans[0] == '0')
    {
        ans.erase(ans.begin() + 0);
    }
    cout<<ans;


    return 0;
}
