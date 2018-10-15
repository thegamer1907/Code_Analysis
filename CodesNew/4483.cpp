#include <bits/stdc++.h>

const int N = 5e5+10;
int n, cnt, arr[N];

int main () {
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
    scanf("%d", arr+i);
  std::sort(arr, arr+n);

  int i = 0, j = n/2;

  while (i < n/2 && j < n) {
    if (arr[i]*2 <= arr[j])
      cnt++, j++, i++;
    else
      j++;
  }

  printf("%d\n", n-cnt);
  return 0;
}
