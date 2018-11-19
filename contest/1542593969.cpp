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

int GLL(LL& x) {
  return scanf("%lld", &x);
}

int GI(int& x) {
  return scanf("%d", &x);
}

vector<string> v;
int main() {
  string pw;
  cin >> pw;

  int n; GI(n);
  FORN(i, n) {
    string t;
    cin >> t;
    v.PB(t);
  }

  FORN(i, n) {
    FORN(j, n) {
      string t = v[i] + v[j];
      FORN(i, 3) {
        if (t[i] == pw[0] && t[i+1] == pw[1]) {
          printf("YES\n");
          return 0;
        }
      }
    }
  }
    
  printf("NO\n");
  return 0;
}
