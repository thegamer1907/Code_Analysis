#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,q;
	cin >> n >> q;
    vector<ll> a;
	ll accu = 0;
	ll data;
	for(ll i = 0 ; i < n ; i++){
		cin >> data;
		accu += data;
		a.push_back(accu);
	}

	ll kills = 0;
	for(ll ii = 0 ; ii < q ; ii++){
		cin >> data;
		kills += data;
		if(kills >= accu){kills = 0 ; cout << n << "\n"; continue;}
		vector<ll>::iterator ind = lower_bound(a.begin(), a.end(), kills);
		ll index = ind - a.begin();
		if(a[index] == kills){cout << n-index-1 << "\n"; continue;}
		else{cout << n-index << "\n"; continue;}
	}
}