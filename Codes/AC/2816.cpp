#include <bits/stdc++.h>
#define FOR(i, n) for (int i = 0; i < (n); ++i)
#define ROF(i, n) for (int i = (n) - 1; i >= 0; --i)
#define REP(i, n) for (int i = 1; i <= (n); ++i)
#define REP3(i, s, n) for (int i = (s); i <= (n); ++i)
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

vector<int> compute_z(const string &S) {
  // Z[i] = length of the longest substring
  // starting from S[i] that is a prefix of S
  vector<int> Z(S.size());
  for (int i = 1, L = 0, R = 0; i < S.size(); ++i) {
    if (i <= R)
      Z[i] = min(R - i + 1, Z[i - L]);
    while (i + Z[i] < S.size() && S[Z[i]] == S[i + Z[i]])
      ++Z[i];
    if (R < i + Z[i])
      L = i, R = i + Z[i] - 1;
  }
  return Z;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string S;
  cin >> S;
  int N = S.size();
  vector<int> Z = compute_z(S);
  int ans = 0, maxZ = 0;
  for (int i = 1; i < N; ++i) {
    if (i + Z[i] == N && maxZ >= Z[i]) {
      ans = Z[i]; break;
    }
    maxZ = max(maxZ, Z[i]);
  }

  if (ans) cout << S.substr(0, ans) << endl;
  else cout << "Just a legend" << endl;
  return 0;
}
