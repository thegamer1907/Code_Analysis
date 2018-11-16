#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  a--; b--;
  int k = 1;
  while ((a /= 2) != (b /= 2)) {
    n /= 2;
    k++;
  }
  if (n == 2) cout << "Final!" << endl;
  else cout << k << endl;
}
