#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;

const int N=100005;
const int M=25;
const ll inf=1000000000000000ll;

int n,m,now,h,t;
ll ans;
int cnt[N],a[N];
ll dp[M][N];

void add(int x){
	ans-=1ll*cnt[a[x]]*(cnt[a[x]]-1)/2;
	cnt[a[x]]++;
	ans+=1ll*cnt[a[x]]*(cnt[a[x]]-1)/2;
}

void del(int x){
	ans-=1ll*cnt[a[x]]*(cnt[a[x]]-1)/2;
	cnt[a[x]]--;
	ans+=1ll*cnt[a[x]]*(cnt[a[x]]-1)/2;
}

void go(int l,int r){
	while (h>l) add(--h);
	while (h<l) del(h++);
	while (t<r) add(++t);
	while (t>r) del(t--);
}

void solve(int l,int r,int pl,int pr){
	if (l>r||pl>pr) return;
	int i,mid=(l+r)>>1,id; ll mn=inf;
	for (i=pl;i<=pr;i++){
		go(i,mid);
//		cout<<i<<" "<<mid<<" "<<ans<<endl;
		if (dp[now-1][i-1]+ans<mn){
			mn=ans+dp[now-1][i-1];
			id=i;
		}
	}
	dp[now][mid]=mn;
//	printf("dp[%d][%d]=%lld\n",now,mid,mn);
	solve(l,mid-1,pl,id);
	solve(mid+1,r,id,pr);
}

int main(){
	int i,j;
	scanf("%d%d",&n,&m);
	for (i=1;i<=n;i++) scanf("%d",&a[i]);
	for (i=0;i<=m;i++)
		for (j=0;j<=n;j++) dp[i][j]=inf;
	dp[0][0]=0;
	h=1; t=0;
	for (i=1;i<=m;i++){
		now=i;
		solve(1,n,1,n);
	}
	printf("%I64d\n",dp[m][n]);
	return 0;
}