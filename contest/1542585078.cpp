#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;

#define fi first
#define se second
#define eb emplace_back
#define all(x) x.begin(), x.end()

int const N = 100 * 1000 + 16;
int const M = 1000 * 1000 * 1000 + 7;



int main() {
  cin.tie(0);
  cin.sync_with_stdio(0);

  int h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;

  if(h == 12)
    h = 0;

  if(t1 == 12)
    t1 = 0;

  if(t2 == 12)
    t2 = 0;

  if(t1 > t2)
    swap(t1, t2);

  int cnt = 0;

  if(t1 <= h && h < t2)
    cnt++;

  if(t1 <= m/5 && m/5 < t2)
    cnt++;

  if(t1 <= s/5 && s/5 < t2)
    cnt++;

  if(cnt == 0 || 3 == cnt)
    cout << "YES";
  else
    cout << "NO";
}
