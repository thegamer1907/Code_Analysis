#include <bits/stdc++.h>
using namespace std;

#define fo(i,s,t) for(int i = s; i <= t; ++ i)
#define fd(i,s,t) for(int i = s; i >= t; -- i)
#define bf(i,s) for(int i = head[s]; i; i = e[i].next)
#define mp make_pair
#define fi first
#define se second
#define pii pair<int,int>
#define pb push_back
#define VI vector<int>
#define sf scanf
#define pf printf
#define fp freopen
#define SZ(x) ((int)(x).size())
#define IF_DEBUG 0
typedef long long ll;
typedef double db;
typedef unsigned long long ull;
const int inf = 1<<30;
const ll INF = 1ll<<60;
const db Inf = 1e20;
const db eps = 1e-9;

void gmax(int &a,int b){a = (a > b ? a : b);}
void gmin(int &a,int b){a = (a < b ? a : b);}

int n, k, cnt[10];
set<int> s;
vector<int> prb;

bool check(int a,int b)
{
	fo(i,0,3) cnt[i] = 0;
	fo(i,0,k-1)
	{
		if((1<<i)&a) cnt[i]++;
		if((1<<i)&b) cnt[i]++;
	}
	fo(i,0,k-1) if(cnt[i]==2) return false;
	pf("YES"); exit(0);
	return true;
}
int main()
{
	sf("%d%d",&n,&k);
	fo(i,1,n)
	{
		int st = 0;
		fo(j,0,k-1)
		{
			int t; sf("%d",&t);
			if(t) st |= (1<<j);
		}
		if(!st) return 0*pf("YES");
		s.insert(st); prb.pb(st);
	}
	sort(prb.begin(),prb.end());
	prb.erase(unique(prb.begin(),prb.end()),prb.end());
	fo(i,0,SZ(prb)-1)
		fo(j,i+1,SZ(prb)-1)
			if(check(prb[i],prb[j]));
	pf("NO");
	return 0;
}