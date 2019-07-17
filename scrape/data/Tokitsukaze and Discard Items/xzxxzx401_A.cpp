#include <cstdio>
#include <algorithm>
#include <map>
#include <queue>
#include <set>
#include <vector>
#include <array>
#include <string>
#include <iostream>
using namespace std;
const int MAXN = 1007;
vector<long long int> ps;
int main() {
  long long int n, m, k;
  cin >> n >> m >> k;
  ps.reserve(m);
  for (int i = 0;i<m;i++) {
    long long int tmp;cin >> tmp;
    ps.push_back(tmp);
  }
  long long int ptr = 0;
  long long int cnt = 0;
  long long int page = 0;
  long long int one = 0;
  while (cnt < ps.size()) {
    long long int tail = (long long int)(page + 1) * k + ptr;
    if (ps[ptr] <= tail) {
      auto nptr = upper_bound(ps.begin() + ptr, ps.end(), tail) - ps.begin();
      cnt += nptr - ptr;
      ptr = cnt;
      one++;
    } else {
      page = (ps[ptr] - tail - 1) / k + 1 + page;
    }
  }
  cout << one << endl;
}