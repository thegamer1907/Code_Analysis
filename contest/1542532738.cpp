#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

const int N=100005;
const LL INF=1e18;

int num[N];
LL cnt[N],tot;
LL dp[25][N];
int n,k;
int lt, rt;

void add(int l, int r){
	for(int i=l; i<=r; i++){
		tot+=cnt[num[i]];
		cnt[num[i]]++;
	}
}

void sub(int l, int r){
	for(int i=l; i<=r; i++){
		cnt[num[i]]--;
		tot-=cnt[num[i]];
	}
}

void f(int l, int r){
	if(l>r) return;
	if(lt<l){
		sub(lt,l-1);
	}
	else{
		add(l,lt-1);
	}
//	printf("1: %lld, ",tot);
	if(rt<r){
		add(rt+1,r);
	}
	else{
		sub(r+1,rt);
	}
//	printf("2: %lld\n",tot);
	lt=l;rt=r;
}

void calc(int lvl, int L, int R, int optL, int optR){
	if(L>R) return;
	int mid=(L+R)/2;
	int opt=-1;
	dp[lvl][mid]=INF;
	for(int i=optL; i<=min(optR,mid); i++){
//		puts("before");
//		printf("lvl: %d, lt: %d, rt: %d, left: %d, right: %d, tot: %lld\n",lvl,lt,rt,i+1,mid,tot);
		f(i+1,mid);
//		puts("after");
//		printf("lvl: %d, lt: %d, rt: %d, left: %d, right: %d, tot: %lld\n",lvl,lt,rt,i+1,mid,tot);
//		puts("");
		if(dp[lvl-1][i]+ tot< dp[lvl][mid]){
			dp[lvl][mid]=dp[lvl-1][i]+tot;
			opt=i;
		}
	}
	calc(lvl,L,mid-1,optL,opt);
	calc(lvl,mid+1,R,opt,optR);
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	lt=1; rt=0;
	tot=0;
	cin>>n>>k;
	for(int i=1; i<=n; i++) cin>>num[i];
	memset(cnt,0,sizeof cnt);
	for(int i=1; i<=n; i++){
		f(1,i);
		dp[1][i]=tot;
	}
	for(int i=2; i<=k; i++){
		calc(i,1,n,1,n);
//		for(int j=1; j<=n; j++) printf("%lld ",dp[i][j]);
//		puts("");
	}
	cout<<dp[k][n]<<endl;
	return 0;
}