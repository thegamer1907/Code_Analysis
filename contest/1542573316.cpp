#include<iostream>
#include<cstring>
#include<cstdio>
#define MN 100000
using namespace std;
inline int read()
{
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
int a[MN+5],num[MN+5],n,k,L,R;
long long tot=0,f[22][MN+5];
#define S(x) (1LL*(x)*((x)-1)/2)
inline void Add(int x,int ad){tot-=S(num[x]);num[x]+=ad;tot+=S(num[x]);}
void Gao(int l,int r)
{
	while(L>l) Add(a[--L],1);
	while(L<l) Add(a[L++],-1);
	while(R<r) Add(a[++R],1);
	while(R>r) Add(a[R--],-1); 
}
void Solve(long long*f,long long*g,int l,int r,int pl,int pr)
{
	if(l>r) return;	
	int mid=l+r>>1,mx=0;
	for(int i=min(pr,mid);i>=pl;--i) 
		if(Gao(i,mid),f[i-1]+tot<g[mid]) g[mid]=f[i-1]+tot,mx=i;
	Gao(pl,l);Solve(f,g,l,mid-1,pl,mx);
	Gao(mx,mid);Solve(f,g,mid+1,r,mx,pr);
}

int main()
{
	n=read();k=read();
	for(int i=1;i<=n;++i) a[i]=read();
	memset(f,63,sizeof(f));f[0][0]=0;L=1;R=0;
	for(int i=1;i<=k;++i) 
	{
	//	tot=0;memset(num,0,sizeof(num));
	//	L=1,R=n;
	//	for(int j=1;j<=n;++j) Add(a[j],1);
		Solve(f[i-1],f[i],1,n,1,n);
	}
	printf("%lld\n",f[k][n]);
	return 0;
}

