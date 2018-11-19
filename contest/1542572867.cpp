#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
using namespace std;
const int N= 1e6 + 5;
int main(){
  fast;
  string s,ss[105];
  cin >> s;
  ll t, chk = 0, ck = 0;
  cin >> t;
  for (int i = 0; i < t; ++i)
  {
    cin >> ss[i];
    if(ss[i][0] == s[0] && ss[i][1] == s[1])
      return cout << "YES", 0;
    if(ss[i][0] == s[1])
      chk = 1;
    if(ss[i][1] == s[0])
      ck = 1;
  }
  if(chk)
  for (int i = 0; i < t; ++i)
  {
    if(ss[i][1] == s[0])
      return cout << "YES", 0;
  }
  if(ck)
    for (int i = 0; i < t; ++i)
    {
      if(ss[i][0] == s[1])
        return cout << "YES", 0;
    }
    return cout << "NO", 0;
  return 0;
} 