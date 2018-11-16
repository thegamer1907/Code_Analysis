#include <bits/stdc++.h>

#define pb push_back
#define F first
#define S second
#define ll long long
#define ld long double
#define endl '\n'

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    int ans = 0;
    for (char c = 'a'; c <= 'z'; c++) {
      int r = 1;
      int cnt = 0;
      if (c == s[0]) cnt++;
      for (int i = 0; i < n; i++) {
        while (r < n) {
          if (s[r] == c) cnt++;
          if (r - i + 1 - cnt > k) {
            break;
          }
          r++;
        }
        if (c == s[i]) cnt--;
        ans = max(ans, r - i);
      }
    }
    cout << ans;
    return 0;
}
