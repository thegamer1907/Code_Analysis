#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL mul(LL x, LL y, LL mod) {
  LL ans = 0, m = abs(x), s = 0, sgn = (x > 0) xor (y > 0)? -1: 1;
  for (x = abs(x), y = abs(y); y; y >>= 1, m <<= 1, m = m >= mod? m - mod: m)
    if (y&1) s += m, s = s >= mod? s - mod: s;
  return (s * sgn % mod + mod) % mod;
}

LL powmod(LL x, LL p, LL mod) {
  LL s = 1, m = x % mod;
  for (; p; m = mul(m, m, mod), p >>= 1)
    if (p&1) s = mul(s, m, mod);
  return s;
}
struct Hashing { // As default, SIGMA = [a-z]
  vector<LL> H, q_inv_pow;
  const LL primes[10] = {1730472629, 1730472637, 1730472673, 1730472677, 1730472697,
  1730472707, 1730472719, 1730472761, 1730472769, 1730472787};
  LL P, Q;
  Hashing() {}
  Hashing(string s, LL SIGMA_SIZE = 26) {
    int n = s.size();
    H.resize(n + 1), q_inv_pow.resize(n + 1);
    P = primes[rand() % 1], Q = SIGMA_SIZE + 1;
    q_inv_pow[0] = 1, q_inv_pow[1] = powmod(Q, P - 2, P);
    for (int i = 2; i <= n; ++i) q_inv_pow[i] = q_inv_pow[i - 1] * q_inv_pow[1] % P;
    for (LL i = 0, col = 1; i < n; ++i, col = col * Q % P)
      (H[i + 1] += (H[i] + (s[i] - 'a' + 1) * col)) %= P;
  }
  LL get_hash(int l, int r) { // [l, r)
    return (P + H[r] - H[l]) * q_inv_pow[l] % P;
  }
};
LL A[1000], B[1000];
char s[10000];
int main() {
  int n, m; scanf("%d%d", &n, &m);
  map<LL, int> mp;
  for (int i = 0; i < n; ++i) {
    scanf("%s", s);
    auto the_string = Hashing(s).get_hash(0, strlen(s));
    A[i] = the_string;
    mp[the_string] |= 1;
  } 
  for (int i = 0; i < m; ++i) {
    scanf("%s", s);
    auto the_string = Hashing(s).get_hash(0, strlen(s));
    B[i] = the_string;
    mp[the_string] |= 2;
  }
  set<LL> used;
  int player = 0;
  sort(A, A + n, [&](LL a, LL b) { return mp[a] > mp[b]; });
  sort(B, B + m, [&](LL a, LL b) { return mp[a] > mp[b]; });
  int ai = 0, bi = 0;
  while (true) {
    if (player == 0) {
      while (ai < n and used.count(A[ai])) ++ai;
      if (ai == n) return 0 * puts("NO");
      used.insert(A[ai]);
      ++ai;
    }
    else {
      while (bi < m and used.count(B[bi])) ++bi;
      if (bi == m) return 0 * puts("YES");
      used.insert(B[bi]);
      ++bi;
    }
    player ^= 1;
  }
}
