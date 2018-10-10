#include <bits/stdc++.h>
using namespace std;

#ifndef _WIN32
    #define getchar getchar_unlocked
#endif

#define MP make_pair
#define PB push_back
#define ST first
#define ND second
#define ALL(x) x.begin(),x.end()
#define SZ(x) ((int)(x).size())

typedef long long int LLI;
typedef unsigned long long int LLU;
typedef long double LD;
typedef pair<int, int> pii;
typedef pair<long long int, long long int> pll;
typedef vector<int> vi;

#ifdef ONLINE_JUDGE
ostream cnull(NULL);
#define cerr cnull
#endif

template<class TH> void _dbg(const char *sdbg, TH h){cerr<<sdbg<<"="<<h<<"\n";}
template<class TH, class... TA> void _dbg(const char *sdbg, TH h, TA... a) {
  while(*sdbg!=',') cerr<<*sdbg++;
  cerr<<"="<<h<<",";
  _dbg(sdbg+1, a...);
}
#define debug(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#define dbgV(R) cerr << #R << "=["; for(int e : R) cerr << e << ", "; cerr << "E]\n";
#define dbgA(R, n) cerr << #R << "=["; for(int i = 0; i <= n; ++i) cerr << R[i] << ", "; cerr << "E]\n";
#define boost ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

LLI n; 
bool czy(LLI k){
	LLI vasya = 0, stos = n;
	while(stos){
		vasya += min(k, stos);
		stos = max(0ll, stos - k);
		stos -= (stos / 10);
	}
	return 2*vasya >= n;
}

int32_t main()
{
	scanf("%lld", &n);
	LLI pocz = 1, kon = n;
	while(pocz < kon){
		LLI sr = (pocz + kon) / 2;
		if(czy(sr)) kon = sr;
		else pocz = sr + 1;
	}
	printf("%lld", pocz);
}
