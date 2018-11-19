#pragma GCC optimize("Ofast")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("omit-frame-pointer")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>

#define sqr(a) (a)*(a)
#define fi first
#define se second
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define rust(a, b, c, d) sqrt(sqr(a - c) + sqr(b - d))

typedef long long ll;
const int MAXINT=2147483640;
const ll MAXLL=9223372036854775800LL;
const ll MAXN=1000000;

using namespace std;

ll binpow (ll a, ll n)
{
    ll res=1;
    n=n;
    while (n)
    {
        if (n&1) res*=a;
        a*=a;
        n >>= 1;
    }
    return res;
}
ll a[MAXN],n,i,j;
string s[MAXN],s1;
//set <ll> s;
int main()
{
  //freopen("1.in", "r", stdin);
  //freopen("1.out", "w", stdout);
  fast_io;
  srand(time(0));
  cin >> s1;
  cin >> n;
  for (i=1; i<=n; i++)
  {
      cin >> s[i];
      if (s[i]==s1)
      {
          cout << "YES";
          return 0;
      }
  }
  for (i=1; i<=n; i++)
  {
      if (s1[0]==s[i][1])
      {
          for (j=1; j<=n; j++)
          {
              if (s[j][0]==s1[1])
              {
                  cout << "YES";
                  return 0;
              }
          }
      }

  }
  cout << "NO";
  return 0;
}
