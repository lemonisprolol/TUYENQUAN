#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SNTLN.INP", "r", stdin);
    freopen("SNTLN.OUT", "w", stdout);
}
int converto(string n)
{
    int ans = 0;
    for(int i = 0; i < n.size(); i++ )
    {
        ans = ans * 10 + (int)(n[i] - '0');
    }
    return ans;
}
int checkprime(string x)
{
    int n = converto(x);

    if(n < 2) return 0;
    if(n < 4) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    for(int i = 5; i <= sqrt(n); i += 6)
    {
        if(n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}
int main()
{
    inoutput();
    string s;
    cin >> s;
    int MAX = 0;
    for(int i = 0; i < s.size(); i++)
    {
        string temp = "";
        for(int j = i; j < s.size(); j++)
        {
            if(s[j] >= '0' && s[j] <= '9')
            {
                temp += s[j];

                if(checkprime(temp)) MAX = max(MAX,converto(temp) );

            }

        }
    }
    cout<<MAX;

    return 0;
}
