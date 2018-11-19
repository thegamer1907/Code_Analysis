#include<cstdio>
#include<cstring>
#include<algorithm>
#define rep(i,a,b) for(i=a;i<=b;i++)
using namespace std;
typedef long long ll;
const int N=100010,M=21;
const ll INF=1000000000000ll;
ll dp[M][N];int cnt[N];int a[N];int nowl,nowr;ll ans;
int n,K; 

void work(int l,int r){
	while(r>nowr){nowr++;ans+=cnt[a[nowr]];cnt[a[nowr]]++;}
	while(l<nowl){nowl--;ans+=cnt[a[nowl]];cnt[a[nowl]]++;}
	while(r<nowr){cnt[a[nowr]]--;ans-=cnt[a[nowr]];nowr--;}
	while(l>nowl){cnt[a[nowl]]--;ans-=cnt[a[nowl]];nowl++;}
}

void solve(int k,int l,int r,int L,int R){
	//if(l==r)	{dp[k][l]=dp[k-1][L-1]+ans;return;}
	int mid=l+r>>1;int k1=L;ll k2=INF;int i;
	rep(i,L,R){
		work(i,mid);
		if(dp[k-1][i-1]+ans<k2){k2=dp[k-1][i-1]+ans;k1=i;}
	}
	dp[k][mid]=k2;
	if(l<mid)	solve(k,l,mid-1,L,k1);
	if(mid<r)	solve(k,mid+1,r,k1,R);
}

int main(){
//	freopen("a.in","r",stdin);
//	freopen("a.out","w",stdout);
	int i,j;
	scanf("%d%d",&n,&K);
	rep(i,1,K)	rep(j,0,n)	dp[i][j]=INF;
	rep(i,1,n)	scanf("%d",&a[i]);
	rep(i,1,n){
		ans+=cnt[a[i]];cnt[a[i]]++;
		dp[1][i]=ans;
	}
	rep(i,2,K)	{nowl=1;nowr=0;ans=0;memset(cnt,0,sizeof(cnt));solve(i,1,n,1,n);}
	printf("%I64d\n",dp[K][n]);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	