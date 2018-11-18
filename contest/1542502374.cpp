#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int N = 1e5+50;
const ll oo = 1e18;
const ll mod = 1e9+7;

ll dp[N][21],a[N],f[N],ky,sl,sr,ans;

void add(int x){
	ans += f[a[x]];
	f[a[x]]++;
}

void remove(int x){
	f[a[x]]--;
	ans -= f[a[x]];
}

void change(int l,int r){
	if(l > r)return;
	while(sl < l)remove(sl++);
	while(sl > l)add(--sl);
	while(sr < r)add(++sr);
	while(sr > r)remove(sr--);
}

void solve(int l,int r,int x,int y){
	if(l > r)return;
	int cur = (l+r)/2;
	int ck = -1;
	dp[cur][ky] = oo;
	for(int i = max(x,cur);i<=y;i++){
		change(cur,i-1);
		if(dp[i][ky-1] + ans < dp[cur][ky]){
			dp[cur][ky] = dp[i][ky-1]+ans;
			ck = i;
		}
	}
	solve(l,cur-1,x,ck);
	solve(cur+1,r,ck,y);
}

int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>0;i--){
		dp[i][1] = dp[i+1][1];
		dp[i][1] += f[a[i]];
		f[a[i]]++;
	}
	for(int i=2;i<=k;i++){
		memset(f,0,sizeof(f));
		sl = 1;
		sr = 0;
		ans = 0;
		ky=i;
		solve(1,n,1,n);
	}
	cout << dp[1][k] << endl;
}