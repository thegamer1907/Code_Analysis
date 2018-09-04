#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <algorithm>
#include <memory.h>
using namespace std;

typedef long long LL;

LL n, m, k;

LL lt(LL y) {
  y--;
  LL tot = 0;
  for(int i = 1; i <= n; ++i) tot += min((LL)m, y/i);
  return tot;
}

LL bsearch(LL l, LL r) {
  while(l <= r) {
    LL m = l+r>>1;
    if(lt(m) < k) l = m+1;
    else          r = m-1;
  }
  return r;
}

int main() {
  cin >> n >> m >> k;
  cout << bsearch(1, n*m) << endl;
  return 0;
}

