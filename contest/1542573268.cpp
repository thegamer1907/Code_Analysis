#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define ll long long
inline int read()
{
	int x;char c;
	while((c=getchar())<'0'||c>'9');
	for(x=c-'0';(c=getchar())>='0'&&c<='9';)x=x*10+c-'0';
	return x;
}
#define MN 100000
#define MK 20
int a[MN+5],L=1,R,u[MN+5],s[MN+5],num[MN+5];
ll f[MK+5][MN+5],cnt;
#define S(x) (1LL*(x)*((x)-1)/2)
inline void Add(int x,int ad){cnt-=S(num[x]);num[x]+=ad;cnt+=S(num[x]);}
void Gao(int l,int r)
{
	while(L>l) Add(a[--L],1);
	while(L<l) Add(a[L++],-1);
	while(R<r) Add(a[++R],1);
	while(R>r) Add(a[R--],-1); 
}
void rev(int x)
{
	if(u[x]^=1)cnt+=s[a[x]]++;
	else cnt-=--s[a[x]];
}
void get(int l,int r)
{
	while(L<l)rev(L++);
	while(L>l)rev(--L);
	while(R<r)rev(++R);
	while(R>r)rev(R--);
}
void solve(int x,int l,int r,int pl,int pr)
{
	if(l>r)return;
	int mid=l+r>>1,i,v;
	for(i=min(mid,pr);i>=pl;--i)
		if(Gao(i,mid),f[x-1][i-1]+cnt<f[x][mid])
			f[x][mid]=f[x-1][i-1]+cnt,v=i;
	solve(x,l,mid-1,pl,v);
	solve(x,mid+1,r,v,pr);
}
int main()
{
	int n,k,i;
	n=read();k=read();
	for(i=1;i<=n;++i)a[i]=read();
	memset(f,40,sizeof(f));f[0][0]=0;
	for(i=1;i<=k;++i)solve(i,1,n,1,n); 
	printf("%I64d",f[k][n]);
}