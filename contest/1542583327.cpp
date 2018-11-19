#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;

#define fi first
#define se second
#define eb emplace_back
#define all(x) x.begin(), x.end()

int const N = 100 * 1000 + 16;
int const M = 1000 * 1000 * 1000 + 7;

int n, k;
int a[32];

int main() {
  cin.tie(0);
  cin.sync_with_stdio(0);

  cin >> n >> k;
  for(int i = 0; i < n; ++i) {
    int x = 0;
    for(int j = 0; j < k; ++j) {
      int z;
      cin >> z;
      x <<= 1;
      x |= z;
    }
    a[x]++;
  }

  bool can = false;

  if(a[0])
    can = true;

  for(int i = 0; i < 20; ++i)
    for(int j = i+1; j < 20; ++j)
      can |= ((i & j) == 0 && a[i] && a[j]);

  cout << ((can) ? "YES" : "NO");
}