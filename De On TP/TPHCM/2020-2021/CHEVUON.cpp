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
    for(int j = 1; j <= n; j += 2)
    {
        for(int i = 1; i <= m; i+= 2)
        {
            // really special case
            if(i + 2 > m + 1 && j + 2 > n + 1)
            {
                c[i][j] = c[i - 1][j - 1] + 1;
                cout<<c[i][j]<<" ";
                continue;

            }
            //case for overlapping section at i

            if(i + 2 > m + 1)
            {
                 int f = c[i - 1][j];
                for(int x = i; x >= i - 1; x--)
                {
                    for(int y = j; y <= j + 1; y++ )
                    {
                        c[x][y] = f + 1;
                        //cerr<<c[x][y]<<" "<<x<<" "<<y<<endl;
                    }
                }

            }
            //case for overlaping section at j
            if(j + 2 > n + 1)
            {
                 int f = c[i + 1][j - 1];

                for(int x = i; x <= i + 1; x++)
                {
                    for(int y = j; y >= j - 1; y--)
                    {
                        //cerr<<x<<" "<<y<<endl;

                        c[x][y] = f  + 1;
                    }
                }
            }
            //cases for m, n having no overlapping sections done
            if(i + 2 <= m + 1 && j + 2 <= n + 1)
            {
                 for(int x = j; x <= j  + 2 - 1; x++)
                {
                    for(int y = i; y <= i + 2 - 1; y++)
                    {
                        c[y][x] = a[i][j] + 1;
                    }
                }
            }
            cout<<c[i][j]<<" ";

           // cout<<c[i][j]<<" ";
        }
    }
    return 0;
}
