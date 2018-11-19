#include<bits/stdc++.h>
#define lf double
#define ll long long
#define ull unsigned ll
#define ii pair<int,int>
#define lolo pair<ll,ll>
#define il pair<int,ll>
#define iii pair<ii,int>
#define iiii pair<ii,ii>
#define iiii2 pair<int,iii>
#define pll pair<ll,ll>
#define heap priority_queue
#define mp make_pair
#define st first
#define nd second
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define all(x) x.begin(),x.end()
#define len(x) strlen(x)
#define sz(x) (int) x.size()
#define orta ((bas+son)/2)
#define min3(x,y,z) min(min(x,y),z)
#define max3(x,y,z) max(max(x,y),z)
#define dbgs(x) cerr<<(#x)<<" --> "<<(x)<<" "
#define dbg(x) cerr<<(#x)<<" --> "<<(x)<<endl;getchar()
#define pw(x) (1<<(x))
#define MOD 1000000007
#define inf 10000000000000009
#define N 100005
#define LOG 20
#define M 1000000000000000000
#define KOK 350
#define EPS 0.0025
#define pw(x) (1<<(x))
#define PI 3.1415926535
#define log sfeefw
using namespace std;

int n,k,lnow=1,rnow;
int fr[N],a[N];
ll cnow;
ll dp[2][N];

void add(int val,int amo) {

	if(amo>0) {

		cnow+=fr[val];

		fr[val]++;

	}
	else {

		fr[val]--;

		cnow-=fr[val];

	}

}

void bring(int x,int y) {

	while(lnow>x) {

		lnow--;

		add(a[lnow],1);

	}

	while(lnow<x) {

		add(a[lnow],-1);

		lnow++;

	}

	while(rnow<y) {

		rnow++;

		add(a[rnow],1);

	}

	while(rnow>y) {

		add(a[rnow],-1);

		rnow--;

	}


}

void solve(int bas,int son,int L,int R) {

	int tut=-1;

	if(L==-1 || R==-1 || bas>son) {

		return ;

	} 

	dp[1][orta]=inf;

	bring(min(R+1,orta),orta);

	for(int i=min(orta-1,R);i>=L;i--) {

		if(dp[1][orta]>dp[0][i]+cnow) {

			dp[1][orta]=dp[0][i]+cnow;

			tut=i;

		}

		lnow--;

		add(a[i],1);

	}

	solve(bas,orta-1,L,tut);
	solve(orta+1,son,tut,R);

}

int main() {

	scanf("%d %d",&n,&k);

	for(int i=1;i<=n;i++) {

		scanf("%d",&a[i]);

	}

	for(int i=0;i<=n;i++) {

		dp[0][i]=dp[1][i]=inf;

	}

	dp[0][0]=0;

	for(int i=1;i<=k;i++) {

		solve(1,n,0,n-1);

		for(int j=1;j<=n;j++) {

			swap(dp[0][j],dp[1][j]);

		}

	}

	printf("%lld",dp[0][n]);

}