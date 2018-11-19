#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

#define f(i, a, b) for(int i = a; i < b; i++)
#define clr(a, b) memset(a, b, sizeof a)
#define all(v) (v).begin(), (v).end()

typedef long long ll;

bool masks[16];
int main() {
  int n, k; cin >> n >> k;
  clr(masks, false);
  f(i, 0, n) {
    int mask = 0;
    f(j, 0, k) {
      int val; scanf("%d", &val);
      mask = mask * 2 + val;
    }
    masks[mask] = true;
  }
  bool can = false;
  f(i, 0, (1 << k)) if (masks[i])
    f(j, 0, (1 << k)) if (masks[j])
      if ((i & j) == 0)
        can = true;
  cout << (can ? "YES" : "NO") << endl;
}

/*
0 0 0 0 => YES
1 1 1 1 => nunca usar

14 mascaras
m1 & m2 = 0 => YES

1 0 0 1
0 0 0 1
1 1 1 0


0 0 1
0 1 0
0 1 1
1 0 0
1 0 1
1 1 0


0 0 1
0 1 0
0 1 1
1 0 1
1 1 0
*/
