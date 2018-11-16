#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>

using namespace std;

int f(int a, int b) {
  if (a <= 0 || b <= 0) return 0;
  if (a == 1 && b == 1) return 0;
  if (a == 1) return f(a + 1, b) + 1;
  if (b == 1) return f(a, b + 1) + 1;
  return max(f(a + 1, b - 2), f(a - 2, b + 1)) + 1;
}

int main() {
  std::ios::sync_with_stdio(false);
  int a, b; cin >> a >> b;
  int res = 0;

  while (a > 0 && b > 0) {
    if (a == 1 && b == 1) break;
    res++;
    if (a == 1) {
      a++;
      b-=2;
      continue;
    }
    if (b == 1) {
      b++;
      a-=2;
      continue;
    }
    if (a > b) {
      a -= 2;
      b++;
      continue;
    } else {
      a++;
      b -= 2;
      continue;
    }
  }

  cout << res << endl;
  return 0;
}
