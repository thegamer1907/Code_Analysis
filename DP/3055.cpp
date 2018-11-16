#include <bits/stdc++.h>

using namespace std;

const int md = (int) 1e9 + 7;

struct matrix_t {
  vector<vector<long long> > x;

  matrix_t() {
    x.assign(4, vector<long long>(4, 0));
  }

  matrix_t(const vector<vector<long long> >& x) : x(x) {}

  matrix_t operator * (const matrix_t& other) {
    matrix_t res;
    for (int i = 0; i < 4; ++i) {
      for (int j = 0; j < 4; ++j) {
        for (int k = 0; k < 4; ++k) {
          res.x[i][j] = (res.x[i][j] + x[i][k] * other.x[k][j]) % md;
        }
      }
    }
    return res;
  }
};

matrix_t pow(matrix_t a, int n) {
  if (n == 1) {
    return a;
  }
  matrix_t t = pow(a, n / 2);
  t = t * t;
  return n & 1 ? t * a : t; 
}

int main() {
  int n;
  scanf("%d", &n);
  if (n == 1) {
    puts("0");
    return 0;
  }
  matrix_t a;
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      if (i != j) {
        a.x[i][j] = 1;
      }
    }
  }
  a = pow(a, n - 1);
  printf("%lld\n", (a.x[0][3] + a.x[1][3] + a.x[2][3]) % md);
  return 0;
}