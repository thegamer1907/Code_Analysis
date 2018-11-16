//#include<math.h>
#include<vector>
#include<time.h>
#include<algorithm>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define vint vector<int>
#define itn int
#define ll long long
#define _s(x) scanf("%s",x)
#define con continue
#define gtc getchar()
#define itr iterator
#define emp empty()
#define siz size()
#define ins insert
#define ptc putchar
#define lb(x) ((x)&-(x))
#define bt(x,i) ((x)&(1<<(i)))
#define __ printf
#define dou double
#define eps 0.00000000001
#define llma 1010000000000000000ll
#define rint register int
#define opr operator
#define cl(x,a) memset(x,a,sizeof(x))
#define fo0(i,k) for(i=fr[k];i;i=nx[i])
#define fo1(i,l,r) for(i=l;i<=r;i++)
#define fo2(i,l,r) for(i=l;i>=r;i--)
#define fo(i,n) for(i=1;i<=n;i++)
#define x first
#define cint const int
#define y second
#define opi(x) freopen(x,"r",stdin)
#define opo(x) freopen(x,"w",stdout)
#define tpl template<typename T>
#define priq priority_queue
#define priq1(t) priority_queue<t,vector<t>,greater<t> >
#define mp make_pair
#define use using namespace
#define pb push_back
#define pint pair<int,int>
use std;
cint N=533333,EE=100000000,GG=1000000000,ima=2147483647;
int eq(dou a,dou b){return a+eps>=b&&b+eps>=a;}
tpl void _ma(T &a,T b){if(a<b)a=b;}tpl void _mi(T &a,T b){if(a>b)a=b;}
namespace io
{
	void _(int &k){char c;int e=1;k=0;while((c=gtc)>'9'||c<'0')if(c=='-')e=-1;k=c-'0';while((c=gtc)<='9'&&c>='0'){k*=10;k+=c-'0';}k*=e;}
	void _(ll &k){char c;int e=1;k=0;while((c=gtc)>'9'||c<'0')if(c=='-')e=-1;k=c-'0';while((c=gtc)<='9'&&c>='0'){k*=10;k+=c-'0';}k*=e;}
	void _(int &a,int &b){_(a);_(b);}void _(int &a,int &b,int &c,int &d,int &e){_(a);_(b);_(c);_(d);_(e);}
	void _(int &a,int &b,int &c,int &d){_(a);_(b);_(c);_(d);}void _(int &a,int &b,int &c){_(a);_(b);_(c);}
	void _(ll &a,ll &b){_(a);_(b);}void _(ll &a,ll &b,ll &c,ll &d,ll &e){_(a);_(b);_(c);_(d);_(e);}
	void _(ll &a,ll &b,ll &c){_(a);_(b);_(c);}void _(ll &a,ll &b,ll &c,ll &d){_(a);_(b);_(c);_(d);}
	void _c(char &c){while((c=gtc)==' '||c=='\n');}void _p0(int k){if(k>=10)_p0(k/10);ptc(k%10+'0');}
	void _p0(ll k){if(k>=10)_p0(k/10);ptc(k%10+'0');}void _p(int k){if(k<0){ptc('-');_p0(-k);}else _p0(k);}
	void _p(ll k){if(k<0){ptc('-');_p0(-k);}else _p0(k);}void __p(int k){_p(k);ptc(' ');}
	void _pn(int k){_p(k);ptc('\n');}void __p(ll k){_p(k);ptc(' ');}void _pn(ll k){_p(k);ptc('\n');}
	void _p(int a,int b){__p(a);_pn(b);}void _p(int a,int b,int c){__p(a);__p(b);_pn(c);}
	void _p(int a,int b,int c,int d){__p(a);__p(b);__p(c);_pn(d);}
	void _p(ll a,ll b){__p(a);_pn(b);}void _p(ll a,ll b,ll c){__p(a);__p(b);_pn(c);}
	void _p(ll a,ll b,ll c,ll d){__p(a);__p(b);__p(c);_pn(d);}
	void op(ll *a,int n){int i;n--;fo(i,n)__p(a[i]);_pn(a[n+1]);}
	void op(int *a,int n){int i;n--;fo(i,n)__p(a[i]);_pn(a[n+1]);}
}
namespace graph
{
	int fr[N],nx[N],t[N],w[N],j2;
	void me(int s1,int t1){nx[++j2]=fr[s1];fr[s1]=j2;t[j2]=t1;}
	void me(int s1,int t1,int w1){nx[++j2]=fr[s1];fr[s1]=j2;t[j2]=t1;w[j2]=w1;}
	void me1(int s1,int t1){me(s1,t1);me(t1,s1);}
	void me1(int s1,int t1,int w1){me(s1,t1,w1);me(t1,s1,w1);}
}
namespace ufs
{
	int fa[N];
	void _init(int n){int i;fo(i,n)fa[i]=i;}
	int fi(int k){return fa[k]=fa[k]==k?k:fi(fa[k]);}
	void hb(int a,int b){a=fi(a);b=fi(b);fa[a]=b;}
}
int gcd(int a,int b){return b?gcd(b,a%b):a;}
use ufs;
use io;
int n,m,a,b,c,d,an,f[N];
char s[N];
int main()
{
	int i,j,a1,a2;
	_(a,b,c,d,n);
	for(i=a;i<=n;i+=a)
		f[i]=1;
	for(i=b;i<=n;i+=b)
		f[i]=1;
	for(i=c;i<=n;i+=c)
		f[i]=1;
	for(i=d;i<=n;i+=d)
		f[i]=1;
	fo(i,n)
		an+=f[i];
	_pn(an);
}



