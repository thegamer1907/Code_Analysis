#include<bits/stdc++.h>
#define debug(x) cerr << #x << " = " << x << "\n";
#define debug_v(x) cerr << #x << " ="; for(auto i : x) {cerr << " [" <<  i << "]";} cerr << "\n";
using namespace std;
using ll = long long;
using ld = long double;
const double PI = acos(-1);
const int mod = 1e9 + 7;
const int inf = 1e9 + 100;
const ll inf64 = 1e18 + 100;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cout << fixed << setprecision(100);
	ll n, m, k, answer = 0;
	cin >> n >> m >> k;
	vector<ll> a(m);
	for (int i = 0; i < m; i++){
		cin >> a[i];
	}
	ll minus = 0;
	ll it = 0, qan = 0;
	ll l = 1, r = k;
	while(it < m){
		if(a[it] - minus >= l && a[it] - minus <= r){
			qan++;
			it++;
		}
		else{
			if(qan != 0){
				minus += qan;
				answer++;
				qan = 0;
			}
			else{
				l += k;
				r += k;
				if(r > n){
					l = 1;
					r = k;
				}
			}
		}	
		
	}
	if(qan != 0){
		answer++;
	}
	cout << answer << "\n";
	return 0;
}