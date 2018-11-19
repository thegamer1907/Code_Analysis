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

vector <double> ara;
int h,m,s,t1,t2,N;

int oka(double x,double y)
{
	for(int i = 0; i < N-1; i++)
	{
		double l = ara[i];
		double r = ara[i+1];
		if( l < x && x < r && l < y && y < r ) return 1;
	}
	return 0;
}

void add(int h,int m,int s)
{
	if(h == 12) h = 0;
    double ss = s * 6.0;
    double mm = m * 6.0;
    mm += ( (double)s / 60.0 ) * 6.0;
    double hh = h * 30.0;
    hh += ( (double)m / 60.0 ) * 30.0;
    hh += ( (double)s / 3600.0 ) * 30.0;
    ara.pb(ss);
    ara.pb(mm);
    ara.pb(hh);
}

int main()
{
	//FI;

	siii(h,m,s);
	add(h,m,s);
	sort(ara.begin(),ara.end());
	un(ara);
	N = ara.size();
	for(int i = 0; i < N; i++) ara.pb( ara[i] + 360 );
	for(int i = 0; i < N; i++) ara.pb( ara[i] + 720 );
	N *= 3;
	//for(int i = 0; i < N; i++) DD(i,ara[i]);


	sii(t1,t2);
	t1 *= 30;
	t2 *= 30;
	//DD(t1,t2);

	int ret = 0;
	ret += oka(t1,t2);
	ret += oka(t1+360,t2);
	ret += oka(t1,t2+360);
	ret += oka(t1+360,t2+360);

	if( ret ) puts("YES");
	else puts("NO");

	return 0;
}
