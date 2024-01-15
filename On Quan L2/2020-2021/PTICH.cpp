#include <bits/stdc++.h>

using namespace std;

void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("PTICH.INP", "r", stdin);
    freopen("PTICH.OUT", "w", stdout);
}
int main()
{
    inoutput();
    int n;
    cin >> n;
    if(n == 3)
    {
        cout<<2<<"\n"<<"1 2";
        return 0;
    }

    int i = 2;
    vector<int> s;

    while(n > 0)
    {

        n = n - i;
        //cout<<i<<" "<<n<<endl;
        s.push_back(i);
        i++;
        if(n - i < 0)
        {
            //cout<<"break"<<endl;
            break;
        }
    }
    //cout<<n<<endl;
    int j = s.size() - 1;

    while(n != 0)
    {
        s[j]++;
        n--;
        j--;
        if(j == -1) j = s.size() - 1;
    }
    cout<<s.size()<<"\n";
    for(int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
    }

    return 0;
}
