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
#define uint unsigned int
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
#define fs(i,n) for(i=0;s[i];i++)
#define fon for(i=1;i<=n;i++)
#define fom for(i=1;i<=m;i++)
#define foq for(l=r=1;l<=r;l++)
#define ret return
#define rad srand(time(0))
#define elif else if
#define _f(x) scanf("%lf",&x)
#define _pf(x) printf("%.6lf",x)
#define isd(x) ((x)<='9'&&(x)>='0'))
#define isu(x) ((x)>='A'&&(x)<='Z'))
#define isl(x) ((x)>='a'&&(x)<='z'))
#define tou(x) ((x)-((x)>='a'&&(x)<='z'))*32)
#define tol(x) ((x)+((x)>='A'&&(x)<='Z'))*32)
#define ii int i
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
	int gi(){int x;_(x);ret x;}
	ll gll(){ll x;_(x);ret x;}
}
cint N=533333,EE=100000000,GG=1000000000,ima=2147483647;
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
	int fi(int k){ret fa[k]=fa[k]==k?k:fi(fa[k]);}
	void hb(int a,int b){a=fi(a);b=fi(b);fa[a]=b;}
}
int gcd(int a,int b){ret b?gcd(b,a%b):a;}
void fop(const char *s){char c[256],d[256];cl(c,0);cl(d,0);strcpy(c,s);strcpy(d,s);opi(strcat(c,".in"));opo(strcat(d,".out"));}
void fcl(){fclose(stdin);fclose(stdout);}
use ufs;
use io;
int n,m,a[N],an,f[N],e;
char s[1111][111];
int main()
{
	int i,j,a1,a2;
	_(n);
	fon
		_s(s[i]);
	fon
		if(!e)
			if(s[i][0]=='O'&&s[i][1]=='O')
			{
				e=1;
				s[i][0]=s[i][1]='+';
			}
			elif(s[i][3]=='O'&&s[i][4]=='O')
			{
				e=1;
				s[i][3]=s[i][4]='+';
			}
	if(!e)
	{
		puts("NO");
		ret 0;
	}
	puts("YES");
	fon
		puts(s[i]);
}





