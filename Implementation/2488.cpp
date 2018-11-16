#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
  int n, a, b, cur = 0, res = 0;
  cin >> n;
  while (n-- > 0) {
    cin >> a >> b;
    cur = cur - a + b;
    res = max(res, cur);
  }
  cout << res << endl;
  return 0;
}
