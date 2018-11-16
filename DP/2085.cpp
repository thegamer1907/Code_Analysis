#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
  int n, m;
  cin >> n >> m;
  vi a(n);
  vi dp(n);
  set<int> s;
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = n-1; i >= 0; i--) {
    s.insert(a[i]);
    dp[i] = s.size();
  }
  for(int i = 0; i < m; i++) {
    int l;
    cin >> l;
    cout << dp[l-1] << endl;
  }
  return 0;
}
