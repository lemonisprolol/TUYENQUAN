#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("XEBUS.INP", "r", stdin);
    freopen("XEBUS.OUT", "w", stdout);
}
struct bus
{
    int down, up;
};
bus a[105];
int main()
{
    inoutput();
    int n;
    cin >> n;
    int k;
    cin >> k;
    int ans1 = k;
    for(int i = 1; i <= n - 2; i++)
    {
        cin >> a[i].down>> a[i].up;
        ans1 += a[i].up;
    }
    int fin;
    cin >> fin;

    cout<<ans1<<endl;
    int ans2 = k;
    for(int i = 1; i <= n- 2; i++)
    {
        ans2 += a[i].up - a[i].down;

    }
    cout<<ans2;


    return 0;
}
