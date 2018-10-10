#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;



int main(void) {
  int k;
  scanf("%d", &k);
  for (int i = 1; ; ++i) {
    int x = i, sum = 0;
    while (x) {
      sum += x % 10;
      x /= 10;
    }
    if (sum == 10) {
      if (--k == 0) {
        printf("%d\n", i);
        return 0;
      }
    }
  }
}