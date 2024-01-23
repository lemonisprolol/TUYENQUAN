#include <bits/stdc++.h>

using namespace std;
void inouput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SODOCLAP.INP", "r", stdin);
    freopen("SODOCLAP.OUT", "w", stdout);
}

int a[100];
char findandfill(string n, int position, bool cases, char x)
{


    for(int i = (int) '0'; i <= (int)'9'; i++)
    {
        if(a[i] == 0)
        {
            if(cases == true)
            {
                if(x > (char) i)
                {
                    continue;
                }
            }
            return (char)i;
        }
    }

}
int main()
{
    inouput();
    string n;
    cin >> n;
    int k_pos;
    bool cases = true;
    for(int i = 0; i < n.size(); i++)
    {
        a[n[i]]++;
        //cout<<a[n[i]]<<endl;
        if(a[n[i]] == 2)
        {
            k_pos = i;
            a[n[i]]--;
            n[i] = findandfill(n, k_pos, cases, n[i]);
            a[n[i]]++;
            break;

        }
    }
    cases = false;
    for(int i = k_pos + 1; i < n.size(); i++)
    {
            n[i] = findandfill(n, k_pos, cases, n[i]);
            a[n[i]]++;

    }
    cout<<n;

    return 0;
}
