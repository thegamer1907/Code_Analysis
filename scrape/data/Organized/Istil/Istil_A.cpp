#include <stdio.h>

typedef long long ll;

ll a[100005];
int main(int argc, char const *argv[]) {
  ll n, k, j, sum = 0;
  int m, num = 0;
  scanf("%I64d %d %I64d", &n, &m, &k);
  ll h = k;
  for(int i = 0; i < m; i++) scanf("%I64d",&a[i]);
  for (int i = 0; i < m;) {
    while (a[i] <= h && i < m) {
      sum++;
      i++;
  //    printf("%I64d\n", sum);
    }
    if(sum == 0) {
      ll temp;
      temp = (a[i] - h) / k;
//      printf("temp %I64d\n", temp);
      h += temp * k + k;
      if ((a[i] - h) % k == 0) {
        h -= k;
      }
    //  printf("%I64d\n", h);
    }
    else {
      h += sum;
    //  printf("h %I64d %I64d\n", sum, h);
      num ++;
      sum = 0;
    }
  }
  printf("%d\n", num);
  return 0;
}