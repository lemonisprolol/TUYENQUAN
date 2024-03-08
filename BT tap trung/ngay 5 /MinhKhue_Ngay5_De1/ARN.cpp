#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ARN.INP", "r", stdin);
    freopen("ARN.OUT", "w", stdout);
}
int main()
{
    inoutput();
    string n;
    cin >> n;
    string fi;
    cin >> fi;
    int ans = 0;
    for(int i = 0; i < n.size(); i++)
    {
        string temp = "";
        int lock = i + fi.size();
        for(int j = i; j < lock; j++)
        {
            temp += n[j];
            i++;

        }
        if(temp == fi)ans++;
    }
    cout<<ans;

    return 0;
}
