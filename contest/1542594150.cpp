#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <sstream>
#include <unordered_map>
#include <vector>


#define INF 4000000000000000000LL
#define MOD 1000000007
#define ALL(x) std::begin(x), std::end(x)


int main(int argc, char** argv)
{
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);

  std::cout << std::fixed << std::setprecision(6);

  std::string s, a[111];

  std::cin >> s;
  
  int n;

  std::cin >> n;

  bool found = false;

  for (int i = 0; i < n; i ++) {
    std::cin >> a[i];

    if (a[i] == s)
      found = true;
  }

  for (int i = 0; i < n; i ++)
    for (int j = 0; j < n; j ++)
      if (a[i][1] == s[0] && a[j][0] == s[1]) {
        found = true;

        goto endloop;
      }

 endloop:

  std::cout << (found ? "YES" : "NO") << std::endl;

  return 0;
}
