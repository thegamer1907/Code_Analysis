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
  std::string s; cin >> s;
  i32 n; cin >> n;
  std::vector<std::string> a(n);
  for (i32 i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (i32 i = 0; i < n; ++i) {
    for (i32 j = 0; j < n; ++j) {
      std::string t = (a[i] + a[j]).substr(1, 2);
      if (a[i] == s or a[j] == s or t == s) {
        cout << "yes" << endl;
        std::exit(0);
      }
    }
  }
  cout << "no" << endl;
}
