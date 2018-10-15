#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define mod 1000000007


int main(){
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n, m;
	cin >> n >> m;
	ll a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	ll l = a[n - 1];
	ll r = 10000000;
	while(l < r){
		ll mid = (l + r) / 2;
		ll m1 = 0;
		for(int i = 0; i < n; i++){
			m1 += mid - a[i];
		}
		if(m1 < m){
			l = mid + 1;
		}
		else{
			r = mid;
		}
	}
	cout << l << " " << a[n - 1] + m << "\n";
	return 0;
}