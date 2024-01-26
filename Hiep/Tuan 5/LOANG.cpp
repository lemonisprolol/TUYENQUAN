#include <bits/stdc++.h>

using namespace std;

const int maxarr = 255;
bool a[maxarr][maxarr];
int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

int timduong(int i, int j, int length, int icu, int ycu, int m, int n)
{
    int soluong1 = 0;
    if(i + 1 > m || i - 1 <= 0 || j + 1 > n || j - 1 <= 0)
    {
        length++;
       // cout<< length;
        return length;
    }
    a[i][j] = 1;

    bool flag = false;
    int MIN = INT_MAX;
    length++;
    for(int l = 0; l < 4; l++)
    {
        if(a[i + x[l]][j + y[l]] == 0)
        {
            if(i + x[l] == icu && j + y[l] == ycu)
            {
                continue;
            }
            flag = true;
            MIN = min(MIN, timduong(i + x[l], j + y[l], length, i, j, m , n));
        }
    }
    return MIN;

}
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("LOANG.INP", "r", stdin);
    freopen("LOANG.OUT", "w", stdout);
    int m, n;
    cin >> m >> n;
    int k1, k2;
    cin >> k1 >> k2;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    int MIN = INT_MAX;
    for(int l = 0; l < 4; l++)
    {
        if(a[k1 + x[l]][k2 + y[l]] == 0)
        {

            MIN = min(MIN, timduong(k1 + x[l], k2 + y[l], 1, k1, k2, m , n));
        }
    }
    if(MIN == INT_MAX)
    {
        cout<<-1;
        return 0;
    }
    cout<<MIN;


    return 0;
}
