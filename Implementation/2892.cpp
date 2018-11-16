#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  set<char> st;
  char c;
  while (cin >> c) {
    if ('a' <= c && c <= 'z') {
      st.insert(c);
    }
  }
  cout << st.size() << '\n';
  return 0;
}