#include<bits/stdc++.h>
using namespace std;
#define N 100010
int A[N],cnt[N],L,R;
long long sum;
void Move(int l,int r){
	while(l<L)sum+=cnt[A[--L]]++;
	while(R<r)sum+=cnt[A[++R]]++;
	while(L<l)sum-=--cnt[A[L++]];
	while(r<R)sum-=--cnt[A[R--]];
}
long long dp[2][N];
int f;
void Solve(int l,int r,int pl,int pr){
	if (l>r){
		return;
	}
	int mid=(l+r)>>1,i,pos=l;
	for (i=pl;i<=pr && i<=mid;i++){
		Move(i,mid);
		if (dp[!f][i-1]+sum<dp[f][mid]){
			dp[f][mid]=dp[!f][i-1]+sum;
			pos=i;
		}
	}
	Solve(l,mid-1,pl,pos);
	Solve(mid+1,r,pos,pr);
}
int main(){
	L=1,R=0;
	int n,m,i;
	scanf("%d%d",&n,&m);
	for (i=1;i<=n;i++){
		scanf("%d",&A[i]);
		Move(1,i);
		dp[f][i]=sum;
	}
	for (i=2;i<=m;i++){
		f^=1;
		memset(dp[f],63,sizeof(dp[f]));
		Solve(1,n,1,n);
	}
	printf("%lld\n",dp[f][n]);
	return 0;
}