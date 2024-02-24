#include <bits/stdc++.h>

using namespace std;

void inouputfile()
{
	iostream::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("MATKHAU.INP", "r", stdin);
	freopen("MATKHAU.OUT", "w", stdout);
}

bool checkprime(char n)
{
	if(n == '2' || n == '3' || n == '5' || n == '7') return 1;
	return 0;
}
int main()
{
	inouputfile();
	string s;
	cin >> s;
	string ans = "";
	for(int i = 0; i < s.size(); i++)
	{
		string temp = "";
		if(checkprime(s[i])) temp += s[i];
		else continue;
		for(int j = i + 1; j < s.size(); j++)
		{
			if(checkprime(s[j]) && s[j] > s[j - 1] )
			{
				temp += s[j];
			}
			if(!checkprime(s[j]) || (s[j] <= s[j - 1]) || j == s.size()- 1)
			{
				if(ans.size() < temp.size())
				{
					ans = temp;
				}
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
