#include <algorithm>
#include <array>
#include <cmath>
#include <deque>
#include <functional>
#include <iostream>
#include <limits>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
using ll = long long;
using ull = long long;

template <class T>
istream& operator>>(istream& in, vector<T>& a) {
  for (auto& ob : a) {
    in >> ob;
  }
  return in;
}

template <class T>
ostream& operator<<(ostream& out, const vector<T>& a) {
  for (size_t i = 0; i < a.size() - 1; i++) {
    out << a[i] << endl;
  }
  if (!a.empty()) out << a.back();
  return out;
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  cin >> a;
  int m;
  cin >> m;
  vector<int> q(m);
  cin >> q;

  vector<int*> qptr;
  for (auto& ob : q) {
    ob--;
    qptr.push_back(&ob);
  }
  sort(qptr.begin(), qptr.end(), [](auto a, auto b) { return *a < *b; });

  int j = 0;
  int sh = 0;
  for (int i = 0; i < a.size(); i++) {
    int l = sh;
    int r = sh + a[i];
    for (; j < qptr.size(); j++) {
      if (r <= *qptr[j]) {
        break;
      }
      if (l <= *qptr[j] && *qptr[j] < r) {
        *qptr[j] = i + 1;
      }
    }
    sh += a[i];
  }
  cout << q << endl;
}

int main() {
  ios::sync_with_stdio(false);
#ifdef _DEBUG
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
  while (!cin.eof())
#endif
    solve();
  return 0;
}
