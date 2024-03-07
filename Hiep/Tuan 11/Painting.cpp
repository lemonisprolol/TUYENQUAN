#include <bits/stdc++.h>

using namespace std;
// everything in comment is my attempt to solve this problem.
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("PAINTING.INP", "r", stdin);
    freopen("PAINTING.OUT", "w", stdout);
}

string ans[3] = {"YELLOW", "RED", "BLUE"};
/*void solve1(int i, int j, int n)
{
    int x = i, y = j;
    int mid = ceil((float) n / (float)2);
    if(i <= mid)
    {
        i %= 3;
    }
    else
    {
        i -= (i - mid) * 2 + 1;
        i %= 3;
    }
    if(j <= mid)
    {
        j %= 3;
    }
    else
    {
        j -= (i - mid) * 2 + 1;
        j %= 3;
    }


    cout<<ans[min(i, j)]<<endl;
}
void solve2(int i, int j, int n)
{
    int mid = n / 2;
}*/
int main()
{
    inoutput();
    int n;
    cin >> n;
    int k;
    cin >> k;
    /*if(n % 2 != 0)
    {
        for(int i = 1; i <= k; i++)
        {
            int x, y;
            cin >> x >> y;
            solve1(x, y, n);

        }

    }
    if(n % 2 == 0)
    {
        for(int i = 1; i <= k; i++)
        {
            int x, y;
            cin >> x >> y;
            solve2(x, y, n);
        }
    }*/
    for(int i = 1; i <= k; i++)
    {
        int x, y;
        cin >> x >> y;
        int kc = min({x, y, n - x + 1, n - y + 1});
        cout<<ans[kc % 3]<<endl;

    }


    return 0;
}
