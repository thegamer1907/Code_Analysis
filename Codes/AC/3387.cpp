#include <algorithm>
#include <iostream>

using ::std::cin;
using ::std::cout;
using ::std::endl;
using ::std::min;

long long getEatenByVasya(long long n, long long k) {
  long long eatenByVasya = 0;
  while (n) {
    eatenByVasya += min(n, k);
    n -= min(n, k);
    n -= n / 10;
  }
  return eatenByVasya;
}

int main() {
  long long n;
  cin >> n;
  long long a = 1, b = n;
  while (a <= b) {
    long long s = (a + b) / 2;
    if (2 * getEatenByVasya(n, s) >= n)
      b = s - 1;
    else
      a = s + 1;
  }
  cout << a << endl;
  return 0;
}

