#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  int n, m;
  cin >> n >> m;
  int pb = 0, eb = 0, co = 0;
  unordered_set<string> seen;
  string word;
  for (int i = 0; i < n; ++i) {
    cin >> word;
    seen.insert(word);
    ++pb;
  }
  for (int i = 0; i < m; ++i) {
    cin >> word;
    if (seen.find(word) != seen.end()) {
      ++co;
      --pb;
    } else {
      ++eb;
    }
  }
  
  if (pb < eb) {
    cout << "NO";
  } else if (pb > eb) {
    cout << "YES";
  } else {
    cout << (co % 2 == 1 ? "YES" : "NO");
  }
  cout << endl;
  
  return 0;
}