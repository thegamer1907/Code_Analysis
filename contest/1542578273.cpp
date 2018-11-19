#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pii;

const int K = 18;

int n, m;
vector<string> s;
bitset<(1 << K)> c[201][K];
int kk[201];
string pref[201];
string suff[201];

bool good(bitset<(1 << K)> &c, int k) {
  int pos = (~c)._Find_first();
  if (pos < (1 << k)) return false;
  return true;
}

int get_mask(string s) {
  int res = 0;
  for (auto c : s) {
    res *= 2;
    if (c == '1') {
      res |= 1;
    }
  }
  return res;
}

int main() {
#ifdef LOCAL
  freopen("input", "r", stdin);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(0);    
  cin >> n;
  for (int i = 0; i < n; ++i) {
    string tmp; cin >> tmp;
    s.push_back(tmp);
    suff[i] = pref[i] = tmp;
    for (int j = 1; j < K; ++j) {
      for (int l = 0; l + j <= (int)tmp.size(); ++l) {
        c[i][j][get_mask(tmp.substr(l, j))] = 1; 
      }
    }
  }
  cin >> m;
  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    --a; --b;                                                  
    
    pref[n + i] = pref[a] + pref[b];
    while ((int)pref[n + i].size() > K) pref[n + i].pop_back();
    
    suff[n + i] = suff[a] + suff[b];
    reverse(suff[n + i].begin(), suff[n + i].end());
    while ((int)suff[n + i].size() > K) suff[n + i].pop_back();
    reverse(suff[n + i].begin(), suff[n + i].end());

    for (int j = 1; j < K; ++j) {
      c[n + i][j] = c[a][j] | c[b][j];
      for (int lt = 1; lt < j; ++lt) {
        if ((int)suff[a].size() >= lt && (int)pref[b].size() >= j - lt) {
          int msk = 0;
          string tmp = suff[a].substr((int)suff[a].size() - lt) + pref[b].substr(0, j - lt);
          assert((int)tmp.size() == j);
          for (auto cc : tmp) {
            msk *= 2;
            if (cc == '1') {
              msk |= 1;
            }
          }
          c[n + i][j][msk] = 1;
        }
      }
      if (good(c[n + i][j], j)) {
        kk[n + i] = j;
      }
    }
    cout << kk[n + i] << '\n';
  }
  return 0;
}