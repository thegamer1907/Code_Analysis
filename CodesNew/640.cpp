#include <bits/stdc++.h>

using namespace std;

#define sz(a) a.size()
typedef long long ll;

int main() {
      int n, m; scanf("%d%d", &n, &m);
      vector <string> poll(n), vrag(m);
      int cnt = 0;
      map <string, int> d;
      for (int i = 0; i < n; ++i) {
            cin >> poll[i];
            d[poll[i]] = 1;
      }
      for (int i = 0; i < m; ++i) {
            cin >> vrag[i];
            cnt += d[vrag[i]];
      }
      if (cnt & 1) m--;
      if (n > m)
            cout << "YES";
      else
            cout << "NO";
      return 0;
}

