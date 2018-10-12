#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
  int n, m, vmax = 0;
  int arr[100];
  scanf("%d %d", &n, &m);
  for(int lx = 0;lx < n;lx++) {
    scanf("%d", arr+lx);
    vmax = max(vmax, arr[lx]);
  }
  int ans_max = vmax+m;

  for(int lx = 0;lx < n;lx++) {
    m -= (vmax-arr[lx]);
  }

  int ans_min = 0;
  if(m < 0) {
    ans_min = vmax;
  } else {
    ans_min = vmax + (m+n-1)/n;
  }

  printf("%d %d\n", ans_min, ans_max);
  return 0;
}
