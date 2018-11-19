#include <bits/stdc++.h>
using namespace std;

const int MAXK = 15;

signed main() {
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<string> S(200);
  vector<set<int>> bag(200);
  for (int i = 0; i < N; ++i) {
    cin >> S[i];
    for (int j = 0; j < S[i].size(); ++j) {
      int u = 0;
      for (int k = 1; j + k <= S[i].size() && k <= MAXK; ++k) {
        u |= S[i][j + k - 1] - '0' << k - 1;
        bag[i].emplace(u | k << MAXK);
      }
    }
    if (S[i].size() > 2 * MAXK) {
      S[i] = S[i].substr(0, MAXK) + "X" + S[i].substr(S[i].size() - MAXK);
    }
  }
  int M;
  cin >> M;
  for (int i = 0; i < M; ++i) {
    int A, B;
    cin >> A >> B;
    S[N + i] = S[A - 1] + S[B - 1];
    bag[N + i].insert(bag[A - 1].begin(), bag[A - 1].end());
    bag[N + i].insert(bag[B - 1].begin(), bag[B - 1].end());
    for (int j = 0; j < S[N + i].size(); ++j) {
      int u = 0;
      for (int k = 1; j + k <= S[N + i].size() && k <= MAXK; ++k) {
        if (S[N + i][j + k - 1] == 'X') break;
        u |= S[N + i][j + k - 1] - '0' << k - 1;
        bag[N + i].emplace(u | k << MAXK);
      }
    }
    if (S[N + i].size() > 2 * MAXK) {
      S[N + i] = S[N + i].substr(0, MAXK) + "X" + S[N + i].substr(S[N + i].size() - MAXK);
    }
    int maxk = 1;
    for ( ; ; ++maxk) {
      bool ng = false;
      for (int s = 0; s < 1 << maxk; ++s) {
        if (!bag[N + i].count(s | maxk << MAXK)) {
          ng = true;
          break;
        }
      }
      if (ng) break;
    }
    cout << maxk - 1 << endl;
  }
  return 0;
}
