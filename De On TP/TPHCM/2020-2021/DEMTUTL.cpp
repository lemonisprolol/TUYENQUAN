#include <bits/stdc++.h>

using namespace std;
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DEMTUTL.INP", "r", stdin);
    freopen("DEMTUTL.OUT", "w", stdout);
}
int a[256];

bool check1(string n)
{
    memset(a, 0, sizeof(a));
    for(int i = 0; i < n.size(); i++)
    {
        if(isalpha(n[i])== 1) n[i] += 32;
        a[(int)n[i]]++;
    }
    //int kitutrung = 0;
    int dem = 0;
    for(int i = 97; i <= 122; i++)
    {
        if(a[i] > 1)
        {
            return true;

        }
    }
    return false;
}

string allword = "";
int demtu = 0;
void solve(string s)
{
    string any = "" ;
    int start = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(i == s.size() -1 )
        {
            any += s[i];


        }
        if(s[i] == ' ' || i == s.size()- 1)
        {
            if(s[i - 1] != ' ')
            {
                start = i - 1;
            }
             //check loai 1
             //cout<<any<<" "<<i<<endl;
            if(check1(any))
            {
                //cout<<any<<endl;
                allword += any;
                allword.push_back(' ');
                demtu++;
            }
            string temp = "";
            if(start - any.size() >= 0)
            {
                for(int j = start - any.size() + 1; j <= start; j++)
                {
                    temp = temp + s[j];
                }

            }
            cout<<start<<" "<<temp<<endl;



            cout<<temp<<endl;
            if(temp.find(any) != -1) //check loai 2
            {
                //cout<<any<<" "<<temp<<endl;

                allword += any;
                allword.push_back(' ');
                allword += temp;
                allword.push_back(' ');
                demtu++;
            }
            any = "";
            continue;
        }
        any += s[i];

    }
}

int main()
{
    inoutput();
    string s;
    while(getline(cin, s))
    {
        solve(s);
    }
    cout<<demtu<<endl;
    cout<<allword;
    return 0;
}
