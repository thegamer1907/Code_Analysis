// KALAM
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
const int N = 1e5 + 5;
const int MOD = 1e9 + 7;
const int inf = 2e9;
ll n,a[N],tmp[N],S;
ll solve(ll t){
	ll ans = 0;
	for(int i = 1;i <= n;i++){
		tmp[i] = a[i] + i * t;
	}
	sort(tmp + 1,tmp + n + 1);
	for(int i = 1;i <= t;i++){
		ans += tmp[i];
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin >> n >> S;
	for(int i = 1;i <= n;i++)cin >> a[i];
	int l = 0,r = n + 1;
	while(r - l > 1){
		int mid = (l + r) / 2;
		if(solve(mid) <= S){
			l = mid;
		}
		else r = mid;
	}
	cout << l << ' ' << solve(l);
	
	
}
