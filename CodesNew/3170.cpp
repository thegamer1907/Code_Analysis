#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define eb emplace_back
#define ll long long
#define pii pair < int, int >
#define fr first
#define sc second
#define mk make_pair
#define sz(s) (int)s.size()
#define all(s) s.begin(), s.end()
#define ok puts("ok");
#define whatis(x) cerr << #x << " = " << x << endl;
#define pause system("pause");
#define random (rand() ^ (rand() << 15))

const int N = (int)3e5 + 7;
const int inf = (int)1e9 + 7;

int a[N];
int pref[N];

main() {
  int n, k;
  scanf("%d %d", &n, &k);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &a[i]);
    pref[i] = pref[i - 1];
    pref[i] += (a[i] == 0);
  }
  int ans = (pref[n] != n);
  int in = -1;
  for (int i = 1; i <= n; i++) {
    int pos = lower_bound(pref, pref + i + 1, pref[i] - k) - pref;
    if (i - pos > ans) {
      ans = i - pos;
      in = pos;
    }
  }
  if (in != -1) {
    for (int i = in + 1; i <= n && k > 0; i++) {
      if (a[i] == 0) {
        k--;
      }
      a[i] = 1;
    }
  }
  cout << ans << endl;
  for (int i = 1; i <= n; i++) {
    cout << a[i] << ' ';
  }
}
