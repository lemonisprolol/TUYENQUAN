#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("GIAIMA.INP", "r", stdin);
    freopen("GIAIMA.OUT", "w", stdout);
}
string n[55];
int main()
{
    inoutput();
    inoutput();
    int i = 1;
    while(cin >> n[i])
    {
        i++;
        if(n[i - 1][0] >= '0' && n[i - 1][0] <= '9') break;
    }
    for(int j = 1; j <= i - 1; j++)
    {
        int s;
        cin >> s;
        cout<<n[s]<<" ";
    }

    return 0;
}
