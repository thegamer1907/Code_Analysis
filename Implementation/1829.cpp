#include <iostream>

using namespace std;

int main() {

  int n;
  int x, y, z;
  int rx = 0, ry = 0, rz = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x >> y >> z;
    rx += x;
    ry += y;
    rz += z;
  }

  if(rx == 0 && ry == 0 && rz == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}
