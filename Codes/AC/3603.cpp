#include<bits/stdc++.h>
#define MAXN (200000+100)
#define LL long long
using namespace std;
LL a[MAXN],b[MAXN],c[MAXN],d[MAXN];

inline LL read()
{
	LL X=0; char ch=0;
	while(!isdigit(ch)) {ch=getchar();}
	while(isdigit(ch)) X=(X<<3)+(X<<1)+(ch^48),ch=getchar();
	return X;
}

int main()
{
	//Kealine

	LL n=read(),m=read(),k=read(),x=read(),s=read();
	for(int i=0;i<m;i++) a[i]=read();
	for(int i=0;i<m;i++) b[i]=read();
	for(int i=1;i<=k;i++) c[i]=read();
	for(int i=1;i<=k;++i) d[i]=read();
	LL ans=(n-c[upper_bound(d+1,d+k+1,s)-d-1])*x;
	for(int i=0;i<m;++i)
	{
		if(b[i]>s) continue;
		LL tmp=(n-c[upper_bound(d+1,d+k+1,s-b[i])-d-1])*a[i];
		ans=min(ans,tmp);
	}
	cout<<ans<<endl;

	return 0;
}