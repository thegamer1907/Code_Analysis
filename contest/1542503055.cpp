#include<cstdio>
#include<cstring>
#include<algorithm>
#define inf(x) memset(x,0x3f,sizeof(x))
#define clr(x) memset(x,0,sizeof(x))
#define ll long long
#define MN 100005
using namespace std;
inline int in(){
    int x=0;bool f=0;char c;
    for (;(c=getchar())<'0'||c>'9';f=c=='-');
    for (x=c-'0';(c=getchar())>='0'&&c<='9';x=(x<<3)+(x<<1)+c-'0');
    return f?-x:x;
}
ll f[2][MN],num[MN],res;
int a[MN];
int n,k,p,q;
inline void bis(bool x,int l,int r,int L,int R){
	if (l>r) return;
	int mid=(l+r)>>1,pos=min(R,mid)+1;
	while (q>mid) --num[a[q]],res-=num[a[q]],--q;
	while (q<mid) ++q,res+=num[a[q]],++num[a[q]];
	while (p>pos) --p,res+=num[a[p]],++num[a[p]];
	while (p<pos) --num[a[p]],res-=num[a[p]],++p;
	for (int i=pos-1;i>=L;--i){
		--p;res+=num[a[p]];++num[a[p]];
		if (f[x][mid]>f[x^1][i-1]+res) pos=i,f[x][mid]=f[x^1][i-1]+res;
	}bis(x,l,mid-1,L,pos);bis(x,mid+1,r,pos,R);
}
int main()
{
	n=in();k=in();
	for (int i=1;i<=n;++i) a[i]=in();
	inf(f);f[0][0]=0ll;
	for (int j=1;j<=k;++j){
		int x=j&1;p=1,q=0;res=0ll;
		inf(f[x]);clr(num);bis(x,1,n,1,n);
	}printf("%lld",f[k&1][n]);return 0;
}