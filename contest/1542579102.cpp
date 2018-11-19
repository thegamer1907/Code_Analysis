#include"bits/stdc++.h"
#define F(i,j,n) for(register int i=j;i<=n;i++)
#define D(i,j,n) for(register int i=j;i>=n;i--)
#define ll long long
#define N 100010
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
int f[16],n,k,x,y;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	#endif
	gi(n);gi(k);
	F(i,1,n){
		x=0;
		F(j,1,k)gi(y),x=x*2+y;
		f[x]=1;
	}
	F(i,0,15)F(j,0,15)if(f[i]&&f[j]&&(i&j)==0){puts("YES");return 0;}
	puts("NO");
	return 0;
}

