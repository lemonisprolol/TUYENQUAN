#include <bits/stdc++.h>

using namespace std;

const int maxarr = 1e3 + 5;
string f[maxarr];
bool checkalpha(char n)
{
    if((int) n >= (int)'A' && (int) n <= 'Z') return 1;
    return 0;
}
int main()
{
    freopen("KITU.INP", "r", stdin);
    freopen("KITU.OUT", "w",stdout);
    string n;
    cin >> n;
    for(int i = 0; i < n.size(); i++)
    {
        if(!checkalpha(n[i]))
        {
            f[i] = "0";
            continue;
        }
        bool asse = false;
        for(int j = i - 1; j >= 0; j--)
        {
            if(f[j][f[j].size() - 1] < n[i] && f[j][f[j].size() - 1] != '0')
            {
                f[i] = f[j] + n[i];
                asse = true;
                break;

            }

        }
        if(asse == false) f[i] += n[i];
    }
    int MAX = 0;
    for(int i = 0; i < n.size(); i++)
    {
        if(f[i] == "0")
        {
            f[i] = "";
        }
        MAX = max(MAX, (int) f[i].size());
    }
    cout<<MAX;

    return 0;
}
