#include<bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define ld long double
#define all(x) x.begin(), x.end()
#define geoma cout.precision(15); cout << fixed;

void File()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
}

#define int long long

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

  int n,m,k;

  cin >> n >> m >> k;

  int r = k;
  int it = 0;
  vector<int>p(m);

  for(int i = 0;i < m;i++)
    cin >> p[i];

  int ans = 0, kek = 0;
  bool ok = 0;

  while(p[it] <= r)
  {
    it++;
    kek++;
    ok = 1;
    if(it == p.size())
      break;

  }
  if(it != 0)
    ans++;

  r += kek;
  while(it < p.size())
  {
    bool ok = 0;
    int was = it;
    if(p[it] > r)
    {
        int dob = (p[it] - r)  / k;
        if(dob * k + r < p[it])
          dob++;

        r += dob * k;
    }
    kek = 0;
    while(p[it] <= r)
    {
        ok = 1;
      it++;
      kek++;
      if(it >= p.size())
        break;

    }
    if(ok)
      ans++;

    r+=kek;
  }
  cout << ans;
}