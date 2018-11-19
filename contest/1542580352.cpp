//	Mohib Manva
#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define LOCAL 0
#define pb push_back
#define ll long long

ll po(ll a,ll b){
	ll x = 1,y=a;
	while(b>0){
		if(b%2){
			x = x*y;
			x %= mod;
		}
		y=y*y;
		y%=mod;
		b/=2;
	}
	return x;
}

static int dp[(1<<5)];
int full;
static int cnt[5],k;
bool one = true;

void solve(int now){
	if(now == full){
		bool res = 1;
		for(int i=0;i<k;i++){
			res &= (cnt[i] <= 0);
		}
		if(res && one){
			one = res = false;
		}
		if(res){
			puts("YES");
			exit(0);
		}
		return;
	}
	if(dp[now] > 0){
		for(int i=0;i<k;i++){
			if((now>>i)&1){
				cnt[i]++;
			} else {
				cnt[i]--;
			}
		}
		solve(now+1);
		for(int i=0;i<k;i++){
			if((now>>i)&1){
				cnt[i]--;
			} else {
				cnt[i]++;
			}
		}
	}
	solve(now+1);
	return;
}

int main(){
	if(LOCAL){
    	freopen("C:/Users/gold/Desktop/sublime IO/input.txt","r",stdin);
    	freopen("C:/Users/gold/Desktop/sublime IO/output.txt","w",stdout);
	}
	int T = 1;
	//scanf("%d",&T);
	while(T--){
		int n;
		scanf("%d %d",&n,&k);
		full = (1<<k);
		for(int i=0;i<n;i++){
			int mask = 0;
			for(int j=0;j<k;j++){
				int x;
				scanf("%d",&x);
				if(x == 1){
					mask |= (1<<j);
				}
			}
			dp[mask]++;
		}	
		solve(0);
		puts("NO");
	}
	return 0;	
}