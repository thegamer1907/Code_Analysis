#include <bits/stdc++.h>

int main () {
  int n, t;
  scanf ("%d%d", &n, &t);
  std::string str;
  std::cin >> str;
  for (int i = 0; i < t; i++) {
    for (int j = 0; j < n - 1; j++)
      if (str[j] == 'B' && str[j + 1] == 'G') { 
        std::swap (str[j], str[j + 1]);
        j++;
      }
  }

  std::cout << str << '\n';
  return 0;
}
