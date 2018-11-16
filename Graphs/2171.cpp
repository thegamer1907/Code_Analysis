#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second

typedef long long int LL;
typedef long double LD;

const int MAXN = 40005;

queue<int> Q;
int a, b;
int d[MAXN];

int main() {
  fill(d, d+MAXN, MAXN+1);
  cin >> a >> b;
  Q.push(a);
  d[a] = 0;
  while (!Q.empty()) {
    int x = Q.front();
    Q.pop();
    if ((2*x < MAXN) && (d[2*x] > MAXN)) {
      d[2*x] = d[x] + 1;
      Q.push(2*x);
    }
    if ((x-1 >= 0) && (d[x-1] > MAXN)) {
      d[x-1] = d[x] + 1;
      Q.push(x-1);
    }
  }
  cout << d[b] << "\n";
  
  return 0;
}
