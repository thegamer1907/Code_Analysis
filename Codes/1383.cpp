#include <bits/stdc++.h>

using namespace std;

struct ceva{
  long long x, id;
} v[100002];
long long n, mij, S, K, SUM;

bool cmp (ceva x, ceva y) {
  return x.x + x.id * mij < y.x + y.id * mij;
}

void binary_search (long long &K, long long &SUM) {
  int st = 0, dr = n;
  while (st <= dr) {
    mij = (st + dr) / 2;
    long long s = 0;
    sort (v + 1, v + n + 1, cmp);
    for (int i = 1; i <= mij; i++)
       s += v[i].x + v[i].id * mij;
    if (s > S) {
      dr = mij - 1;
    }
    else {
       K = mij; SUM = s;
       st = mij + 1;
    }
  }
}
int main()
{
  cin >> n >> S;
  for (int i = 1; i <= n; i++) {
    cin >> v[i].x;
    //cin >> v[i].poz;
    v[i].id = i;
  }
  binary_search(K, SUM);
  cout << K << " " << SUM;
  return 0;
}
