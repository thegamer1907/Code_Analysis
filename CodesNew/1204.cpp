#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define mp make_pair

const ll INF = (ll)1e16;
int main() {
  ios_base::sync_with_stdio(false);
  ll n; cin >> n;
  ll a[100005];
  for (ll i=0; i<n; i++) cin >> a[i];
  ll ans=INF, ind=-1;

  for (ll i=0; i<n; i++) {
    ll cross=i;
    while (cross<a[i]) cross+=n;
    if (cross<ans) {
      ans=cross; ind=i;
    }
  }
  cout << ind+1 << endl; // 1-index
  return 0;
}
