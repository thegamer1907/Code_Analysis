#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int baseline;
  int count = 0;
  while (k-- > 0 && cin >> baseline && baseline > 0) ++count;
  int a;
  while (cin >> a && a == baseline && baseline > 0) ++count;
  cout << count;
}