#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mark[10000005], used[10000007], pref[1000005];

vector<ll> prime, prime_sum;

ll query(ll x){
	ll pos = upper_bound(prime.begin(), prime.end(), x) - prime.begin() - 1;
	if(pos == -1) return 0;
	else return pref[pos];
}

int main(){
	cout.sync_with_stdio(false);
	cin.tie(NULL);
	ll n; cin >> n;
	for(ll i = 0; i < n; i++){
		ll x; cin >> x;
		used[x]++;
	}

	for(ll i = 2; i <= 1e7; i++) if(!mark[i]){
		prime.push_back(i);
		ll sum = 0;
		for(ll j = i; j <= 1e7; j+=i){
			mark[j] = 1;
			sum += used[j];
		}
		prime_sum.push_back(sum);
	}

	pref[0] = prime_sum[0];
	for(ll i = 1; i < prime.size(); i++)
		pref[i] = pref[i-1] + prime_sum[i];

	ll m; cin >> m;
	for(ll i = 0; i < m; i++){
		ll esq, dir; cin >> esq >> dir;
		cout << query(dir)-query(esq-1) << endl;
	}
}