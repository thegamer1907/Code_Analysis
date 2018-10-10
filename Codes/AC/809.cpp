#include <bits/stdc++.h>

using namespace std;

long long n, k, d = 0;

int main() {
  cin >> n >> k;
  while ((k & 1) == 0) {
    d++;
    k >>= 1;
  }
  cout << d + 1;
}