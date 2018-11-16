#include <iostream>
#include <string>

using namespace std;

int main() {
  int count, seconds;
  string kids;
  cin >> count >> seconds;

  cin >> kids;

  for (int i = 0; i < seconds; i++) {
    int switched = 0;
    for (int k = 0; k < count - 1; k++) {
      if (switched) {
        switched = 0;
      } else if (kids[k] == 'B' && kids[k + 1] == 'G') {
        kids[k] = 'G';
        kids[k + 1] = 'B';
        switched = 1;
      }
    }
  }

  cout << kids << endl;

  return 0;
}
