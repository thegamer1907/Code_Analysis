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

const i32 MOD = 60;

bool is_between(i32 x, i32 y, i32 p) {
  while (x != y and x != p) {
    x = (x + 1) % MOD;
  }
  return x == y;
}

int main() {
  i32 h, m, s, u, v;
  cin >> h >> m >> s >> u >> v;
  h = (h % 12) * 5;
  u = (u % 12) * 5;
  v = (v % 12) * 5;
  if (!is_between(u, v, h) and !is_between(u, v, m) and !is_between(u, v, s)) {
    cout << "yes" << endl;
    std::exit(0);
  }
  std::swap(u, v);
  if (!is_between(u, v, h) and !is_between(u, v, m) and !is_between(u, v, s)) {
    cout << "yes" << endl;
    std::exit(0);
  }
  cout << "no" << endl;
}
