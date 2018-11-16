#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v;
  vector<int> t(n);
  for (auto& e : t) {
    cin >> e;
    if (e)
      v.push_back(-1);
    else 
      v.push_back(1);
  }

  int s = 0, start = 0, end = 0, atm = 0, best = 0;
  for (int i = 0; i<n; i++) {
    atm += v[i];
    if (atm > best) {
      best = atm;
      start = s;
      end = i;
    }
    if (atm < 0) {
      atm = 0;
      s = i+1;
    } 
  }
  int sol = 0;
  for (int i = 0; i<n; i++) {
    if (i >= start && i <= end) {
      t[i] = !t[i];
    }
    sol += t[i];
  }
  cout << sol << endl;
  return 0;
}
