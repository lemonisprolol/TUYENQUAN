#include <bits/stdc++.h>
using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("XAUKB.INP", "r", stdin);
    freopen("XAUKB.OUT", "w", stdout);
}
int d[200];
int main()
{
    inoutput();
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        d[s[i]]++;
    }
    int nums = 0;
    int avail = 26;
    for(int i = 97; i <= 122; i++)
    {
        if(d[i] > 1)
        {
            nums += d[i] - 1;
        }
        if(d[i] >= 1)
        {
            avail--;
        }
    }
    if(nums > avail)
    {
        cout<<-1;
    }
    else cout<<nums;


    return 0;
}
