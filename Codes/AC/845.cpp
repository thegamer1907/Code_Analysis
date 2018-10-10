#include <bits/stdc++.h>

#define ALL(x) x.begin(),x.end()
#define mp make_pair
#define vec(x) vector<x>
#define pii pair<int,int>

using namespace std;

typedef unsigned long long uint64;
typedef long long int64;
const int maxn = 1001;  

uint64 n, k;

int main() {
#ifndef ONLINE_JUDGE 
  freopen("input.txt", "r", stdin);
#else 
#endif
  cin >> n >> k;
  uint64 r = pow(2, n) - 1;
  uint64 l = 1, ans = n;
  while (l <= r) {
    uint64 m = (l + r) / 2;
    if (m == k)
      return cout << ans, 0;
    else if (m > k)
      r = m - 1, ans--;
    else
      l = m + 1, ans--;
  }
  cout << l;
  return 0;
}