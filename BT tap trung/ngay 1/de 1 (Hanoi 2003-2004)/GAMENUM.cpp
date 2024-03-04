#include <bits/stdc++.h>

using namespace std;
void inoutputfile()
{
	iostream::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("GAMENUM.INP", "r", stdin);
	freopen("GAMENUM.OUT", "w", stdout);
}

int s(int n)
{
	int sum = 0;
	while( n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main()
{
	inoutputfile();
	int n;
	cin >> n;
	int sn = s(n);
	cout<<n % 10 <<" "<< sn<<endl;
	bool flag1 = false;
	bool flag2 = false;
	int ans;
	for(int i = 1; i <= n; i++)
	{
		if(s(i) == sn && !flag1)
		{
			cout<<i<<endl;
			flag1 = true;
		}
		if(s(n + i) == sn && !flag2)
		{
			ans = i + 1;
			flag2 = true;
		

		}
	}
	cout<<ans;


	return 0;
}
