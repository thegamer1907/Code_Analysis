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
int h, m, s, t1, t2;
bool ans = false;

int main() {
  cin >> h >> m >> s >> t1 >> t2;
  h %= 12;
  t1 %= 12;
  t2 %= 12;

  m *= 60;
  m += s;
  
  h *= 3600;
  h += m;

  m *= 12;
  s *= 720;

  t1 *= 3600;
  t2 *= 3600;

  // cout << "h : " << h << " m : " << m << " s : " << s << endl;
  // cout << "t1 : " << t1 << " t2 : " << t2 << endl;

  int total = 3600 * 12;
  for(int i = 1; i < total; ++i) {
    if ((t1 + i) % total == t2) {
      ans = true;
      break;
    }
    if ((t1 + i) % total == h || (t1 + i) % total == m || (t1 + i) % total == s)
      break;
  }
  for(int i = 1; i < total; ++i) {
    if ((t2 + i) % total == t1) {
      ans = true;
      break;
    }
    if ((t2 + i) % total == h || (t2 + i) % total == m || (t2 + i) % total == s)
      break;
  }
  if (ans)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
