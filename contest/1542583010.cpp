#include<cstdio>
#include<cstring>
#include<algorithm>
#define ll int
#define N 100005
#define rep(i,j,k) for (ll i=j;i<=k;++i)
#define per(i,j,k) for (ll i=j;i>=k;--i)
using namespace std;
inline ll read(){
	char ch=getchar(); ll x=0,f=1;
	while (ch<'0'||ch>'9') { if (ch=='-') f=-1; ch=getchar(); }
	while (ch>='0'&&ch<='9') { x=x*10+ch-'0'; ch=getchar(); }
	return x*f;
}
ll n,k,a[N],b[N];
int main(){
	n=read(); k=read();
	rep(i,1,n){
		rep(j,0,k-1) a[i]+=read()<<j;
		if (!a[i]) return puts("YES")&0;
		rep(j,0,15) if (b[j]&&!(j&a[i])) return puts("YES")&0;
		b[a[i]]=1;
	}
	puts("NO");
}
