#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DOISO.INP", "r", stdin);
    freopen("DOISO.OUT", "w", stdout);
}
string conten_to(int n)
{
    string ans = "";
    while(n > 0)
    {
        int temp = n % 2;
        //cout<<temp<<endl;
        ans = (char)(temp + '0') + ans;
        n /= 2;
    }
    return ans;

}
string cong(string s1, string s2)
{
    int x = s1.size() - 1;
    int y = s2.size() - 1;
    int du = 0;
    bool br = false;
    string ans = "";
    while(x >= 0 || y >= 0 ||!br)
    {
        int t1 = 0;
        int t2 = 0;
        if(x >= 0) t1 = s1[x] - '0';
        if(y >= 0) t2 = s2[y] - '0';
        int sum = t1 + t2 + du;
        du = 0;
        if(sum >= 10)
        {
            sum %= 10;
            du = 1;
        }
        //cout<<sum<<endl;
        ans = char(sum + '0') + ans;

        x--;
        y--;
        if(x < 0 && y < 0 && du == 0) br = true;
    }
    return ans;
}
string two_con(string n)
{
    string ans = "0";
    string pows = "1";
    for(int i = n.size() - 1; i >= 0; i--)
    {
        if(n[i] == '1')
        {
            ans = cong(ans, pows);

        }
        pows = cong(pows, pows);
    }
    return ans;
}
int main()
{
    inoutput();
    int ten;
    string two;
    cin >> ten >> two;
    cout<<conten_to(ten)<<endl;
    cout<<two_con(two);


    return 0;
}
