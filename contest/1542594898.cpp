// author: gary
#include <bits/stdc++.h>
using namespace std;
#define SZ(x) ( (int) (x).size() )
typedef pair<int, int> pii;
typedef long long ll;
template<class T> bool cmax(T& a, T b) { if(a < b) { a = b; return true; } return false; }
template<class T> bool cmin(T& a, T b) { if(a > b) { a = b; return true; } return false; }

int n;
string s;
string t;

int main() {
  cin >> s >> n;
  bool ok = false;
  bool ok1 = false;
  bool ok2 = false;
  for(int i = 0; i < n; i++) {
    cin >> t;
    ok |= t == s;
    ok1 |= t[1] == s[0];
    ok2 |= t[0] == s[1];
  }

  cout << ((ok || (ok1 && ok2)) ? "YES" : "NO") << endl;
  return 0;
}
