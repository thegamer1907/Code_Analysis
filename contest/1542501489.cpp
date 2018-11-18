#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

const int N = 1e5;
int ar[N + 5];
ll dp[N + 5][21];
int cnt[N + 5];
stack<int> clr;

void clearCnt(){
	while(!clr.empty()){
		cnt[clr.top()] = 0;
		clr.pop();
	}
}

const ll INF = 1e18;
ll cost = 0;
int _l, _r;

void doMove(int l, int r){
	while(_l > l)cost += cnt[ar[--_l]]++;
	while(_r < r)cost += cnt[ar[++_r]]++;
	while(_l < l)cost -= --cnt[ar[_l++]];
	while(_r > r)cost -= --cnt[ar[_r--]];
}

void dnc(int l, int r, int optl, int optr, int k){
	if(l > r)return;
	int m = (l + r) / 2;
	
	
	ll mini = INF;
	int opt = -1;
	for(int i = min(m, optr); i >= optl; --i){
		doMove(i, m);
		
		if(dp[i - 1][k - 1] + cost < mini){
			mini = dp[i - 1][k - 1] + cost;
			opt = i;
		}
	}
	clearCnt();
	
//	cout << "SOLVE " << m << " " << k << " --> " << optl << " " << optr << " " << opt << endl;
	
	dp[m][k] = mini;
	dnc(l, m - 1, optl, opt, k);
	dnc(m + 1, r, opt, optr, k);
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, k; cin >> n >> k;
	
	for(int i = 1; i <= n; ++i) cin >> ar[i];
	
	ll cst = 0;
	for(int i = 1; i <= n; ++i){
		cst += cnt[ar[i]];
		if(cnt[ar[i]] == 0)clr.push(ar[i]);
		cnt[ar[i]]++;
		dp[i][1] = cst;
	}dp[0][1] = 0;
	clearCnt();
	for(int i = 2; i <= k; ++i){
		cost = 0, _l = _r = cnt[ar[1]] = 1;
		dnc(1, n, 1, n, i);
		dp[0][i] = INF;
		memset(cnt, 0, sizeof cnt);
	}
	
//	for(int i = 0; i <= k; ++i){
//		for(int j = 1; j <= n; ++j){
//			cout << dp[j][i] << " ";
//		}cout << endl;
//	}
	
	
	cout << dp[n][k] << endl;
}