#include <bits/stdc++.h>
using namespace std;
const int r=1e9+7;
long long t=1;
const int maxarr=1e5+1;
long long gt[maxarr];
long long lt(long long a,long long n)
{
    if(n==0)
        return 1;
    t=lt(a,n/2);
    t=((t%r)*(t%r))%r;
    if(n%2==0)
        return t;
    return ((t%r)*(a%r))%r;
}
long long th(long long k,long long n)
{
    long long B=gt[k]*gt[n-k];
    long long s=(gt[n]*lt(B,r-2)%r);
    return s;
}
int main()
{
    freopen("XOSO.inp","r",stdin);
    freopen("XOSO.out","w",stdout);
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a + 1,a+n+1);
    gt[0]=1;
    for(int i=1;i<=n;i++)
        gt[i]=(gt[i-1]*i)%r;
    long long kq=0;
    for(int i=k;i<=n;i++)
        kq=(kq+a[i]*th(k-1,i-1))%r;
    cout<<kq;
    return 0;
}
