#include <bits/stdc++.h>

using namespace std;

string con(int n)
{
    string ans = "";
    while(n > 0)
    {
        char temp = (char)(n % 2) + '0';
        ans = temp + ans;
        n /= 2;
    }
    return ans;
}
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ONE.INP", "r", stdin);
    freopen("ONE.OUT", "w", stdout);
    int n;
    cin >>n;
    for(int i = 1; i <= n; i++)
    {
        int l;
        cin >> l;
        string s = con(l);
        int res = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1') res++;

        }
        cout<<res<<endl;
    }

    return 0;
}
