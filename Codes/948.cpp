#include <algorithm>
#include <iostream>
#include <string>

using ::std::cin;
using ::std::cout;
using ::std::endl;
using ::std::max;
using ::std::string;

int main() {
  ::std::ios_base::sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int maxBeauty = 0, beginA = 0, beginB = 0, bInACount = 0, aInBCount = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] == 'a') ++aInBCount;
    else ++bInACount;
    while (aInBCount > k) {
      aInBCount -= s[beginB] == 'a';
      ++beginB;
    }
    while (bInACount > k) {
      bInACount -= s[beginA] == 'b';
      ++beginA;
    }
    maxBeauty = max({maxBeauty, i - beginA + 1, i - beginB + 1});
  }
  cout << maxBeauty << endl;
  return 0;
}
