#include <bits/stdc++.h>

using namespace std;

string so = "123579";
int x;
long long convert(string n)
{
    long long ggg= 0;
    for(int i = n.size() - 1; i >= 0; i--)
    {
        ggg = ggg * 10 + (int) (n[i] - '0');
    }
    return ggg;
}
bool checkprime(long long n)
{
    if(n < 2) return 0;
    if(n < 4) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    for(int i = 5; i <= sqrt(n); i+= 6)
    {
        if(n % i == 0 || n % (i + 2) == 0)
        {
            return 0;
        }
        
    }
    return 1;
    
}
bool sprime(string n)
{
    long long key = convert(n);
    while(key > 0)
    {
        if(!checkprime(key))
        {
            return 0;
        }
        key /= 10;
        
    }
    return 1;
    
}
vector<string> stor;
void sinhso(string n, int k)
{
    if(k == x)
    {
        if(sprime(n))
        {
            stor.push_back(n);
        }
        return;
    }
    for(int i = 0; i < so.size(); i++)
    {

        n[k] = so[i];
        

        sinhso(n, k + 1);

    }



}

int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SIEUNT.INP", "r", stdin);
    freopen("SIEUNT.OUT", "w", stdout);
    cin >> x;
    string g = "";
    while(g.size()< x)
    {
        g.push_back('0');
    }
    for(int i = 0; i < so.size(); i++)
    {
        g[0] = so[i];
        sinhso(g, 0 + 1);
    }
    cout<<stor.size()<<endl;
    for(int i = 0; i < stor.size(); i++)
    {
        cout<<stor[i]<<" ";
    }

    return 0;
}
