#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n, t;
  scanf("%d%d", &n, &t);
  char str[100];
  scanf("\n%s", str);
  for (int i = 0; i < t; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (str[j] == 'B' && str[j + 1] == 'G') {
        str[j] = 'G';
        str[j + 1] = 'B';
        j++;
      }
    }
  }
  printf("%s", str);
  return 0;
}
