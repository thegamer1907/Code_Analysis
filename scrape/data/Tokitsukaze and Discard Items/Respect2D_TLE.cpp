#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<climits>
using namespace std;

typedef long long ll;

ll n, k;
int m;
ll p[100002];

int main() {
  while (scanf("%I64d%d%I64d", &n, &m, &k) != EOF) {
    for (int i = 0; i < m; i++) {
      scanf("%I64d", &p[i]);
    }

    ll head = p[0];
    ll idx = p[0] - 1;

    int pi = 0;
    int ans = 0;

    while (pi < m) {
      int rem = (k - 1) - (idx % k);

      int nextPi = pi;
      while (nextPi < m && head <= p[nextPi] && p[nextPi] <= head + rem) {
        nextPi++;
      }

      ans++;
      if (nextPi < m) {
        head = p[nextPi];
        idx = p[nextPi] - nextPi - 1;
      }
      pi = nextPi;
    }
    printf("%d\n", ans);
  }
}