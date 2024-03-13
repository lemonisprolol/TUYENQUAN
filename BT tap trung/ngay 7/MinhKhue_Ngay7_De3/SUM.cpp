#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SUM.INP", "r", stdin);
    freopen("SUM.OUT", "w", stdout);
}
const int maxarr = 15005;
int a[maxarr];
multiset<int> d;
int main()
{
    inoutput();
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    long long sum = 0;
    for(int i = 1; i <= n; i++)
    {
        cout<<a[i]<<" ";
        sum += a[i];
        d.insert(a[i]);
    }
    cout<<endl;
    cout<<sum<<endl;
    long long tracksum = 0;
    multiset<int> ::iterator it;
    long long fin = 0;
    while(tracksum < sum)
    {
        it = d.begin();
        long long ans = *it;
        d.erase(it);
        it =d.begin();
        ans += *it;
        d.erase(it);
        d.insert(ans);
        tracksum += ans;
        fin += ans;

    }
    fin += sum;
    cout<<fin / 100<<","<<fin % 10<<(fin /10) % 10;



    return 0;
}
