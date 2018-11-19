#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
const int N = 2020;

int main() {
  string pass;
  cin >> pass;
  int n;
  cin >> n;
  vector<string> vs(n);
  for(int i = 0 ; i < n; ++i) {
    cin >> vs[i];
    for (int j = 0; j + 1 < vs[i].size(); ++j) {
      if(pass[0] == vs[i][j] && pass[1] == vs[i][j + 1 ]) {
        cout << "YES\n";
        return 0;
      }
    }
    for (int j= 0 ; j <= i; ++j)
      if ((vs[i][0] == pass[1] && vs[j].back() == pass[0]) || (vs[j][0] == pass[1] && vs[i].back() == pass[0])) {
        cout << "YES\n";
        return 0;
      }
  }
  cout << "NO\n";
}
