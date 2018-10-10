#include <bits/stdc++.h>
#define foi(i,k,n) for(int i = (int)k; i < (int)n; ++i)
using namespace std;
typedef long long ll;
const int MAXN = 5 + 100000;
int N;
ll S, arr[MAXN], cpy[MAXN];

pair<bool,int> go(int k) {
  foi(i,0,N) cpy[i] = arr[i] + (ll)(1+i)*(ll)k;
  sort(cpy, cpy + N);
  ll tot = 0;
  foi(i,0,k)
    tot += cpy[i];
  return {tot <= S, tot};
}

int main() {
  ios::sync_with_stdio(false);cin.tie(0);
  cin >> N >> S;
  foi(i,0,N) cin >> arr[i];
  int low = 0, high = N, mid, best;
  ll bestc;
  while(low <= high) {
    mid = (low + high) >> 1;
    auto p = go(mid);
    bool can = p.first;
    ll cost = p.second;
    if(can) {
      low = 1 + mid;
      best = mid;
      bestc = cost;
    } else
      high = mid - 1;
  }
  cout << best << ' ' << bestc;
  return 0;
}
