#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int n, m, q, x[N], ans[N], cnt[N];

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cin >> n >> m;
   for (int i = 0; i < n; i++) {
      cin >> x[i];
   }
   ans[n - 1] = 1;
   cnt[x[n - 1]]++;
   for (int i = n - 2; i >= 0; i--) {
      ans[i] = ans[i + 1] + (cnt[x[i]] == 0);
      cnt[x[i]]++;
   }
   for (int i = 0; i < m; i++) {
      cin >> q;
      cout << ans[q - 1] << "\n";
   }
}
