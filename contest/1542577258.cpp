#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <random>
#include <algorithm>
#include <time.h>
#include <math.h>
#include <cmath>
#include <deque>
#include <queue>
#include <list>

using namespace std;

//mt19937 rnd(228);
//#define int long long

main()
{
  ios::sync_with_stdio(0);
  #ifdef ONPC
  freopen("t.in", "r", stdin);
  #endif

  string t;
  cin >> t;
  int n;
  cin >> n;
  string s[n];
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }
  if (n == 1)
  {
    if (s[0] == t || s[0][0] == t[1] && s[0][1] == t[0])
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
    return 0;
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      string x = s[i] + s[j];
      if (x[0] == t[0] && x[1] == t[1] || x[1] == t[0] && x[2] == t[1] || x[2] == t[0] && x[3] == t[1])
      {
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";
}


