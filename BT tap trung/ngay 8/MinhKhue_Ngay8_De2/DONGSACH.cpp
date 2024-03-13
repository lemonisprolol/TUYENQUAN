#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DONGSACH.INP", "r", stdin);
    freopen("DONGSACH.OUT", "w", stdout);
}
const int maxarr = 1e5 + 5;
int a[maxarr];

int idk(int mid, int n)
{
    int sum = 0;
    int cnt = 1;
    for(int i = 1; i <= n; i++)
    {
        if(sum + a[i] > mid)
        {
            cnt++;
            sum = 0;
        }
        sum += a[i];
    }
    if(sum > mid) cnt++;
    return cnt;
}
int ans = INT_MAX;
int binary(int n, int k, int low, int high)
{
    while(low < high)
    {
        int mid = (low + high) / 2;
        //cout<<low<<" "<<high<<" "<<idk(mid, n)<<endl;
        if(idk(mid, n) <= k)
        {
            ans = min(ans, mid);
            high = mid;
        }
        if(idk(mid, n) > k)
        {
            low = mid + 1;
        }


    }
    return ans;
}
int main()
{

    int n, k;
    cin >> n >> k;
    int MAX = INT_MIN;
    int sum = 0;
    for(int i = 1; i <= n;i++)
    {
        cin >> a[i];
        MAX = max(MAX, a[i]);
        sum += a[i];
    }
    if(k == 1)
    {
        cout<<sum;
        return 0;
    }
    cout<<binary(n, k, MAX, sum);

    return 0;
}
