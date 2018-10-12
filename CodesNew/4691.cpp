#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define rep(i,n)	for(ll i=0;i<n;++i)
#define all(v)	v.begin(),v.end()
#define inf 1000000010
#define pii pair<ll,ll>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define MAXN 110
#define bsize 555
#define sz(v) v.size()
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
ll power(ll x,ll y, ll md){ll res = 1;x%=md;while(y>0){if(y&1)res = (res*x)%md;x = (x*x)%md;y = y>>1;}return res%md;}

int a[500010];

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%d", a + i);
  sort(a, a + n);
  int l = 0, rr = n / 2;
  while (l < rr) {
    int mid = (l + rr + 1) >> 1;
    bool ok = true;
    for (int i = 0; i < mid; i++)
      if (2 * a[i] > a[n - mid + i]) {
        ok = false;
        break;
      }
    if (ok) l = mid;
    else rr = mid - 1;
  }
  printf("%d\n", n - l);
  return 0;
}