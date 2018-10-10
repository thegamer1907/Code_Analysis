#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < int(n); i++)
#define FOREACH(i, v) for (__typeof((v).begin()) i = (v).begin(); i != (v).end(); i++)
#define SIZE(v) ((int)(v).size())
#define pb push_back
#define mp make_pair
#define st first
#define nd second
#define ll long long
#define pii pair<int, int>

ll n;

bool solve(ll k){
	ll N = n, eaten = 0;
	while(N > 0){
		eaten += min(N, k);
		N -= min(N, k);
		N -= N/10ll;
	}
	return eaten >= (n + 1ll)/2ll;
}

int main(){
	scanf("%lld", &n);
	
	ll l = 1, m, r = n;
	while(l != r){
		m = (l + r)/2;
		if(solve(m)) r = m;
		else l = m + 1;
	}
	printf("%lld\n", l);
}