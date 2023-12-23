#include <bits/stdc++.h>

using namespace std;

const int maxarr = 1e2 + 5;
long a[maxarr][maxarr];
long cot[maxarr];
long hang[maxarr];
int main()
{
	freopen("MAPHUONG.INP", "r", stdin);
	freopen("MAPHUONG.OUT", "w", stdout);
    int n;
    cin >> n;
    long cheoching = 0;
    long cheophu = 0;
    int x = 1, j = n;
    for(int i = 1; i <= n; i++)
    {
        for(int y = 1; y <= n; y++)
        {
            cin  >> a[i][y];
            cot[y] += a[i][y];
            hang[i] += a[i][y];
            if(i == y) cheoching += a[i][y];
            if(y == j && i == x)
            {
            	x++;
            	j--;
            	cheophu += a[i][y];
            }

        }
    }
    for(int i = 2; i <= n; i++)
    {
    	if(hang[i] != hang[i - 1])
    	{
    		cout<<0;
    		return 0;
    	}
    }
    for(int i = 2; i <= n; i++)
    {
    	if(cot[i] != cot[i - 1])
    	{
    		cout<<0;
    		return 0;
    	}
    }
    if(cheoching != cot[1]) {cout<<0; return 0;}
    if(cheophu != cheoching) {cout<<0; return 0;}
    cout<<1<<" "<<cot[1];



    return 0;
}
