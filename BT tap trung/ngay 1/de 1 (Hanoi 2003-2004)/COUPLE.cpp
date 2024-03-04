#include <bits/stdc++.h>

using namespace std;
struct info
{
    long long x, y;
};

vector<info> cap1;
vector<info> cap2;

void cd(long long a, long long b, bool cap)
{
    while(a != b)
    {
        info g;
        if(a < b)
        {
            swap(a, b);
            g.x = a;
            g.y = b;
            if(cap)cap1.push_back(g);
            else cap2.push_back(g);
        }
        else
        {
            a = a - b;
            g.x = a;
            g.y = b;
            if(cap) cap1.push_back(g);
            else cap2.push_back(g);
        }
    }
}

int main()
{
    freopen("COUPLE.INP", "r", stdin);
    freopen("COUPLE.OUT", "w", stdout);

    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    cd(a, b, 1);
    cd(c, d, 0);


    for(int i = 0; i < cap1.size(); i++)
    {
        for(int j = 0; j < cap2.size(); j++)
        {
            if(cap1[i].x == cap2[j].x && cap1[i].y == cap2[j].y)
            {
                cout<< j + 1 + i + 1;

                return 0;
            }

        }

    }
    cout<<-1;


    return 0;
}
