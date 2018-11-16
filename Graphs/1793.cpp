#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int n, m, k, min, max;

  cin >> n;
  int boys[n];

  for (int i = 0; i < n; i++) {

    cin >> boys[i];

  }

  cin >> m;
  int girls[m];

  for (int i = 0; i < m; i++) {

    cin >> girls[i];

  }

  for (int j = 1; j < n; j++) {

    int key = boys[j];
    int i = j - 1;

    while (boys[i] > key && i > -1) {

      boys[i+1] = boys[i];
      boys[i] = key;
      --i;

    }

  }

  for (int j = 1; j < m; j++) {

    int key = girls[j];
    int i = j - 1;

    while (girls[i] > key && i > -1) {

      girls[i+1] = girls[i];
      girls[i] = key;
      --i;

    }

  }

  k = 0;

  for (int i = 0; i < n; i++) {

    for (int j = 0; j < m; j++) {

      if (abs(boys[i] - girls[j]) <= 1) {

        ++k;
        girls[j] = 102;
        break;

      }

    }

  }

  cout << k;

  return 0;

}