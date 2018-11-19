#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

#define FOR(i,s,t) for(int i=(s),_t=(t);i<=_t;++i)
#define DOR(i,s,t) for(int i=(s),_t=(t);i>=_t;--i)
#define M 100005
#define N 25

typedef long long ll;
const ll LINF=(ll)3e18;

int val[M];
int cnt[M];
int pos_l,pos_r;
ll tot;

ll dp[N][M];

bool chkmi(ll &x,ll y) {return x>y?x=y,true:false;}

void solve(int L, int R, int l, int r,int k) {
	int mid=L+R>>1;
	dp[k][mid]=LINF;
	int pos;
	FOR(i,l,min(r,mid)) {
		while(pos_r<mid) tot+=cnt[val[++pos_r]]++;
		while(pos_r>mid) tot-=--cnt[val[pos_r--]];
		while(pos_l>i) tot+=cnt[val[--pos_l]]++;
		while(pos_l<i) tot-=--cnt[val[pos_l++]];
		
		if(chkmi(dp[k][mid],dp[k-1][i-1]+tot)) pos=i;
	}
	if(L<mid) solve(L,mid-1,l,pos,k);
	if(mid<R) solve(mid+1,R,pos,r,k);
}

int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	FOR(i,1,n) scanf("%d",&val[i]);
	
	pos_l=1;pos_r=0;tot=0;
	
	FOR(i,1,n) dp[0][i]=LINF;
	dp[0][0]=0;
	
	FOR(i,1,k) solve(1,n,1,n,i);
	
	printf("%lld\n",dp[k][n]);
	return 0;
}