
#include <bits/stdc++.h>

using namespace std;

int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long n;
    cin >> n;
    string ans = "";
    while(n > 0)
    {
        char temp = (char) (n % 2 + '0');
        ans = temp + ans;
        n /= 2;
    }
    //cout<<ans;
    while(ans.size() < 5)
    {
        ans = '0' + ans;
    }
    for(int i = 0; i < ans.size() - 1; i++)
    {
        if(ans[i] == '1') cout<<"A"<<" ";
        else cout<<"O ";
    }
    if(ans[ans.size() - 1] == '1') cout<<"A";
    else cout<<"O";
    return 0;
}
