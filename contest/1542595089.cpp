#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

#define PROBLEM "a"

int main() {
#ifdef LAPTOP
  freopen(PROBLEM".in", "r", stdin);
#endif
  int i, j, f, W;
  char pw[4], wd[108][4];
  while (scanf("%s", pw)==1) {
    scanf("%d", &W);
    for (i=0; i<W; i++)
      scanf("%s", wd[i]);
    f=0;
    for (i=0; i<W; i++)
      for (j=0; j<W; j++)
        if ((string(wd[i])+wd[j]).find(pw)!=string::npos)
          f=1;
    puts(f ? "YES" : "NO");
  }
  return 0;
}
