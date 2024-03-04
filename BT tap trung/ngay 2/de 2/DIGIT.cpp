#include <bits/stdc++.h>

using namespace std;

long long two(string n)
{
    long long ans = 0;
    long long pow = 1;
    for(int i = n.size() - 1; i >= 0; i--)
    {
        int temp = n[i] - 48;
        ans = ans + temp * pow;
        pow += pow;
    }
    return ans;
}
long long three(string n)
{

    long long ans = 0;
    long long pow = 1;
    for(int i = n.size() - 1; i >= 0; i--)
    {
        int temp = n[i] - 48;
        ans += temp * pow;
        pow *= 3;
    }
    return ans;

}
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DIGIT.INP", "r", stdin);
    freopen("DIGIT.OUT", "w", stdout);
    string base2;
    string base3;
    cin >> base2;
    cin >> base3;
    string temp1 = base2;
    string temp2 = base3;
    for(int i = 0; i < base2.size(); i++ )
    {
        for(int l = 0; l <= 1; l++)
        {
            base2[i] = (char) l + '0';
            for(int j = 0; j < base3.size(); j++)
            {
                for(int z = 0; z <= 2; z++)
                {
                    base3[j] = (char) z + '0';
                    long long b2 = two(base2);
                    long long b3 = three(base3);
                    //cout<<base2<<" "<<base3<<" "<<two(base2)<<" "<<three(base3)<<endl;
                    //line of debug

                    if(b2 == b3)
                    {
                        cout<<b2;
                        return 0;
                    }
                }
            }
            base3 = temp2;

        }
        base2 = temp1;
    }
    return 0;
}
