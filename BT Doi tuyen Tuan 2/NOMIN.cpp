#include <bits/stdc++.h>

using namespace std;

void inoutputfile()
{
    iostream::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("NOMIN.INP", "r", stdin);
    freopen("NOMIN.OUT", "w", stdout);
}
const int maxarr = 5e4 + 5;
long a[maxarr];
struct arr
{
    long value;
    int id;
};
arr bom[maxarr];
bool compare(arr a, arr b)
{
    return a.value < b.value;
}
void explode(int pos, int n)
{
    long temp = a[pos];
    a[pos] = -1;


    if(a[pos - 1] < temp &&  pos - 1 > 0 )
    {
        explode(pos - 1, n);
    }
    if(a[pos + 1] < temp && pos + 1 < n + 1)
    {
        explode(pos + 1, n);
    }

}
int main()
{
    inoutputfile();
    int n;
    cin >> n;
    //long MAX = LONG_MIN;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        bom[i].value = a[i];
        bom[i].id = i;
    }

    sort(bom + 1, bom + n + 1, compare);
    int sobom = 0;
    for(int i = n; i >=1 ; i--)
    {
        //cout<<bom[i].value<<" "<<bom[i].id<<endl;
        if(a[bom[i].id] != -1)
        {
            sobom++;
            explode(bom[i].id, n);
        }
        /*for(int i = 1; i <= n; i++)//testing
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;*/
    }
    cout<<sobom;



    return 0;
}
