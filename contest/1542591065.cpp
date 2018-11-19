// Template version 1.1.
// 2017.9.25
#include<bits/stdc++.h>
#define PB push_back
#define EPB emplace_back
#define F first
#define S second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
int n;
string tar;
string all[110];
bool ans = false;

int main() {
  cin >> tar;
  cin >> n;
  for(int i = 1; i <= n; ++i)
    cin >> all[i];
  for(int i = 1; i <= n; ++i) {
    if (all[i][0] == tar[0] && all[i][1] == tar[1]) {
      ans = true;
      goto END;
    }
    if (all[i][0] == tar[1]) {
      for(int j = 1; j <= n; ++j) {
        if (all[j][1] == tar[0]) {
          ans = true;
          goto END;
        }
      }
    }
  }
END:
  if (ans)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
