#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, ai; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) { cin >> ai; a[ai - 1] = i + 1; }
  for (int i = 0; i < n; ++i) cout << a[i] << ' ';
  return 0;
}