#include<bits/stdc++.h>
#define x first
#define y second
#define bug(x) cerr<<#x<<'='<<x<<' '
#define debug(x) cerr<<#x<<'='<<x<<'\n'
#define FOR(a,b,c) for(int a=(b),a##_end=(c);a<=a##_end;++a)
#define ROF(a,b,c) for(int a=(b),a##_end=(c);a>=a##_end;--a)
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
const int INF=0x3f3f3f3f,N=1e5+10;
template<class T>inline bool chkmin(T &A,T B){return B<A?A=B,1:0;}
template<class T>inline bool chkmax(T &A,T B){return A<B?A=B,1:0;}
int n,m,A[N],cnt[N],L=1,R,cur;
ll tot,dp[2][N];
void get(int l,int r){
	while(l<L)tot+=cnt[A[--L]]++;
	while(R<r)tot+=cnt[A[++R]]++;
	while(L<l)tot-=--cnt[A[L++]];
	while(r<R)tot-=--cnt[A[R--]];
}
void Solve(int l,int r,int lim1,int lim2){
	if(l>r)return;
	int mid=(l+r)>>1,t=0;
	FOR(i,lim1,min(lim2,mid)){
		get(i,mid);
		if(chkmin(dp[!cur][mid],dp[cur][i-1]+tot))
			t=i;
	}
	Solve(l,mid-1,lim1,t);
	Solve(mid+1,r,t,lim2);
}
int main(){
	scanf("%d%d",&n,&m);
	FOR(i,1,n){
		scanf("%d",&A[i]);
		get(1,i);
		dp[0][i]=tot;
	}
	FOR(i,2,m){
		memset(dp[!cur],63,sizeof(dp[!cur]));
		Solve(1,n,1,n);
		cur=!cur;
	}
	printf("%lld\n",dp[cur][n]);
	return 0;
}
