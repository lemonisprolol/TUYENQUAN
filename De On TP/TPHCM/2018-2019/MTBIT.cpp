#include <bits/stdc++.h>

using namespace std;
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MBIT.INP", "r", stdin);
    freopen("MBIT.OUT", "w", stdout);
}

bool compare(string a, string b)
{
    for(int i = 0; i < a.size(); i++)
    {
        if((int)a[i] > (int) b[i] )
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    inoutput();
    string s[256+ 1];
    int i = 0;
    while(cin >> s[i])
    {
        i++;
    }

    string largest_of_hang = s[1];

    for(int j = 0; j < i; j++)
    {
        if(compare(s[i], largest_of_hang))
        {
            largest_of_hang = s[i];
        }
    }
    string largest_of_cot = "";
    for(int j = 0; j < i; j++)
    {
        largest_of_cot += '0';
    }
    string cheochinh = "";
    string cheophu = "";
    int phu_j = 0, phu_y = i - 1;
    for(int j = 0; j < i; j++)
    {
        string temp = "";
        for(int y = 0; y < i; y++)
        {
            temp += s[y][i];
            if( y == j)
            {
                cheochinh += s[j][y];
            }
            if(j == phu_j && y == phu_y)
            {
                phu_j++;
                phu_y--;
                cheophu += s[j][y];

            }
        }
        if(compare(temp, largest_of_cot))
        {
            largest_of_cot = temp;
        }
    }
    string cothang = largest_of_hang;

    if(compare(largest_of_cot, largest_of_hang))
    {
        cothang = largest_of_cot;
    }
    string chinhphu = cheochinh;

    if(compare(cheophu, cheochinh))
    {
        chinhphu = cheophu;
    }
    string ans = cothang;

    if(compare(chinhphu, cothang))
    {
        ans = chinhphu;
    }
    cout<<ans;


    return 0;
}
