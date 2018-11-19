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


int n, k;

std::vector<int> a;


bool dfs(int i, int j, std::vector<int> c)
{
  if (j) {
    bool valid = true;

    for (int l = 0; l < k; l ++)
      if (c[l] > j / 2) {
        valid = false;
        
        break;
      }
  
    if (valid)
      return true;
  }

  if (i == a.size())
    return false;

  if (dfs(i + 1, j, c))
    return true;

  for (int l = 0, b = 1; l < k; l ++, b <<= 1)
    if (a[i] & b)
      c[l] ++;

  return dfs(i + 1, j + 1, c);
};


int main(int argc, char** argv)
{
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);

  std::cout << std::fixed << std::setprecision(6);

  std::cin >> n >> k;

  std::set<int> set;

  for (int i = 0; i < n; i ++) {
    int x, y = 0;
    
    for (int j = 0; j < k; j ++) {
      std::cin >> x;

      y += x << j;
    }

    set.insert(y);
  }

  a.assign(ALL(set));

  std::cout << (dfs(0, 0, std::vector<int>(k)) ? "YES" : "NO") << std::endl;;

  return 0;
}
