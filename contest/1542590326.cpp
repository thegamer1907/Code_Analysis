#include <bits/stdc++.h>

using namespace std;

int main() {
  string p; cin >> p;
  int n; cin >> n;
  string A[n];
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (i == j) {
        if (p[0] == A[i][0] && p[1] == A[i][1]) {
          puts("YES");
          return 0;
        }
        if (p[1] == A[i][0] && p[0] == A[i][1]) {
          puts("YES");
          return 0;
        }
      } else {
        if (p[0] == A[i][1] && p[1] == A[j][0]) {
          puts("YES");
          return 0;
        }
        if (p[0] == A[j][1] && p[1] == A[i][0]) {
          puts("YES");
          return 0;
        }
      }
    }
  }
  puts("NO");
}
