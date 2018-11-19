#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pii;

string a;
int n;
vector<string> b;

int main() {
#ifdef LOCAL
  freopen("input", "r", stdin);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(0);    
  cin >> a >> n;
  b.resize(n);
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
    if (b[i] == a) {
      cout << "YES\n";
      return 0;
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      string c = "";
      c += b[i][1];
      c += b[j][0];
      if (c == a) {
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";
  return 0;
}