#include <cstdio>
#include <iostream>
#include <set>
#include <cstring>
#include <string>
using namespace std;

const int N = 205;
const int L = 20;

string pref[N], suff[N], s;
set <int> rec[N][L + 3];

int main() {
  int n, l, m, a, b;
  scanf("%d", &n);
  for (int i = 1; i <= n; i ++) {
    cin >> s;
    l = s.length();
    if (l <= L) pref[i] = suff[i] = s;
    else {
      pref[i] = s.substr(0, L);
      suff[i] = s.substr(l - L, L);
    }
    for (int j = 1, base = 1; j <= L && j <= l; j ++, base <<= 1) {
      int sum = 0;
      for (int k = 0; k < j; k ++) {sum <<= 1; sum += s[k] - '0';}
      rec[i][j].insert(sum);
      for (int k = j; k < l; k ++) {
	sum -= base * (s[k - j] - '0');
	sum <<= 1;
	sum += s[k] - '0';
	rec[i][j].insert(sum);
      }
    }
  }
  scanf("%d", &m);
  for (int i = n + 1; i <= n + m; i ++) {
    scanf("%d%d", &a, &b);
    for (int j = 1; j <= L; j ++) {
      rec[i][j] = rec[a][j];
      for (set<int>::iterator it = rec[b][j].begin(); it != rec[b][j].end(); it ++) rec[i][j].insert(*it);
    }
    pref[i] = pref[a];
    suff[i] = suff[b];
    if (pref[a].length() < L)
      pref[i] += pref[b].substr(0, min(pref[b].length(), L - pref[a].length()));
    if (suff[b].length() < L) {
      int len = min(L - suff[b].length(), suff[a].length());
      suff[i] = suff[a].substr(suff[a].length() - len, len) + suff[b];
    }
    s = suff[a] + pref[b];
    for (int j = 1, base = 1; j <= L && j <= s.length(); j ++, base <<= 1) {
      int sum = 0;
      for (int k = 0; k < j; k ++) {sum <<= 1; sum += s[k] - '0';}
      rec[i][j].insert(sum);
      for (int k = j; k < s.length(); k ++) {
	sum -= base * (s[k - j] - '0');
	sum <<= 1;
	sum += s[k] - '0';
	rec[i][j].insert(sum);
      }
    }
    int ans = 0;
    for (int j = 1; j <= L; j ++)
      if ((int)rec[i][j].size() == (1 << j)) ans = j;
    printf("%d\n", ans);
  }
  // for (int i = 1; i <= n + m; i ++) {
  //   for (int j = 1; j <= 5; j ++) {
  //     for (set<int>::iterator it = rec[i][j].begin(); it != rec[i][j].end(); it ++) cout << (*it) << " " ;
  //     cout << endl;
  //   }
  // }
  return 0;
}
