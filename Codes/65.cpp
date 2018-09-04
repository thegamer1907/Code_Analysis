#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  int n;
  cin >> n;
  ll total = 0;
  vector<ll> v(n), cnt(n, 0), sum(n+1, 0);
  for(auto& i: v) {
    cin >> i;
    total += i;
  }
  if(total%3 != 0) {
    cout << "0\n";
    return 0;
  }
  ll t = 0;
  for(int i = n-1; i >= 0; i--) {
    t += v[i];
    if(t == total/3) cnt[i]++;
    sum[i] = sum[i+1] + cnt[i];
  }
  ll ans = 0;
  t = 0;
  for(int i = 0; i < n-2; i++) {
    t += v[i];
    if(t == total/3) {
      ans += sum[i+2];
    }
  }
  cout << ans << endl;
}
