// Rajat Kumar Singh

#include <bits/stdc++.h>
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;
using ld = long double;

inline int rd() {
	int x; char c;
	while ((c = getchar()) < '0' || c > '9');
	for (x = c - '0'; (c = getchar()) >= '0' && c <= '9'; ) x = x * 10 + c - '0';
	return x;
}

const int mod = 1000000007, maxN = 100005;

int main() {
  ll n, m, k;
  scanf("%lld %lld %lld", &n, &m, &k);
  ll lo = 1, hi = n * m;
  while (lo < hi) {
    ll cnt = 0, mid = (lo + hi) / 2LL;
    for (int i = 1; i <= n; ++i) cnt += min(m, mid / i);
    if (cnt >= k) hi = mid;
    else lo = mid + 1;
  }
  printf("%lld\n", lo);
  return 0;
}
