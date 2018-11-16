#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;

int main() {
  int k, n, w;

  cin >> k >> n >> w;

  int result;

  result = (1 + w) * w / 2 * k;

  int delta;

  delta = result - n;

  if (delta < 0) {
    delta = 0;
  }

  cout << delta;

  return 0;
}