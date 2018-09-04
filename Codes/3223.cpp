//~ #pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("O3")
//~ #pragma GCC optimize("Ofast")
//~ #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//~ #pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

#define prec setprecision

typedef long long ll;
typedef unsigned long long llu;
template<typename T> T gcd(T m, T n) {while(n) {T t=m%n; m=n;n=t;};return m;}
template<typename T> T exgcd(T a, T b, T& sa, T& ta) {T q, r, sb=0, tb=1, sc, tc; sa=1,ta=0; if(b) do q = a/b, r = a-q*b, a = b, b = r, sc = sa-q*sb, sa = sb, sb = sc, tc = ta-q*tb, ta = tb, tb = tc; while(b); return a; }
template<typename T> T mul_inv(T a, T b) { T t1 = a, t2 = b, t3; T v1 = 1, v2 = 0, v3; T x; while (t2 != 1) x = t1/t2, t3 = t1 - x*t2, v3 = v1 - x*v2, t1 = t2, t2 = t3, v1 = v2, v2 = v3; return (v2 + b) % b; }
template<typename T> T powmod(T a, T b, T MOD) {if (b < 0) return 0; T rv = 1; while (b) (b % 2) && (rv = (rv*a) % MOD), a = a*a%MOD, b /= 2; return rv;}
template<ll n> struct BitSize{enum{Size=BitSize<n/2>::Size+1};};
template<> struct BitSize<0>{enum{Size=1};};
template<> struct BitSize<1>{enum{Size=1};};
#define BITSIZE(n) (BitSize<n>::Size)
#define BITMAX(n) (BitSize<n>::Size - 1)

#ifndef ONLINE_JUDGE
#define DEBUG 1
#else
#define DEBUG 0
#endif

template<typename TH> void _dbg(const char* sdbg, TH h) { cerr<<sdbg<<"="<<h<<"\n"; }
template<typename TH, typename... TA> void _dbg(const char* sdbg, TH h, TA... t) {
	while(*sdbg != ',')cerr<<*sdbg++; cerr<<"="<<h<<","; _dbg(sdbg+1, t...);
}
#ifdef DEBUG
#define debug(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#define debugv(x) {{cerr <<#x <<" = "; FORE(itt, (x)) cerr <<*itt <<", "; cerr <<"\n"; }}
#else
#define debug(...) (__VA_ARGS__)
#define debugv(x)
#define cerr if(0)cout
#endif

const int maxn = 1e5 + 7;
int n;
int a[maxn];

int main(int argc, char *argv[]) {
  std::cin.sync_with_stdio(false);std::cin.tie(nullptr);

  cin >> n;
  for(int i=1;i<=n;i++) cin >> a[i];

  int mi = a[1] / n * n;
  for(int i=1;i<=n;i++) mi = min(mi, a[i] / n * n);

  for(int i=1;i<=n;i++) a[i] -= mi;

  int res = 1, round = 0;
  
  while(a[res] > round) {
    res ++;
    round++;
    if(res == n+1) res = 1;
  }

  cout << res << endl; //@sub

  return 0;
}