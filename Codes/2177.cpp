//~ while (clock()<=69*CLOCKS_PER_SEC)
//~ #pragma comment(linker, "/stack:200000000")
//~ #pragma GCC optimize("O3")
//~ #pragma GCC optimize("Ofast")
//~ #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//~ #pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
#define pb push_back
#define SZ(x) ((int)(x).size())
#define ALL(x) x.begin(),x.end()
#define all(x) x.begin(),x.end()
#define fi first
#define se second
#define _upgrade ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
typedef vector<PII> VPII;
typedef vector<PLL> VPLL;
typedef vector<LL> VLL;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<char> VC;
typedef long double LD;
typedef pair<LD,LD> PLD;
typedef vector<LD> VLD;
typedef vector<PLD> VPLD;

template<class TH> void _dbg(const char *sdbg, TH h){ cerr<<sdbg<<" = "<<h<<endl; }
template<class TH, class... TA> void _dbg(const char *sdbg, TH h, TA... a) {
  while(*sdbg!=',')cerr<<*sdbg++;
  cerr<<" = "<<h<<", "; _dbg(sdbg+1, a...);
}

#ifdef LOCAL
#define dbg(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#else
#define dbg(...)
#define cerr if(0)cout
#endif

const int maxn = (1e6)+7;
const int maxk = 20;
const int inf = (1e9)+7;
const LL LLinf = (1e18)+7;
const LD eps = 1e-9;
const LL mod = 1e9+7;

// ***************************** CODE ***************************** //

LL tab[maxn];

int main()
{
	_upgrade
	int n;
	cin>>n;
	LL suma = 0;
	LL suma2 = 0;
	LL res = 0;
	int wsk = 0;
	int wsk2 = n - 1;
	for(int i = 0 ;i < n;i++)
		cin>>tab[i];	
	for(int i = 0 ;i <= n;i++)
	{
		if(suma == suma2)	
			res = max(res, suma);
		if(suma >= suma2)
		{
			suma2 += tab[wsk2];
			wsk2--;
		}
		else
		{
			suma += tab[wsk];
			wsk++;
		}
	}
	cout<<res;
	return 0;
}

