#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  set<int> problems;
  for (int i = 0; i < n; i++) {
    int val = 0;
    for (int j = 0; j < k; j++) {
      int a;
      scanf("%d", &a);
      if (a) val |= (1 << j);
    }
    problems.insert(val);
  }

  vector<int> probs(problems.begin(), problems.end());
  for (int bitmask = 1; bitmask < (1 << (int)probs.size()); bitmask++) {
    vector<int> choice;
    for (int j = 0; j < (int)probs.size(); j++) {
      if (bitmask & (1 << j)) {
        choice.push_back(probs[j]);
      }
    }

    bool ok = true;
    for (int j = 0; j < k; j++) {
      int counter = 0;
      for (int c : choice) {
        if (c & (1 << j)) {
          counter++;
        }
      }
      if (counter > (int)choice.size() / 2) {
        ok = false;
      }
    }
    if (ok) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
