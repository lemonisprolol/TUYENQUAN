#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("FNGTO.INP", "r", stdin);
    freopen("FNGTO.OUT", "w", stdout);
}
long long fib[60];
void fibs(){
    fib[1] = 1;
    fib[2] = 1;
    for(int i = 3; i <= 67; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}
bool checkprime(long long n)
{
    if(n < 2 ) return 0;
    if(n < 4) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    for(int i = 5; i <= sqrt(n); i+= 6)
    {
        if(n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}
int main()
{
    inoutput();
    fibs();
    int n;
    cin >> n;

    int i = 1;
    while(fib[i] <= n)
    {
        if(checkprime(fib[i])) cout<<fib[i]<<" ";

        i++;
    }

    return 0;
}
