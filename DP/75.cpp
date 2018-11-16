#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> parse_input(int q) {
  vector<int> res(q);
  for (int i = 0; i < q; ++i) {
    cin >> res[i];
  }
  return res;
}

int solve(vector<int>a, vector<int>b) {
  // a and b are sorted
  int i,j;
  i = j = 0;
  int ans = 0;
  while (i < a.size() && j < b.size()) {
    if (abs(a[i] - b[j]) <= 1) {
      ans++;
      i++, j++;
    } else {
      int smaller = min(a[i], b[j]);
      if (smaller == a[i]) {
        i++;
      } else {
        j++;
      }
    }
  }
  return ans;
}

int main() {
  int n, m;
  cin >> n;
  vector<int>a = parse_input(n);
  cin >> m;
  vector<int>b = parse_input(m);
  //cout << "parsed\n";
  
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int ans = solve(a,b);
  cout << ans << endl;
  return 0;
}