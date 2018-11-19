#include <bits/stdc++.h>

//#include <ext/pb_ds/assoc_container.hpp> // Common file
//#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

#define rep(i,n) for(i=1;i<=n;i++)
#define Rep(i,n) for(i=0;i<n;i++)
#define For(i,a,b) for(i=a;i<=b;i++)

#define pb(x) push_back(x)
#define sz(x) x.size()

#define mem(ara,val) memset(ara,val,sizeof(ara))
#define eps 1e-9

#define si(x) scanf("%d",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define siii(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define slll(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define ss(ch) scanf("%s",ch)
#define pi(x) printf("%d",x)
#define pii(x,y) printf("%d %d",x,y)
#define piii(x,y,z) printf("%d %d %d",x,y,z)
#define pl(x) printf("%lld",x)
#define pll(x,y) printf("%lld %lld",x,y)
#define plll(x,y,z) printf("%lld %lld %lld",x,y,z)
#define ps(ch) printf("%s",ch)
#define Afridi 0
#define NL printf("\n")
#define debug(x) printf("wow  %d !!\n",x)
#define Max 200005
#define MAX 10005
#define INF (LL)1e15
//#define mod 1000000007
#define un(x) x.erase(unique( x.begin() , x.end() ), x.end())

#define FI freopen("in.txt","r",stdin)

#define D(x) cout << #x << " = " << x << endl
#define DD(x,y) cout << #x << " = " << x << "   " << #y << " = " << y << endl

typedef long long LL;
typedef unsigned long long ULL;
typedef unsigned int ui;

using namespace std;

LL bigmod(LL b,LL p,LL m)
{
    if(p == 0)return 1;
    LL my = bigmod(b,p/2,m);
    my*=my;my%=m;
    if(p & 1)my*=b,my%=m;
    return my;
}
LL setb(LL n,LL pos){return n=n | (1 << pos);}
LL resb(LL n,LL pos){return n=n & ~(1 << pos);}
bool checkb(LL n,LL pos){return (bool)(n & (1 << pos));}

int ara[Max][5],cnt[Max];
int n,k;
vector <int> v;

int solve()
{
	/*int mx = 0;
    rep(i,n) mx = max( mx , cnt[i] );

    if( k == 1 ) return mx;
    if( k == 2 )
    {
		if( mx == 2 ) return 1;
		if( mx == 0 ) return 0;
		int f = 0,s = 0;
        rep(i,n)
        {
			if( ara[i][1] ) f = 1;
			if( ara[i][2] ) s = 1;
        }
        if( f && s ) return 1;
        else return 0;
    }
    if( k == 3 )
    {
		if( mx < 2 ) return 0;
		if( mx == 3 ) return 1;

		vect
    }*/


	int i,j;
    rep(i,n)
    {
		int mask = 0;
		rep(j,k)
		{
			if( ara[i][j] ) mask = setb(mask,j-1);
		}
		v.pb(mask);
	}
	sort(v.begin(),v.end());
	un(v);
	Rep(i,sz(v))
	{
		Rep(j,sz(v))
		{
			int cur = v[i] | v[j];
			if( cur == ( (1<<k)-1 ) ) return 1;
		}
	}
	return 0;
}

int main()
{
	//FI;
	int i,j;
	sii(n,k);
	rep(i,n)
	{
		int tot = 0;
		rep(j,k)
		{
			si(ara[i][j]);
			ara[i][j] = 1 - ara[i][j];
			tot += ara[i][j];
		}
		cnt[i] = tot;
	}
	int ret = solve();
	if(ret) puts("YES");
	else puts("NO");
	return 0;
}
