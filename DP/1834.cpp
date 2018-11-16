#include<bits/stdc++.h>

using namespace std;

int main (void) {
  string s;
  cin >> s;
  vector<int> a, b;
  for (int i = 0; i < (int)s.size() - 1; i++) {
    if (s[i] == 'A' && s[i + 1] == 'B') a.push_back(i);
    if (s[i] == 'B' && s[i + 1] == 'A') b.push_back(i);
  }
  bool ans = false;
  for (int i = 0; i < (int)a.size() && !ans; i++)
    for (int j = 0; j < (int)b.size() && !ans; j++)
      if (a[i] > b[j] + 1 || b[j] > a[i] + 1)
        ans = true;
  if (ans) printf("YES\n");
  else printf("NO\n");
  return 0;
}
