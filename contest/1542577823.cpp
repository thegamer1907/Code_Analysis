#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <string>
#include <cassert>

using namespace std;
typedef long long LL;
typedef pair<int,int> pii;

#define forup(i,a,b) for(int i=a; i<b; ++i)
#define fordn(i,a,b) for(int i=a; i>b; --i)
#define rep(i,a) for(int i=0; i<a; ++i)

#define dforup(i,a,b) for(i=a; i<b; ++i)
#define dfordn(i,a,b) for(i=a; i>b; --i)
#define drep(i,a) for(i=0; i<a; ++i)

#define slenn(s,n) for(n=0; s[n]!=13 and s[n]!=0; ++n);s[n]=0

#define gi(x) scanf("%d",&x)
#define gl(x) cin>>x
#define gd(x) scanf("%lf",&x)
#define gs(x) scanf("%s",x)

#define pis(x) printf("%d ",x)
#define pin(x) printf("%d\n",x)
#define pls(x) cout<<x<<" "
#define pln(x) cout<<x<<"\n"
#define pds(x) printf("%.12f ",x)
#define pdn(x) printf("%.12f\n",x)
#define pnl() printf("\n")

#define fs first
#define sc second

#define pb push_back

const int inv=1000000000;
const int minv=-inv;

const int max_n=100+5;
const int max_m=100+5;
const int max_len=100+5;

const int bound=13;
const int max_mask=(1<<bound)+5;

int bsum(int x, int y) { return min(x+y,bound); }
int bget(int x) { return min(x,bound); }

int n,m;
char p[max_len+5];
bool c[max_n+max_m][bound+1][max_mask]={0};
int s[max_n+max_m][bound+1]={0},e[max_n+max_m][bound+1];
int blen[max_n+max_m];

int main()
{
	gi(n);

	rep(z,n)
	{
		gs(p);
		int len; slenn(p,len);
		blen[z]=bget(len);

		forup(k,1,bound+1)
			if(k<=len)
				for(int i=0; i+k-1<len; ++i)
				{
					int mask=0;
					rep(j,k)
						mask+=((int)(p[i+j]-'0'))*(1<<j);

					c[z][k][mask]=true;
					if(i==0)
						s[z][k]=mask;
					if(i+k-1==len-1)
						e[z][k]=mask;
				}
	}

	gi(m);

	int a,b;
	for(int z=n; z<n+m; ++z)
	{
		gi(a); gi(b);
		--a; --b;
		blen[z]=bsum(blen[a],blen[b]);

		forup(k,1,bound+1)
			if(k<=blen[z])
			{
				if(k<=blen[a])
					s[z][k]=s[a][k];
				else
					s[z][k] = s[a][blen[a]] + s[b][k-blen[a]] * (1<<blen[a]);

				if(k<=blen[b])
					e[z][k]=e[b][k];
				else
					e[z][k] = e[a][k-blen[b]] + e[b][blen[b]] * (1<<(k-blen[b]));
			}

		int res=0;
		forup(k,1,bound+1)
			if(k<=blen[z])
			{
				int ct=0;
				rep(mask,(1<<k))
				{
					c[z][k][mask]=(c[a][k][mask] or c[b][k][mask]);
					if(not c[z][k][mask])
						for(int o=1; o<k; ++o)
							c[z][k][mask] =
							(
								c[z][k][mask] or
								(blen[a]>=o and e[a][o] == (mask & ((1<<o)-1)) and blen[b]>=k-o and s[b][k-o] == (mask>>o))
							);
					ct+=c[z][k][mask];
				}
				if(ct==(1<<k))
					res=k;
			}
		pin(res);
	}
	
	return 0;
}