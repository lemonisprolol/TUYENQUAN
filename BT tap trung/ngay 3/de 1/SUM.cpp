#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    freopen("SUM.inp","r",stdin);
    freopen("SUM.out","w",stdout);
    long long n , k , s = 0;
    long long r = 0;
    multiset <int> v;
    multiset <int> :: iterator it;
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        cin>>k;
        s += k;
        v.insert(k);
    }
    for(it = v.begin() ; it != v.end() ; it++){
        cout<<*it<<' ';
    }
    cout<<'\n'<<s<<'\n';
    int g;
    int trac = 0;
    while(trac <= s)
    {

        it = v.begin();
        g = *it;
        v.erase(it);
        it = v.begin();
        g += *it;
        trac += g;
        v.erase(it);
        v.insert(g);
        r += s;
    }
    cout<<r / 100<<','<<r % 100;
    return 0;
}
