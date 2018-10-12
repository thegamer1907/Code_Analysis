#include <bits/stdc++.h>
using namespace std;          

int n, m, a[104], ans1, ans2, max_num;                      
                         
int main (int argc, char const* argv[]) {
  ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);           
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    max_num = max(max_num, a[i]);
  }
  ans2 = max_num + m;
  for (int i = 0; i < n; i++) {
    if (a[i] == max_num) continue;
    else {
      int val = max_num - a[i];
      if (val == m || val > m) {
        a[i] += m;
        m = 0;
      } else if (val < m) {
        a[i] += val;
        m -= val;
      }
    }
  }
  if (m != 0) {
    int pos = 0;
    while (m--) {
      if (pos == n) pos = 0;
      a[pos]++;
      pos++;
    }
  }
  ans1 = *max_element(a, a + n);
  cout << ans1 << ' ' << ans2 << endl;   
  return 0;
}