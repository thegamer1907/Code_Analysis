#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
  string s;
  cin >> s;
  ll i = 1, ans = 1;
  char pred = s[0];
  while (i < s.size())
  {
      if (ans == 7)
      {
          cout << "YES";
          return 0;
      }
      cerr << i << " " << ans << "\n";
      if (s[i] == pred)
      {
          ans++;
      }
      else
      {
          ans = 1;
          pred = s[i];
      }
      i++;
  }
  if (ans >= 7)
  {
      cout << "YES";
      return 0;
  }
  cout << "NO";
  return 0;
}
