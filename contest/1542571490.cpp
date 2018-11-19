#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  char c1, c2, r1, r2;
  int n;
  scanf("%c%c", &c1, &c2);
  scanf("%d", &n);
  bool first = false, second = false, perfect = false;
  for (int i = 0; i < n; i++) {
    scanf(" %c%c", &r1, &r2);
    if (r1 == c1 && r2 == c2) {
      perfect = true;
      break;
    }
    if (r2 == c1) {
      first = true;
    }
    if (r1 == c2) {
      second = true;
    }
  }

  if (perfect || (first && second)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
