#include <bits/stdc++.h>
#define LL long long
#define Accel ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define Re(a,b) memset(a,b,sizeof a)
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ALL(X) (X).begin(), (X).end()
#define FOR(I, A, B) for (int I = (A); I <= (B); I++)
#define REP(I, N) for (int I = 0; I < (N); I++)
#define MID ((l+r)>>1)
#define lc (rt<<1)
#define rc (rt<<1|1)
#define ls lc,l,MID
#define rs rc,MID+1,r
#define st 1,1,n
#define PII pair<int,int>
using namespace std;
//LL pw(LL a, LL b,LL M) { return b ? b & 1 ? a*pw(a, b - 1,M) % M : pw(a*a%M, b>>1,M) : 1; }
//void add(int x){while(x<N)BIT[x]++,x+=x&-x;}
//int sum(int x){return x?BIT[x]+sum(x-(x&-x)):0;}
const int N=1e5+1;
const int M=1e9+7;
int n,k,a[N],t,ri,le;
LL dp[N][2],sum,c[N];
void solve(int l,int r,int L,int R){
	if(l>r)return ;
	int m=l+r>>1,p=min(R,m);
	while(ri<m)sum+=c[a[++ri]]++;
	while(ri>m)sum-=--c[a[ri--]];
	while(le<p+1)sum-=--c[a[le++]];
	while(le>p+1)sum+=c[a[--le]]++;
	for(int j=p;j>=L;j--){
		sum+=c[a[j]]++;
		if(dp[m][t^1]>dp[j-1][t]+sum)
			dp[m][t^1]=dp[j-1][t]+sum,p=j;
	}
	solve(l,m-1,le=L,p);
	solve(m+1,r,p,R);
}
int main(){Accel
	cin>>n>>k;
	FOR(i,1,n)cin>>a[i],dp[i][0]=dp[i][1]=1LL<<60;	
	dp[0][0]=0;
	FOR(i,1,k){
		sum=0;
		ri=0,le=1;
		Re(c,0);
		solve(i,n,i,n);
		t^=1;
	}
	cout<<dp[n][t]<<endl;
}
