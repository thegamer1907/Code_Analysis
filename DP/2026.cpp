#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (auto& ob : a) {
    cin >> ob;
  }
  set<int> st;
  vector<int> sufixes(n);
  for (int i = n - 1; i >= 0; i--) {
    st.insert(a[i]);
    sufixes[i] = st.size();
  }
  while (m--) {
    int l;
    cin >> l;
    l--;
    cout << sufixes[l] << endl;
  } 
}

int main() {
  ios::sync_with_stdio(false);
#ifdef _DEBUG
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
  while (!cin.eof())
#endif
    solve();
  return 0;
}