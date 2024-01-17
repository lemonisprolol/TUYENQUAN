#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MATMA.inp","r",stdin);
    freopen("MATMA.out","w",stdout);
    long long n , m , k , x , counter = 0;
    string s;
    cin>>n>>m>>k>>x>>s;
    string a[m];
    char c[m];
    x--;
    for(int i = 0 ; i < m ; i++)
        cin>>a[i];
    for(int i = m - 1 ; i >= 0 ; i--){
        c[i] = a[i][x % k];
        x /= k;
    }
    for(int i = 0; i < s.size() ; i++){
        if(s[i] != '#')
            cout<<s[i];
        else{
            cout<<c[counter];
            counter++;
        }
    }
    return 0;
}
