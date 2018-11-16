#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second

typedef long long int LL;
typedef long double LD;

string a, b;
int x = 0, y = 0, z = 0;

int newton(int n, int k) {
  if (k == 0) return 1;
  if (k > n) return 0;
  if (k < 0) return 0;
  return newton(n-1, k-1) + newton(n-1, k);
}

int main() {
  cin >> a;
  cin >> b;
  int n = a.length();
  for (int i = 0; i < n; i++) {
    if (a[i] == '+') x++;
    if (a[i] == '-') x--;
    if (b[i] == '+') y++;
    if (b[i] == '-') y--;
    if (b[i] == '?') z++;
  }

  int req_diff = abs(y-x);
  if ((req_diff + z) % 2 != 0) {
    printf("0.0\n");
    return 0;
  }
  int poss = newton(z, (req_diff + z) / 2);
  double res = (double)poss / (1 << z);

  printf("%.10lf\n", res);

  return 0;
}
