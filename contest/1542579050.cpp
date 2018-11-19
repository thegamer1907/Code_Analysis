#include"bits/stdc++.h"
#define F(i,j,n) for(register int i=j;i<=n;i++)
#define D(i,j,n) for(register int i=j;i>=n;i--)
#define ll long long
#define N 110
using namespace std;
namespace io{
	const int L=(1<<19)+1;
	char ibuf[L],*iS,*iT,c;int f;
	char gc(){
		if(iS==iT){
			iT=(iS=ibuf)+fread(ibuf,1,L,stdin);
			return iS==iT?EOF:*iS++;
		}
		return*iS++;
	}
	template<class I>void gi(I&x){
		for(f=1,c=gc();c<'0'||c>'9';c=gc())if(c=='-')f=-1;
		for(x=0;c<='9'&&c>='0';c=gc())x=x*10+(c&15);x*=f;
	}
};
using io::gi;
using io::gc;
int a,b,c,t1,t2,y,i,k;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	#endif
	gi(a);gi(b);gi(c);gi(t1);gi(t2);
	a=((!b&&!c)?2*a:2*a+1)%24;
	b=((b%5==0&&!c)?2*(b/5):2*(b/5)+1)%24;
	c=(c%5==0?2*(c/5):2*(c/5)+1)%24;
	i=t1*2%24;
	F(j,0,50){
		if(i==a||i==b||i==c)break;
		k=i-1;if(k<0)k+=24;
		i-=2;if(i<0)i+=24;
		if(i==a||i==b||i==c)break;
		if(k==a||k==b||k==c)break;
		if(i==2*t2%24)y=1;
	}
	i=t1*2%24;
	F(j,0,50){
		if(i==a||i==b||i==c)break;
		k=(i+1)%24;i=(k+1)%24;
		if(i==a||i==b||i==c)break;
		if(k==a||k==b||k==c)break;
		if(i==2*t2%24)y=1;
	}
	puts(y?"YES":"NO");
	return 0;
}

