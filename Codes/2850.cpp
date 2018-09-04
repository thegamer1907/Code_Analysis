#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<int, ll> pil;
typedef pair<ll, int> pli;
typedef pair<ll, ll> pll;
typedef pair<db, db> pdd;

const int MOD = 1000000007;
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db EPS = 1e-10;

class Hash {
 private:
  int n;
  string s;
  vector<ll> pow26;
  vector<ll> hashCode;

  void initHash() {
    pow26[0] = 1LL;
    for (int i = 1; i < n; ++i) {
      pow26[i] = (pow26[i - 1] * 26) % MOD;
    }
    hashCode[0] = s[0] - 'a';
    for (int i = 1; i < n; ++i) {
      hashCode[i] = (hashCode[i - 1] * 26 + s[i] - 'a') % MOD;
    }
  }

 public:
  Hash(string _s) {
    s = _s;
    n = (int) s.size();
    hashCode.resize(n);
    pow26.resize(n);
    initHash();
  }

  inline ll getHash(int i, int j) {
    if (i == 0) {
      return hashCode[j];
    }
    return (hashCode[j] - pow26[j - i + 1] * hashCode[i - 1] + (ll) MOD * MOD) % MOD;
  }
};

int main() {
  // freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string str;
  cin >> str;
  int n = (int) str.size();
  Hash h(str);
  vector<pil> substring;
  for (int i = 0; i < n - 2; ++i) {
    ll prefix = h.getHash(0, i);
    int len = i + 1;
    ll suffix = h.getHash(n - len, n - 1);
    if (prefix == suffix) {
      substring.push_back({i, prefix});
    }
  }
  for (auto it = substring.rbegin(); it != substring.rend(); ++it) {
    int len = it->first + 1;
    ll hashing = it->second;
    for (int i = 1; i + len - 1 < n - 1; ++i) {
      ll temp = h.getHash(i, i + len - 1);
      if (temp == hashing) {
        for (int i = 0; i <= it->first; ++i) {
          cout << str[i];
        }
        return 0;
      }
    }
  }
  cout << "Just a legend";
}