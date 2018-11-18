#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
typedef long long ll;
using namespace std;

const int MAX_N = 1000005,MAX_K = 25;
const ll INF = 1e18;

int N,K,x[MAX_N],frek[MAX_N];
ll dp[MAX_N][MAX_K],cost;
int s,t;


void read(){
	cin >> N >> K;
	for(int i=1;i<=N;i++) cin >> x[i];
}

void add(int i){
	cost += frek[x[i]];
	frek[x[i]]++;
}

void del(int i){
	frek[x[i]]--;
	cost -= frek[x[i]];
}

void make(int start,int end,int s,int t){
	if(end < s || t < start){
		for(int i=start+1;i<=end;i++) del(i);
		for(int i=s+1;i<=t;i++) add(i);
	}else{
		if(s < start) for(int i=start;i>s;i--) add(i);
		else for(int i=start+1;i<=s;i++) del(i);
		if(end < t) for(int i=end+1;i<=t;i++) add(i);
		else for(int i=end;i>t;i--)del(i);
	}
}

void computeDP(int k,int ileft,int iright,int jleft, int jright,int start,int end){
	int mid = (ileft + iright) >> 1;
	dp[mid][k] = INF;
	int tmp = 0;
	make(start,end,jleft,mid);
	for(int i=jleft;i<=min(mid-1,jright);i++){
		ll t = dp[i][k-1] + cost;
		if(dp[mid][k] > t) {
			dp[mid][k] = t;
			tmp = i;
		}
		del(i+1);
	}
	for(int i=min(mid-1,jright);i>=tmp;i--) add(i+1);
	if(mid+1 <= iright) computeDP(k,mid+1,iright,tmp,jright,tmp,mid);
	if(ileft <= mid-1) computeDP(k,ileft,mid-1,jleft,tmp,tmp,mid);
	make(tmp,mid,start,end);
}

void solve(){
	for(int i=1;i<=K;i++){
		computeDP(i,1,N,0,N-1,-1,-1);
	}
}

void build(){
	for(int i=1;i<=N;i++) dp[i][0] = INF;
}


int main(){
	read();
	build();
	solve();
	cout << dp[N][K] << "\n";
}
