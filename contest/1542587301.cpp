#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<string>
#include<cmath>
#include<ctime>
#include<queue>
#include<stack>
#include<map>
#include<set>
#define rre(i,r,l) for(int i=(r);i>=(l);i--)
#define re(i,l,r) for(int i=(l);i<=(r);i++)
#define Clear(a,b) memset(a,b,sizeof(a))
#define inout(x) printf("%d",(x))
#define douin(x) scanf("%lf",&x)
#define strin(x) scanf("%s",(x))
#define op operator
typedef unsigned long long ULL;
typedef const int cint;
typedef long long LL;
using namespace std;
template<typename Q>
void inin(Q &x)
{
	x=0;int f=0;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=1;ch=getchar();}
	while(ch>='0'&&ch<='9')x=x*10+ch-'0',ch=getchar();
	x=f?-x:x;
}
int h,m,s,t1,t2; 
int main()
{
	inin(h),inin(m),inin(s),inin(t1),inin(t2);
	double a,b,c;
	a=1.*h*30+1.*m*1/2+1.*s*1/120;
	b=6.*m+1.*s/10;
	c=s*6;
	if(a>=360.)a-=360;
	if(b>=360.)b-=360;
	if(c>=360.)c-=360;
	double q,w;
	q=t1*30,w=t2*30;
	if(q>w)swap(q,w);
	if((a<q||a>w)&&(b<q||b>w)&&(c<q||c>w))cout<<"YES";
	else if(a>q&&a<w&&b>q&&b<w&&c>q&&c<w)cout<<"YES";
	else cout<<"NO";
	return 0;
}


