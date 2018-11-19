#include<bits/stdc++.h>
#define rep(i,k,n) for(ll i= (ll) k;i< (ll) n;i++)
#define all(v) (v).begin(), (v).end()
#define SZ(v) (int)((v).size())
#define pb push_back
#define ft first
#define sd second
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const long long INF = 4e18L + 1;
const int IINF = 2e9 + 1;

using namespace std;

template<class TH> void _dbg(const char *sdbg, TH h){ cerr<<sdbg<<'='<<h<<endl; }
template<class TH, class... TA> void _dbg(const char *sdbg, TH h, TA... a) {
  while(*sdbg!=',')cerr<<*sdbg++;cerr<<'='<<h<<','; _dbg(sdbg+1, a...);
}

#ifdef LOCAL
#define DBG(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#else
#define DBG(...) (__VA_ARGS__)
#define cerr if(0)cout
#endif

int tab[16];
int tu_jedynka[5];
int ile_mam_zer[5];


int main()
{
#ifndef LOCAL
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#endif
	int n, k;
	cin>>n>>k;
	for(int i=0; i<n; i++)
	{
		int mask = 0;
		for(int j=0; j<k; j++)
		{
			int x;
			cin>>x;
			if (x)
			{
				mask += (1<<j);
			}
		}
		tab[mask]++;
	}
	bool ok = false;
	for(int i=0; i<16; i++)
	{
		for(int j=0; j<16; j++)
		{
			int x = 15-i;
			if ( (x&j) != j)
				continue;
			if (tab[i] && tab[j])
				ok = true;
		}
	}
	if (ok)
		cout<<"YES";
	else
	cout<<"NO";
	

    return 0;
}
