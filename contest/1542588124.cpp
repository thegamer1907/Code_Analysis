#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
const ll INF = 0x3f3f3f3f;

int main(){
  cin.sync_with_stdio(0);
  cin.tie(nullptr);

  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  a = a * 5 % 60;
  b %= 60;
  c %= 60;
  d = d * 5 % 60;
  e = e * 5 % 60;
  if (e < d) {
    swap(e, d);
  }
  priority_queue<int, vector<int>, greater<int>> Q;
  Q.push(a);
  Q.push(b);
  Q.push(c);
  Q.push(a+60);
  Q.push(b+60);
  Q.push(c+60);
  // cout << a << " " << b << " " <<  c << " "
    // << a + 60 << " " << b + 60 << " " << c + 60 << " " << d << " " << e << endl;
  while (Q.size() && Q.top() < d) {
    Q.pop();
  }
  if (Q.empty() || e <= Q.top()) {
    // cout << "1 " << Q.top() << endl;
    cout << "YES\n";
    return 0;
  }
  d += 60;
  while (Q.size() && Q.top() < e) {
    Q.pop();
  }
  if (Q.empty() || d <= Q.top()) {
    // cout << "2 " << Q.top() << endl;
    cout << "YES\n";
    return 0;
  }
  cout << "NO\n";
  return 0;


}