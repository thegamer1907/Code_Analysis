#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
const ll INF = 0x3f3f3f3f;

int main(){
  cin.sync_with_stdio(0);
  cin.tie(nullptr);

  string a, b;
  int n;
  cin >> a >> n;
  bool f1 = false, f2 = false;
  while (n--) {
    cin >> b;
    if (a == b) {
      cout << "YES\n";
      return 0;
    }
    if (b[1] == a[0])
      f1 = true;
    if (b[0] == a[1])
      f2 = true;
  }
  cout << ((f1 && f2) ? "YES\n" : "NO\n" ) ;
  return 0;
}