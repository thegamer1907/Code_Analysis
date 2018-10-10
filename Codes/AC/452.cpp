#include <bits/stdc++.h>

using namespace std;

int check(int x) {
  int d = 0;
  while (x > 0) {
    d += x % 10;
    x /= 10;
  }
  return d != 10;
}

int main()
{
  int n;
  int x;
  cin >> n;
  x = 10;
  for (int i = 0; i < n; i++) {
    x += 9;
    while (check(x)) x += 9;
  }
  cout << x;
}