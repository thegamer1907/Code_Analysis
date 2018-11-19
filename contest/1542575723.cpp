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

const int maxn = 100050;

ll f[maxn][21], Cur;
int n, k, a[maxn], c[maxn];
struct state{int l, r, al, ar;}h;
queue<state> Q;
int l, r, pos;

int main()
{
	sf("%d%d",&n,&k);
	fo(i,1,n) sf("%d",&a[i]);
	l = r = 1; c[a[1]] ++;
	fo(i,1,n) 
	{
		while(r < i)
		{
			r ++;
			c[a[r]] ++;
			Cur += c[a[r]]-1;
		}
		f[i][1] = Cur;
	}
	fo(j,2,k)
	{
		Q.push((struct state){1,n,0,n});
		while(!Q.empty())
		{
			h = Q.front(); Q.pop();
			int mid = (h.l + h.r) >> 1;
			while(r < mid)
			{
				r ++;
				c[a[r]] ++;
				if(c[a[r]]) Cur += (c[a[r]]-1);
			}
			while(r > mid)
			{
			    Cur = Cur - c[a[r]] + 1;
				c[a[r]] --;
				-- r;
			}
			// cout << l << ' ' << r << ' '<< Cur << endl;
			f[mid][j] = 1ll<<61;
			fo(i,h.al,min(mid,h.ar))
			{
				while(l < i+1)
				{
				    Cur = Cur - c[a[l]] + 1;
					c[a[l]] --;
					++ l;
				}
				while(l > i+1)
				{
					-- l;
					c[a[l]] ++;
			        Cur += c[a[l]]-1;
				}
				if(f[mid][j] > f[i][j-1] + Cur)
				{
					pos = i;
					f[mid][j] = f[i][j-1] + Cur;
				}
				// if(j == 2) cout << i << ' ' << mid << ' ' << Cur << ' ' << l << ' ' << r << ' ' << f[mid][j] << endl;
			}
			if(h.l<=mid-1) Q.push((struct state){h.l,mid-1,h.al,pos});
			if(mid+1<=h.r) Q.push((struct state){mid+1,h.r,pos,h.ar});
		}
	}
	pf("%lld\n",f[n][k]);
	return 0;
}