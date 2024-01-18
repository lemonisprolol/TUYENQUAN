#include <bits/stdc++.h>

using namespace std;
#define long long int
const int maxarr = 1e3 + 5;
long a[maxarr][maxarr];
long c[maxarr][maxarr];
bool compare(int x, int y)
{
    return x > y;
}
int main()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CHEVUON.INP", "r", stdin);
    freopen("CHEVUON.OUT","w", stdout);
    int m, n;
    cin >> m >> n;
    vector<long>b;
    for(int i = 1; i <= m * n; i++)
    {
        int l;
        cin >> l;
        b.push_back(l);
    }
    sort(b.begin(), b.end(), compare);
    int pos = 0;
    for(int i = 1; i <=n; i += 2)
    {
        for(int j = 1; j <= m; j += 2)
        {
            for(int x = i; x <= i + 2 - 1; x++)
            {
                for(int y = j; y <= j + 2 - 1; y++)
                {
                    if(y > m || x > n) continue;
                    a[y][x] = b[pos];
                    pos++;

                }
            }
        }
    }
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
    int temp1 = m, temp2 = n;
    if(m % 2 != 0) temp1++;
    if(n % 2 != 0) temp2++;
    cout<<(temp1 * temp2)/ 4<<"\n";
    int sodem = 0;


    for(int i = 1; i <=n; i += 2)
    {
        for(int j = 1; j <= m; j += 2)
        {
            int filler = a[j][i] + 1;
            if(j + 2 > m && m % 2 == 0)
            {
                filler = c[j - 1][i] + 1;
                for(int x = i; x <= i + 2 - 1; x++)
                {
                    c[j - 1][x]++;
                }
            }
            for(int x = i; x <= i + 2 - 1; x++)
            {
                for(int y = j; y <= j + 2 - 1; y++)
                {
                    if(y > m || x > n) continue;
                    c[y][x] = filler;
                }
            }

        }

    }



    return 0;
}
