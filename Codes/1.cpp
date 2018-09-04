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
  int n; scanf("%d", &n);
  vector<int> a(n);
  for (int i = 0; i < n;  ++i)
    scanf("%d", &a[i]);
  sort(a.begin(), a.end());
  int x, q;
  scanf("%d", &q);
  for (int i = 0; i < q; ++i) {
    scanf("%d", &x);

    int left = 0, right = n - 1, result = 0;
    while (left <= right) {
      int mid = (left + right) / 2;
      if (a[mid] <= x) {
        result = mid + 1;
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }
    printf("%d\n", result);
  }
  return 0;
}
