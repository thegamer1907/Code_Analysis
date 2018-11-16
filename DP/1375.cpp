#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
ll dp[110][110];

int main(void) {
	ll n;
	scanf("%lld", &n);
	ll oneCT = 0, zeroCt = 0;
	vi bits;
	for(ll i = 0; i < n; i++) {
		ll tmp;
		scanf("%lld", &tmp);
		bits.push_back(tmp);
		if(tmp == 1)
			oneCT += 1;
	}
	for(ll i = 0; i < n; i++) {
		if(bits[i] == 1)
			dp[i][i] = oneCT-1;
		else
			dp[i][i] = oneCT+1;
	}
	for(ll i = 0; i < n; i++) {
		for(ll j = i+1; j < n; j++) {
			if(bits[j] == 1)
				dp[i][j] = dp[i][j-1]-1;
			else
				dp[i][j] = dp[i][j-1]+1;
		}
	}
	ll max = 0;
	for(ll i = 0; i < n; i++) {
		for(ll j = i; j < n; j++) {
			if(dp[i][j] >= max)
				max = dp[i][j];
		}
	}
	printf("%lld\n", max);
	return 0;
}