#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

const int N=100010;

int n,k,tms,a[N];
ll f[25][N];
int b[N],t[N];

inline char nc(){
	static char buf[100000],*p1=buf,*p2=buf;
	return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++;
}

inline void rea(int &x){
	char c=nc(); x=0;
	for(;c>'9'||c<'0';c=nc());for(;c>='0'&&c<='9';x=x*10+c-'0',c=nc());
}

void solve(int l,int r,int L,int R,int K,ll cur){
	if(L>R) return ;
	int mid=L+R>>1,p;
	for(int i=L;i<=mid;i++) cur+=b[a[i]]++;
	for(int i=l;i<=r && i<=mid;i++){
		cur-=--b[a[i]];
		if(f[K-1][i]+cur<f[K][mid]) 
			f[K][mid]=f[K-1][i]+cur,p=i;
	}
	for(int i=L;i<=mid;i++) cur-=--b[a[i]];
	for(int i=l;i<=r && i<=mid;i++) cur+=b[a[i]]++;
	solve(l,p,L,mid-1,K,cur);
	for(int i=l;i<p;i++) cur-=--b[a[i]];
	for(int i=L;i<=mid;i++) cur+=b[a[i]]++;
	solve(p,r,mid+1,R,K,cur);
	for(int i=l;i<p;i++) b[a[i]]++;
	for(int i=L;i<=mid;i++) b[a[i]]--;
}

int main(){
	rea(n); rea(k);
	for(int i=1;i<=n;i++) rea(a[i]);
	ll cur=0;
	for(int i=1;i<=n;i++){
		cur+=b[a[i]]++;
		f[1][i]=cur;
	}
	for(int i=2;i<=k;i++)
		for(int j=1;j<=n;j++) f[i][j]=1LL<<60;
	for(int i=2;i<=k;i++){
		for(int j=1;j<=n;j++) b[j]=0;
		solve(1,n,1,n,i,0);
	}
	cout<<f[k][n]<<endl;
	return 0;
}