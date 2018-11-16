#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int
#define vi vector<int>
#define vii vector< vector<int> >
#define PI 3.1415926535897932384626433832795
#define INF 9223372036854775807LL
#define endl "\n"

ll modpow(ll a, ll b) {
	if(b == 0) {
		return 1;
	}
	ll ans = modpow(a,b/2);
	ans = (ans*ans)%MOD;
	if(b%2) {
		ans = (ans*a)%MOD;
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int k,l,m,n,d;
	cin >> k >> l >> m >> n >> d;
	int an = 0;
	for(int i = 1; i <= d; i++) {
		if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0) {
			an++;
		}
	}
	cout << an;
	return 0;
}

