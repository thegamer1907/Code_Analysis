#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <set>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <memory.h>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <cassert>

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;

#define MP make_pair
#define PB push_back
#define FF first
#define SS second

#define FORN(i, n) for (int i = 0; i <  (int)(n); i++)
#define FOR1(i, n) for (int i = 1; i <= (int)(n); i++)
#define FORD(i, n) for (int i = (int)(n) - 1; i >= 0; i--)

#define DEBUG(X) { cout << #X << " = " << (X) << endl; }
#define PR0(A,n) { cout << #A << " = "; FORN(_,n) cout << A[_] << ' '; cout << endl; }

// #define FL fflush(stdout)

#define MOD 1000000007
#define INF 2000000000
const int MAXN = 1e5 + 10;
const int MAXK = 4;

int GLL(LL& x) {
  return scanf("%lld", &x);
}

int GI(int& x) {
  return scanf("%d", &x);
}

int n, k;
//int mat[MAXN][MAXK];
unsigned int profiles[MAXN];
unsigned int cnts[1<<(MAXK+1)];
unsigned int pcnts[MAXK];
const bool debug = false;

void getcnts(int profile) {
//  printf("   profile: %d\n", profile);
  FORN(i, k) {
//    printf("   %d & %d = %d\n", profile, (1<<i), profile & (1<<i));
    pcnts[i] += (profile & (1<<i)) > 0;
  }
}

int main() {
  cin >> n >> k;

  memset(profiles, 0, sizeof profiles);
  memset(cnts, 0, sizeof cnts);

  FORN(i, n) {
    FORN(j, k) {
      bool know; cin >> know;
      profiles[i] |= (know << j);
    }
  }

  FORN(i, n) {
    cnts[profiles[i]]++;
  }

  if (cnts[0] > 0) {
    printf("YES\n");
    return 0;
  }

  for (unsigned int s = 1; s < 1<<16; s++) {
    if (debug) printf("\n/```````````````````````````````\\\nproblem subset %d\n", s);
    memset(pcnts, 0, sizeof pcnts);
    unsigned int subset = s;
    int n_problems = __builtin_popcount(s);

    bool skip = false;
    while (subset) {
      int pid = subset & (-subset);
      pid = sizeof(pid)*8-__builtin_clz(pid)-1;
      if (cnts[pid]) {
        if (debug) printf("        profile %d exists\n", pid);
        getcnts(pid);
      }
      else {
        if (debug) printf("        profile %d NOT in set\n", pid);
        skip = true;
      }
      subset ^= subset&(-subset);
    }

    if (skip) continue;

    if (debug) {
      printf("\ntotal # of problems: %d\n", n_problems); for (auto x : pcnts) printf("%d ", x); printf("\n\\______________________________/\n"); printf("\n");
    }
    bool works = true;
    for (auto x : pcnts) {
      works &= (x <= (n_problems/2));
    }
    if (works) {
      printf("YES\n");
      return 0;
    }
  }

  printf("NO\n");
  return 0;
}
