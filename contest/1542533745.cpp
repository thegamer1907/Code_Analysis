#include<bits/stdc++.h>
#define N 222222
#define M 1000000007
#define LL long long
#define MP make_pair
#define PB push_back
#define PII pair<int,int>
#define VI vector<int>
#define X first
#define Y second
#define CL(a) memset(a,0,sizeof a) 
#define fr(i,n) for(int i=1;i<=n;i++)
#define rd(x) scanf("%d",&x)
using namespace std;
int n,k,L,R,a[N],cnt[N];
LL an,f[N],g[N];
void add(int x){an+=cnt[x]++;}
void del(int x){an-=--cnt[x];}
void get(int l,int r){
	for(;L>l;)add(a[--L]);
	for(;R<r;)add(a[++R]);
	for(;L<l;)del(a[L++]);
	for(;R>r;)del(a[R--]);
}
void dp(int l,int r,int _l,int _r){
	if(l>r)return;
	int md=l+r>>1,u=0;
	for(int i=_l;i<=min(_r,md);i++){
		get(i,md);
		if(an+g[i-1]<f[md])f[md]=an+g[i-1],u=i;
	}
	if(md+1<=r)dp(md+1,r,u,_r);
	if(l<=md-1)dp(l,md-1,_l,u);
}
int main(){
	scanf("%d%d",&n,&k);L=1;R=0;
	fr(i,n)scanf("%d",&a[i]),f[i]=1e18;
	fr(i,k){
		for(int j=0;j<=n;j++)g[j]=f[j],f[j]=1e18;
		get(1,0);dp(1,n,1,n);
	}
	printf("%lld",f[n]);
}