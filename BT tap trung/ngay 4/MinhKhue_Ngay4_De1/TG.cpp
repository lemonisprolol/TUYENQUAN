#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TG.INP", "r", stdin);
    freopen("TG.OUT", "w", stdout);
}
int main()
{
    inoutput();
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int af = 0;
        int bf = 8;
        int t;
        cin >> t;
        af = af + t;
        if(af >= 60)
        {
            af %= 60;
            bf += 1;
        }
        cout<<bf<<":";
        if(af < 10)
        {
            cout<<0<<af<<endl;
        }
        else cout<<af<<endl;


    }

    return 0;
}
