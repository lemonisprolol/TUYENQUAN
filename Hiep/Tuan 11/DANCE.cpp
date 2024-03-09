#include <bits/stdc++.h>

using namespace std;



const int maxarr = 1e6 + 5;
int a[maxarr];
int pre[maxarr];
int check[maxarr];
map<int, int> d;
map<int, int> :: iterator it;
int main()
{
    freopen("DANCE.INP", "r", stdin);
    freopen("DANCE.OUT", "w", stdout);
  int n;
  string s;
  cin >> n;
  cin >> s;
  int ai = 0;
  for(int i = 0; i < s.size(); i++)
  {
      ai++;
      if(s[i] == 'b') a[ai] = -1;

      if(s[i] == 'a')
      {
          a[ai] = 1;
      }
      //cout<<a[ai]<<" ";
  }
  int ans = 0;
  int tr = 0;
  for(int i = 1; i <= ai; i++)
  {
      pre[i] = pre[i - 1] + a[i];
      d[pre[i]]++;
  }
  d[0]++;

  for(it = d.begin() ; it != d.end(); it++)
  {
     if(it ->second > 1)ans += (it ->second - 1) * (it -> second ) / 2;
  }
  cout<<ans;








  return 0;
}

