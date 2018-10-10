#include <bits/stdc++.h>
#include <unistd.h>
#define inf 1000000007
#define INF 1000000000000000007LL
#define endl cout<<'\n'
#define endr cerr<<'\n'
#define ll long long
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define st first
#define nd second
#define bit bitset<N>
#define pii pair<int,int>
#define pdd pair<double,double>
#define vi vector<int>
#define vd vector<double>
#define vll vector<long long>
#define vpii vector< pair<int,int> >
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define rep(i, n) for(int i=0; i<(n); ++i)
#define rep1(i, n) for(int i=1; i<=(n); ++i)
#define pv(x) cerr<<#x<<": "<<x<<'\n'
#define ps(x) cerr<<#x<<": ";for(auto q:(x)){cerr<<q<<" ";}cerr<<'\n'
#define pa(x, xs) cerr<<#x<<": ";for(int q=0; q<xs; ++q){cerr<<x[q]<<" ";}cerr<<'\n'
#define pal(x, xs) cerr<<'\n'<<#x<<":\n";for(int q=0; q<xs; ++q){cerr<<q<<": "<<x[q]<<'\n';}cerr<<'\n'
#define ppii(x, xs) cerr<<'\n'<<#x<<":\n";for(int q=0; q<xs; ++q){cerr<<q<<": "<<x[q].first<<" "<<x[q].second<<'\n';}cerr<<'\n'
#define pm(x, xn, xm) cerr<<'\n'<<#x<<":\n";for(int qa=0; qa<xn; ++qa){for(int qb=0; qb<xm; ++qb){cerr<<setw(5)<<x[qa][qb]<<" ";}cerr<<'\n';}cerr<<'\n'
using namespace std;
#define N 1000007
#define int long long
//#define double long double
//#define cerr if(0)cout

int n, m, mx = 0, a[N], pref[15*N], cnt[15*N];
bitset<15*N> prime;


void sieve(int n1)
{
  if (n1 < 2) return;

  rep1(i, n1) prime[i] = 1;

  for (int i=2; i*i<=n1; ++i)
  {
    if (prime[i])
      for (int j=i*i; j<=n1; j+=i)
        prime[j] = 0;
  }

  rep1(i, mx)
  {
    if (!prime[i]) continue;
    for (int q=1; q*i<=n1; ++q)
    {
      pref[i] += cnt[q*i];
    }
  }

  rep1(i, mx) pref[i] += pref[i-1];
}

void solve()
{
  cin>>n;
  rep1(i, n) cin>>a[i], mx = max(mx, a[i]), ++cnt[a[i]];

  sieve(mx+5);

  cin>>m; int l, r;
  while (m--)
  {
    cin>>l>>r;
    if (l > mx) {cout<<"0"; endl; continue;}
    r = min(r, mx);

    cout<<pref[r]-pref[l-1]; endl;
  }

}

int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(NULL);
//cout<<fixed<<setprecision(10);

  solve();

return 0;
}

