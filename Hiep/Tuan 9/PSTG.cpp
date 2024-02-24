#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("PSTG.INP", "r", stdin);
	freopen("PSTG.OUT", "w", stdout);

	string a;
	string b = "";
	cin >> a >> b;
	long long mul = 1;
	for(int i = 1; i <= b.size(); i++)
	{
		mul *= 10;
	}
	a += b;
	long long ans = 0;
	for(int i = 0; i < a.size(); i++)
	{
		int temp = a[i] - '0';
		ans = ans * 10 + temp;
	}
	cout<<ans / __gcd(ans, mul)<<" "<<mul / __gcd(ans, mul);

	return 0;
}
