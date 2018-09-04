#include <bits/stdc++.h>

using namespace std;

void brute_force(int i, int sum, vector<int>& x, vector<int>& v, const int& dig, const int& k) {
  if ((int) v.size() == k) {
    return;
  }
  if (i == dig) {
    if (sum == 10) {
      int n = 0;
      for (int i = 0; i < (int) x.size(); ++i) {
        n = n * 10 + x[i];
      }
      v.push_back(n);
    }
    return;
  }
  for (int j = !i; j < 10; ++j) {
    if (sum + j <= 10) {
      x[i] = j;
      brute_force(i + 1, sum + j, x, v, dig, k);
      if ((int) v.size() == k) {
        return;
      }
    }
  }
}

int main() {
  int k;
  scanf("%d", &k);
  vector<int> v;
  int dig = 0;
  while ((int) v.size() < k) {
    vector<int> x(++dig);
    brute_force(0, 0, x, v, dig, k);
  }
  printf("%d\n", v.back());
  return 0;
}