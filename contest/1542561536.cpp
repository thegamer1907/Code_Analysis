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
const int MAXN = 210;

int GLL(LL& x) {
  return scanf("%lld", &x);
}

int GI(int& x) {
  return scanf("%d", &x);
}

int n, m;
const int sz = 15;
vector<string> str;
vector<string> prefix;
vector<string> suffix;
vector< vector< set<LL> > > dp(MAXN, vector<set<LL> >(sz+1, set<LL>()));

void calc(int i, string &s) {
  int len = s.size();
  FOR1(l, min(len, sz)) {
    LL val = 0;
    int idx = 0;
    int bit = 0;
    for (; idx < l; idx++) {
      if (s[idx] == '1') {
        val |= 1 << bit;
      }
      bit++;
    }

    dp[i][l].insert(val);
    idx = 1;

    while (idx + l <= s.size()) {
      val >>= 1;
      val |= (s[idx+l-1] == '1') << (l - 1);
      dp[i][l].insert(val);
      idx++;
    }
  }
}

int getmax(int i) {
  bool ok = true;
  FOR1(l, sz) {
    if (dp[i][l].size() < (1<<l)) return l-1;
  }
  return sz;
}

int main() {
  GI(n);
  str.resize(n);
  prefix.resize(n + 100);
  suffix.resize(n + 100);

  FORN(i, n) {
    string s;
    cin >> s;
    str[i] = s;

    if (s.size() > sz) {
      prefix[i] = s.substr(0, sz);
      suffix[i] = s.substr(s.size()-sz, sz);
    } else {
      prefix[i] = s;
      suffix[i] = s;
    }

    calc(i, s);
  }

  GI(m);
  FORN(i, m) {
    int a, b;
    GI(a); GI(b);
    a--; b--;
    string s = suffix[a] + prefix[b];

    FOR1(l, sz) {
      for (auto x : dp[a][l]) dp[n+i][l].insert(x);
      for (auto x : dp[b][l]) dp[n+i][l].insert(x);
    }

    calc(n+i, s);

    if (suffix[b].size() == 15) suffix[n + i] = suffix[b]; 
    else {
      string t = suffix[a] + suffix[b];
      suffix[n+i] = t.substr(max((int)t.size()-sz, 0), min(sz, (int)t.size()));
    }
    if (prefix[a].size() == 15) prefix[n + i] = prefix[a];
    else {
      string t = prefix[a] + prefix[b];
      prefix[n+i] = t.substr(0, min(sz, (int)t.size()));
    }
  }

  FORN(i, m) {
    printf("%d\n", getmax(n+i));
  }

//  FORN(i, n+m) {
//    printf("\n\n=====================id: %d\n", i);
//    FOR1(l, sz) {
//      printf("len: %d ---------------------\n", l);
//      FORN(j, 1<<3) {
//        if(dp[i][l][j]) printf("%d: %d\n", j, dp[i][l][j]);
//      }
//    }
//  }
    
  return 0;
}
