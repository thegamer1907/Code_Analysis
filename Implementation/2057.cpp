#include <bits/stdc++.h>

std::map <int, int> map;

int main () {
  int n;
  scanf ("%d", &n);
  for (int i = 0; i < n; i++) {
    int a;
    for (int j = 0; j < 3; j++) {
      scanf ("%d", &a);
      map [j] += a;
    }
  }
  for (auto i = map.begin (); i != map.end (); i++)
    if (i->second != 0) {
      printf ("NO\n");
      return 0;
    }

  puts ("YES");
  return 0;
}
