#pragma GCC optimize "O3"

#define F first
#define S second

#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int h, m, s, t1, t2;

bool go(int bg, int ed) {
  for(; bg != ed; bg = (bg+1)%12) {
    if(h == bg)
      return false;
    if(m/5 == bg)
      return false;
    if(s/5 == bg)
      return false;
  }
  return true;
}

int main() {
  scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
  h %= 12;
  t1 %= 12;
  t2 %= 12;
  if(go(t1, t2) || go(t2, t1))
    puts("YES");
  else
    puts("NO");
}
