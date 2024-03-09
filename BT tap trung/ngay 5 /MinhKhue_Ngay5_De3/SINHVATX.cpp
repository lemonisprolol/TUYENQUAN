#include <bits/stdc++.h>
using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SINHVATX.INP", "r", stdin);
    freopen("SINHVATX.OUT", "w", stdout);
}
struct gen
{
    long long male, female;
};
const int maxarr = 95;
gen a[maxarr];
int main()
{
    inoutput();
    int n;
    cin >> n;
    a[1].male = 1;
    a[1].female = 0;
    a[2].male = 0;
    a[2].female = 1;
    for(int i = 3; i <= n; i++)
    {
        a[i].male = a[i - 1].female;
        a[i].female = a[i - 1].male + a[i - 1].female;
    }
    cout<<a[n].male + a[n].female<<endl<<a[n].male;


    return 0;
}
