#include <bits./stdc++.h>

using namespace std;
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("WORK.INP", "r", stdin);
    freopen("WORK.OUT", "w", stdout);
}
const int maxarr = 1e6 + 5;

struct Time
{
    int one;
    int two;
};
Time a[maxarr];
int s[maxarr]; //best solution until s[i]

int main()
{
    //inoutput();
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].one;
    }
    for(int i = 1; i < n; i++)
    {
        cin >> a[i].two;
    }
    a[0].one = 0, a[0].two = 0;
    s[1] = a[1].one;
    for(int i = 2; i <= n; i++)
    {
        s[i] = min(s[i - 1] + a[i].one, s[i - 2] + a[i - 1].two);

    }
    cout<<s[n];

    return 0;
}
