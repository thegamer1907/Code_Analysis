#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100

typedef long long ll;

ll v[MAXN];
priority_queue<ll> pq;

int main() {
  ios::sync_with_stdio(false);
  ll n, money;
  cin >> n >> money;
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  ll b = 1, e = n + 1, mid;
  while (b < e) {
    mid = (b + e) / 2;
    while (!pq.empty()) pq.pop();
    for (ll i = 1; i <= n; i++) {
      pq.push(-1 * (v[i] + i * mid));
    }
    ll price = 0;
    for (ll i = 0; i < mid; i++) {
      price -= pq.top();
      pq.pop();
    }
    if (price > money) {
      e = mid;
    } else {
      b = mid + 1;
    }
  }
  while (!pq.empty()) pq.pop();
  ll price = 0;
  for (ll i = 1; i <= n; i++) {
    pq.push(-1 * (v[i] + i * (b - 1)));
  }
  for (ll i = 0; i < b - 1; i++) {
    price -= pq.top();
    pq.pop();
  }

  cout << b - 1 << " " << price << endl;

  return 0;
}

