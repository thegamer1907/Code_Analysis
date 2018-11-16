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

int main() {
  int n, t;
  cin >> n;
  int p[100];
  for (int i = 1; i <= n; ++i) {
    cin >> t;
    p[t - 1] = i;
  }

  for (int i = 0; i < n; ++i)
    cout << p[i] << " ";
  cout << endl;

  return 0;
}
