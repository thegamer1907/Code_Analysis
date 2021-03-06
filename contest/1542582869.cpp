#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define f first
#define s second
#define fr freopen("in.txt","r",stdin)
#define pb push_back
#define pi pair<int,int>
#define pii pair<pi,int>

bool P[1<<16] ={0};
bool dp[1<<16] = {0};
int main() {
	int n,k;
	cin >> n >> k;
	int s;
	rep(i,n) {
		int mask = 0;
		rep(j,k) {
			cin >> s;
			if(s)  mask|=(1<<j);
		}
		P[mask] = 1;
		dp[mask] = 1;
	}
	if(P[0]) {
		cout << "YES";
		return 0;
	}
	rep(mask,(1<<k)) {
		rep(j,k) {
			if(mask&(1<<j)){
				dp[mask] |= dp[mask^(1<<j)];
			}
		}
	}
	rep(mask,(1<<k)) {
		if(P[mask]) {
			if(dp[( (1<<k)-1 ) ^  mask]) {
				cout << "YES";
				return 0;
			}		
		}
	}
	cout << "NO";
}