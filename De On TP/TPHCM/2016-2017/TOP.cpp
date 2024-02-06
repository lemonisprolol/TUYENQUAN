#include <bits/stdc++.h>
#define long ong int
using namespace std;
void inoutput()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TOP.INP", "r", stdin);
    freopen("TOP.OUT", "w", stdout);
}
struct doi
{
    int h; //height of each part
    int gid; //id in g possesion;
    int v, z; // position (i, j)
};
bool comp(doi x, doi y )
{
    return x.h  > y.h;
}
const int maxarr = 1e2 + 5;
int a[maxarr][maxarr];
const int x[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int y[8] = {0, 1, 1, 1, 0, -1, -1, -1};
doi gg[maxarr * maxarr];

void explode(int z, int t)
{
    int val = a[z][t];
    a[z][t] = 0;

    for(int i =0; i < 8; i++)
    {

        if(a[z + x[i]][ t + y[i]] <=  val && a[z + x[i]][ t + y[i]] > 0)
        {
            explode(z + x[i], t + y[i]);


        }
    }
}
int main()
{
    inoutput();
    int m, n;
    cin >> m >> n;
    int gi = 0;

    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            gi++;
            gg[gi].h = a[i][j];
            gg[gi].v = i;
            gg[gi].z = j;
        }
    }
    sort(gg  + 1, gg + gi + 1, comp);

    int ans = 0;
    int gii = 0;


    for(int i = 1; i <= gi; i++)
    {
        if(gg[i].h > 0 && a[gg[i].v][gg[i].z] > 0)
        {
            ans++;
            explode(gg[i].v, gg[i].z);

        }
    }
    cout<<ans;
    return 0;
}
