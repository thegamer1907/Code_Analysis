#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int &e: a) {
    cin >> e;
  }
  sort(a.begin(), a.end());
  
  int sum = 0;
  for (int e: a) {
    sum += e;
  }
  int min_k = max(a.back(), (sum + m + n - 1) / n);
  int max_k = a.back() + m;
  
  cout << min_k << ' ' << max_k << endl;  
}
