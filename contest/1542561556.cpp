#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  int h, m, s, t1, t2;
  scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
  if (t1 == t2) {
    cout << "YES" << endl;
    return 0;
  }
  m /= 5;
  if (m == 0) {
    m = 12;
  }
  s /= 5;
  if (s == 0) {
    s = 12;
  }
  bool first = true, second = true;
  int temp = t1;
  while (temp != t2) {
    if (h == temp || m == temp || s == temp) {
      first = false;
      break;
    }

    temp++;
    if (temp == 13) {
      temp = 1;
    }
  }

  while (temp != t2) {
    temp--;
    if (temp == 0) {
      temp = 12;
    }

    if (h == temp || m == temp || s == temp) {
      second = false;
      break;
    }
  }

  if (first || second) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
