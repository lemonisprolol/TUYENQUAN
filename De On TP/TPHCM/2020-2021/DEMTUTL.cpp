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

bool check1(string n)
{
    int a[256] = {};

    memset(a, 0, sizeof(a));
    for(int i = 0; i < (int)n.size(); i++)
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
bool findcap(string a, string b)
{
    if(a.size() != b.size()) return 0;
    for(int i = 0; i < b.size(); i++)
    {
        if(isalpha(a[i]) == 1) a[i] += 32;
        if(isalpha(b[i]) == 1) b[i] += 32;
        if(a[i] != b[i]) return 0;
    }
    return 1;

}

string allword = "";
int demtu = 0;
void solve(string s)
{
    string any = "" ;
    int start = 0;
    for(int i = 0; i < (int)s.size(); i++)
    {
        
        if(s[i] == ' ' || i == s.size()- 1)
        {
            while(any[0] == ' ')
            {
                any.erase(any.begin() + 1);
            }
            while(any[any.size() - 1] == ' ')
            {
                any.erase(any.begin() + any.size());
            }
            if(i == s.size() -1 )
            {
                any += s[i];


            }

             //check loai 1
            //cout<<any<<" "<<check1(any)<<endl;

            if(check1(any) == true)
            {

                //cout<<any<<endl;
                //cout<<any<<endl;
                allword += any;
                allword += " ";
                demtu++;

            }
            string temp = "";
            string goc = "";
            //cout<< start - (int) any.size()<<" "<<i<<endl;


            if(start - (int) any.size() >= 0)
            {
                //cout<<"Entered "<<start<<endl;
                for(int j = start - 1; j >= start - (int)any.size(); --j )
                {
                    goc = s[j] + goc;
                    if(isalpha(s[j]) == 1) s[j] += 32;
                    temp = s[j] + temp;


                }

            }
            //cout<<temp<<endl;



            //cout<<temp<<endl;
            if(findcap(temp, any) == 1) //check loai 2
            {
                //cout<<any<<" "<<temp<<endl;

                allword += goc;
                allword.push_back(' ');
                allword += any;
                allword.push_back(' ');
                demtu++;
            }
            any = "";
            if(s[i - 1] != ' ')
            {
                start = i;
            }
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
