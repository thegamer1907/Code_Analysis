#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <queue>

using namespace std;

int main() {
  int n, a;
  vector<int> v(3, 0);
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a; v[0] += a;
    cin >> a; v[1] += a;
    cin >> a; v[2] += a;
  }
  if (v[0] == v[1] && v[1] == v[2] && v[2] == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}
