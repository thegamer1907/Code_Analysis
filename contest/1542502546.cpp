#include<bits/stdc++.h>
#define For(i,a,b) for(int i=(a),_en=(b);i<=_en;i++)
#define Dor(i,a,b) for(int i=(a),_en=(b);i>=_en;i--)
#define ll long long
#define M 100005
using namespace std;
int a[M],n,m,c[M],w;
ll f[2][M];
void solve(int l,int r,int L,int R,ll s){
	if(l>r)return;
	int mid=(l+r)>>1,x=0;
	For(i,l,mid)s+=c[a[i]]++;//,c[a[i]]++;
	For(i,L,min(R,mid)){
		s-=--c[a[i]];
		if(s+f[w^1][i]<f[w][mid])f[w][mid]=s+f[w^1][i],x=i;
	}
	For(i,L,min(R,mid))s+=c[a[i]]++;
	For(i,l,mid)s-=--c[a[i]];
	solve(l,mid-1,L,x,s);
	For(i,L,x-1)s-=--c[a[i]];
	For(i,l,mid)s+=c[a[i]]++;
	solve(mid+1,r,x,R,s);
	For(i,L,x-1)c[a[i]]++;
	For(i,l,mid)c[a[i]]--;
}
int main(){
	scanf("%d%d",&n,&m);
	For(i,1,n){
		scanf("%d",&a[i]);
		f[1][i]=f[1][i-1]+c[a[i]];
		c[a[i]]++;
	}
	For(i,2,m){
		memset(c,0,sizeof c);
		For(i,1,n)f[w][i]=1e18;
		solve(1,n,1,n,0);
		w^=1;
	}
	printf("%lld\n",f[w^1][n]);
	return 0;
}