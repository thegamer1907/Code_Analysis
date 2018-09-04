#include<bits/stdc++.h>
#define FILE "read"
#define MAXN 100100
using namespace std;
typedef long long ll;
ll n,S,a[MAXN],b[MAXN];
inline ll read(){
	ll x=0,f=1;  char ch=getchar();
	while(ch>'9'||ch<'0')  {if(ch=='-')  f=-1;  ch=getchar();}
	while(ch>='0'&&ch<='9')  {x=x*10+ch-'0';  ch=getchar();}
	return x*f;
}
ll calc(int mid){
	ll ret=0;
	for(int i=1;i<=n;++i) b[i]=a[i]+1LL*mid*i;
	sort(b+1,b+n+1);
	for(int i=1;i<=mid;++i) ret+=b[i];
	return ret;
}
int main(){
	//freopen(FILE".in","r",stdin);
	//freopen(FILE".out","w",stdout);
	n=read();  S=read();
	for(int i=1;i<=n;++i) a[i]=read();
	int l=0,r=n;
	while(l+1<r){
		int mid=(l+r)>>1;
		if(calc(mid)<=S) l=mid;
		else r=mid;
	}
	if(calc(r)<=S) printf("%d %lld\n",r,calc(r));
	else printf("%d %lld\n",l,calc(l));
	return 0;
} 
