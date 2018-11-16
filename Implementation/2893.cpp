// author: gary
// created: 2018/04/24 09:38:21
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <limits>
#include <utility>
#include <functional>
#include <string>
#include <bitset>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
using namespace std;
#define SZ(x) ( (int) (x).size() )
#define ALL(c) (c).begin(), (c).end()
#define CNT(c, x) ((c).find(x) != (c).end())
typedef pair<int, int> pii;
typedef long long ll;
template<class T> bool cmax(T& a, T b) { if(a < b) { a = b; return true; } return false; }
template<class T> bool cmin(T& a, T b) { if(a > b) { a = b; return true; } return false; }

int used[256];
int main() {
  char c;
  while((c = getchar()) != EOF) {
    if(isalpha(c)) {
      used[(int)c] = 1;
    }
  }
  printf("%d\n", (int) count(used, used + 256, 1));
  return 0;
}
