#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int N = (int) 1e5 + 5;

int a[N], b[N];

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d", a + i);
  }
  for (int i = 0; i < k; i++) {
    scanf("%d", b + i);
  }
  sort(b, b + k);
  reverse(b, b + k);
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (! a[i]) {
      a[i] = b[j++];
    }
  }
  bool ok = false;
  for (int i = 1; i < n; i++) {
    if (a[i] < a[i - 1]) {
      ok = true;
    }
  }
  if (ok) {
    puts("Yes");
  } else {
    puts("No");
  }
}
