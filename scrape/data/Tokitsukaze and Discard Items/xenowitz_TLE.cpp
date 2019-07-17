#include<bits/stdc++.h>
using namespace std;

#define fori(i,a,b) for (long int i = a; i <= b ; ++i)
#define ford(i,a,b) for(long int i = a;i >= b ; --i)
#define mk make_pair
#define mod 1000000007
#define pb push_back
#define vec vector<long long int>
#define ll long long
#define rnd mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count())
#define pi pair<int,int>
#define s second
#define f first


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n,m,k;
  cin >> n >> m >> k;
  vector<ll> p(m+1);
  fori(i,1,m)
    cin >> p[i];
  ll i = 1,l = 1, r = min(n,l + k-1);
  ll ans = 0;
  while (i <= m)
  {
    //cout << l << " " << r << " " <<  ans << " and i is first " << i << endl;
    ll cnt = 0;
    if (r == n)
    {
      ans += 1;
      break;
    }
    fori(j,i,m)
    {
      //cout << j << " j and pj " << p[j] << endl;
      if (j == m && p[j] <= r)
      {
        ans += 1;
        cout << ans << endl;
        exit(0);
      }
      else if (p[j] > r)
      {
        //j-=1;
        i = j;
        break;
      }
      else
        cnt += 1;
    }
    //cout << l << " " << r<< " count is " << cnt << endl;
    if (cnt == 0)
    {
      l = r+1;
      r = min(l + k-1,n);
    }
    else
    {
        r = min(r+cnt,n);
        ans += 1;
    }
    //cout << l << " " << r << " " <<  ans << " and i is " << i << endl;
  }
  cout << ans << endl;
  return 0;
}