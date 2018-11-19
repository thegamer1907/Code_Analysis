#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define upperlimit 200100
#define INF 1000000100
#define INFL 1000000000000000100
#define eps 1e-8
#define endl '\n'
#define sd(n) scanf("%d",&n)
#define slld(n) scanf("%lld",&n)
#define pd(n) printf("%d",n)
#define plld(n) printf("%lld",n)
#define pds(n) printf("%d ",n)
#define pllds(n) printf("%lld ",n)
#define pdn(n) printf("%d\n",n)
#define plldn(n) printf("%lld\n",n)
#define REP(i,a,b) for(i=a;i<=b;i++)
#define mp make_pair
#define pb push_back
#define pcc pair<char,char>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define F first
#define S second
#define clr(a) memset(a,0,sizeof(a))
using namespace std;

ll gcd(ll n1,ll n2){
	if(!n1)return n2;
	if(!n2)return n1;
	if(n1%n2==0)return n2;
	return gcd(n2,n1%n2);
}
ll powmod(ll base,ll exponent){
	base%=mod;
	ll ans=1;
	while(exponent){
		if(exponent&1)ans=(ans*base)%mod;
		base=(base*base)%mod;
		exponent/=2;
	}
	ans%=mod;
	return ans;
}
int arr[upperlimit+1];
int best[22][upperlimit+1];
ll dp[22][upperlimit+1];
int cnt[upperlimit+1];
ll cost=0,cl=1,cr=0;
void add(int i){
	cost+=cnt[arr[i]];
	cnt[arr[i]]++;
}
void del(int i){
	cnt[arr[i]]--;
	cost-=cnt[arr[i]];
}
void MO(int l,int r){
	while(cr<r)add(++cr);
	while(cl>l)add(--cl);
	while(cr>r)del(cr--);
	while(cl<l)del(cl++);
}
void fill(int l,int r,int lo,int hi,int k){
	if(l>r)return;
	int mid=(l+r)>>1;
	best[k][mid]=-1;
	for(int i=lo;i<=min(hi,mid);i++){
		MO(i,mid);
		if(dp[k-1][i-1]+cost<dp[k][mid]){
			dp[k][mid]=dp[k-1][i-1]+cost;
			best[k][mid]=i;
		}
	}
	fill(l,mid-1,lo,best[k][mid],k);
	fill(mid+1,r,best[k][mid],hi,k);
}
int main()
{
	int n,i,j,k,K;
	sd(n);sd(K);
	for(i=0;i<=n;i++)for(j=0;j<=K;j++)dp[j][i]=INFL;
	for(i=1;i<=n;i++){
		sd(arr[i]);
		cost+=cnt[arr[i]];
		cnt[arr[i]]++;
		best[1][i]=1;
		dp[1][i]=cost;
	}
	cost=0;
	clr(cnt);
	for(k=2;k<=K;k++)fill(1,n,1,n,k);
	plldn(dp[K][n]);
	return 0;
}