#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define mp make_pair

const ll INF = (ll)1e16;
int main() {
  ios_base::sync_with_stdio(false);
  ll n; cin >> n;
  ll bmin=INF; ll ind;
  for (ll i=0; i<n; i++) {
    ll a;
    cin >> a;
    ll t=0;
    while ((i+(n*t))<a) t++;
    ll b=i+(n*t);
    if (b<bmin) {
      bmin=b; ind=i+1;
    }
  }
  cout << ind << endl;
  return 0;
}
