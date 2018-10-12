#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;

#define fi first
#define se second
#define eb emplace_back
#define all(x) x.begin(), x.end()

int const N = 5 * 100 * 1000 + 16;
int const M = 1000 * 1000 * 1000 + 7;

int n;
int a[N];

int main() {
  cin.tie(0);
  cin.sync_with_stdio(0);

  cin >> n;
  for(int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  sort(a, a+n);

  int best = 0;
  for(int l = 0, r = n; l <= r; ) {
    int m = l+r>>1;
    int idx = m;
    int k = 0;
    while(k < m && idx < n) {
      while(idx < n && a[k]*2 > a[idx]) idx++;
      if(idx == n)
        break;
      idx++;
      k++;
    }

    if(k == m)
      l = m+1, best = n-m;
    else
      r = m-1;
  }

  cout << best;
}