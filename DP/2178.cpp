#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   set<int> st;
   int n, m, q;
   cin >> n >> m;
   int x[n], ans[n];
   for (int i = 1; i <= n; i++) {
      cin >> x[i];
   }
   for (int i = n; i > 0; i--) {
      st.insert(x[i]);
      ans[i] = st.size();
   }
   for (int i = 0; i < m; i++) {
      cin >> q;
      cout << ans[q] << "\n";
   }
}
