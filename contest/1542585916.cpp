#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

using i32 = int_fast32_t;
using u32 = uint_fast32_t;
using i64 = int_fast64_t;
using u64 = uint_fast64_t;

namespace chrono = std::chrono;
using namespace std::string_literals;

#define all(c) (c).begin(), (c).end()

__attribute__((constructor))
void fast_iostream() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
}

int main() {
  u32 n, k;
  cin >> n >> k;
  std::vector<i32> num(1 << k, 0);
  std::vector<i32> rnum(1 << k, 0);
  for (u32 i = 0; i < n; ++i) {
    u32 a = 0;
    for (u32 j = 0; j < k; ++j) {
      u32 b; cin >> b;
      a |= b << j;
    }
    ++num[a];
    for (u32 ra = 0; ra < (1 << k); ++ra) {
      if ((a & ra) == 0) {
        ++rnum[ra];
      }
    }
  }

  for (u32 a = 0; a < (1 << k); ++a) {
    if (num[a] > 0 and rnum[a] > 0) {
      cout << "yes" << endl;
      std::exit(0);
    }
  }
  cout << "no" << endl;
}
