#include <bits/stdc++.h>

using namespace std;

long long factorial(int n)
{
    long long ans = 1;
    for(int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

long long f(string s)
{
    long long sum = 0;
    for(int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }
    long long sum2 = 0;
    long long mul = 1;
    for(int i = 1; i <= s.size(); i++)
    {
        sum2 += mul;
        mul *= 10;
    }
    return sum * factorial(s.size() - 1) * sum2;

}
int main()
{
    string s;
    cin >> s;
    long long l = f(s);
    bool sfs = false;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0')
        {
            sfs = true;
            s.erase(s.begin() + i);
        }
    }
    if(sfs)
    {
        cout<<l - f(s);


    }
    else cout<<l;





    return 0;
}
