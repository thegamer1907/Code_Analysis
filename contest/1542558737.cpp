#include <iostream>
#include <algorithm>

int main() {
  std::ios_base::sync_with_stdio(false);
  int h, m , s, t1,t2;

  std::cin >> h >> m >> s>> t1 >> t2;

  double hn,mn,t1n,t2n;
  mn = m + (double)s/60;
  hn = h*5;
  if(hn == 60) hn = 0;
  hn+= mn/60;

  t1n = t1*5;
  if(t1n == 60) t1n = 0;
  t2n = t2*5;
  if(t2n == 60) t2n = 0;

  double tnmax = std::max(t1n, t2n);
  double tnmin = std::min(t1n, t2n);

  bool between=false, outside = false;

  if(tnmax > hn && tnmax > mn && tnmax > s &&
      tnmin < hn && tnmin < mn && tnmin < s) {
    outside = true;
  }

  if((tnmin > hn || tnmax < hn) &&
      (tnmin > mn || tnmax < mn) &&
      (tnmin > s || tnmax < s))  {
    between = true;
  }

  if(between || outside) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }

  return 0;
}
