#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
typedef long long LL;
const LL oo=1ll<<60;
#define dd c=getchar()
inline LL read(){LL a=0,b=1;char dd;while(!isdigit(c)&&c!='-')dd;
	if(c=='-'){b=-b;dd;}while(isdigit(c)){a=a*10+c-'0';dd;}return a*b;}
#undef dd
LL f[23][100003],b[100003],a[100003],n,m;
void solve(LL l,LL r,LL L,LL R,LL I,LL v){
	if(L>R)return;
	LL mid=L+R>>1,p;
	for(LL i=L;i<=mid;i++)v+=b[a[i]]++;
	for(LL i=l;i<=r&&i<=mid;i++){
		v-=--b[a[i]];
		if(f[I-1][i]+v<f[I][mid]){
			f[I][mid]=f[I-1][i]+v;
			p=i;
		}
	}
	for(LL i=l;i<=r&&i<=mid;i++)v+=b[a[i]]++;
	for(LL i=L;i<=mid;i++)v-=--b[a[i]];
	solve(l,p,L,mid-1,I,v);
	for(LL i=l;i<p;i++)v-=--b[a[i]];
	for(LL i=L;i<=mid;i++)v+=b[a[i]]++;
	solve(p,r,mid+1,R,I,v);
	for(LL i=L;i<=mid;i++)v-=--b[a[i]];
	for(LL i=l;i<p;i++)v+=b[a[i]]++;
}
int main(){
	n=read();
	m=read();
	for(LL i=1;i<=n;i++)a[i]=read();
	for(LL i=1;i<=n;i++)f[1][i]=f[1][i-1]+(b[a[i]]++);
	for(LL i=2;i<=m;i++)for(LL j=1;j<=n;j++)f[i][j]=oo;
	for(LL i=2;i<=m;i++){
		memset(b,0,sizeof(b));
		solve(1,n,1,n,i,0);
	}
	printf("%lld\n",f[m][n]);
	return 0;
}