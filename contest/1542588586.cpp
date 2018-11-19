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

bool pomiedzy(int t, int y, int z)
{
	assert(z >= y);
	while(t < y)
		t += 12*60*60;
	while(t >z)
		t -= 12*60*60;
	if (t < z && t > y)
		return true;
	return false;
}

int main()
{
#ifndef LOCAL
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#endif
	int x1, y1, z1, t1, t2;
	cin>>x1>>y1>>z1>>t1>>t2;
	int x, y, z;
	x = x1*60*60 + 60 * y1 + z1;
	y = y1*12*60 + 12 * z1;
	z=z1*60*12;
	t1 *= 60 * 60;
	t2 *= 60 * 60;
	x %= 12 * 60 * 60;
	t1 %= 12* 60 * 60;
	t2 %= 12* 60 * 60;
	DBG(x, y, z, t1, t2);
	if (x > y)
		swap(x, y);
	if (x > z)
		swap(x, z);
	if (y > z)
		swap(y, z);
	if (pomiedzy(t1, x, y) && pomiedzy(t2, x, y))
	{
		cout<<"YES";
		return 0;
	} 
	if (pomiedzy(t1, y, z) && pomiedzy(t2, y, z))
	{
		cout<<"YES";
		return 0;
	} 
	if (pomiedzy(t1, z, x+12* 60 * 60) && pomiedzy(t2, z, x+12* 60 * 60))
	{
		cout<<"YES";
		return 0;
	} 
	cout<<"NO";
    return 0;
}
