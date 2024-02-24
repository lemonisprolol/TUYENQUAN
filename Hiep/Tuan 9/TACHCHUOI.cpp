#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TACHCHUOI.INP", "r", stdin);
    freopen("TACHCHUOI.OUT", "w", stdout);
    string n;
    cin >> n;
    string so = "";
    string chu = "";
    for(int i = 0; i < n.size(); i++ )
    {
        if(n[i] >= '0' && n[i] <= '9')
        {
            so +=n[i];
        }
        else chu += n[i];
    }
    if(chu == "")
    {
        cout<<"-"<<endl;
    }
    else cout<<chu<<endl;
    if(so == "")
    {
        cout<<"-"<<endl;
    }
    else cout<<so<<endl;

    return 0;
}
