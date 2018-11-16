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
	string s,t;
	cin >> s >> t;
	int n = s.length();
	int shouldbeat = 0;
	int currat = 0;
	int rancn = 0;
	for(int i = 0; i < n; i++) {
		if(s.at(i) == '+') {
			shouldbeat++;
		} else {
			shouldbeat--;
		}
		if(t.at(i) == '+') {
			currat++;
		} else if(t.at(i) == '-') {
			currat--;
		} else {
			rancn++;
		}
	}
	int mov = abs(shouldbeat-currat);
	if(mov > rancn) {
		cout << "0";
		return 0;
	}
	int todir = (rancn-mov)/2;
	double ans = 1; //nck(rancn,todir)
	for(int i = rancn-todir+1; i <= rancn; i++) {
		ans*= i;
	}
	for(int i = 1; i <= todir; i++) {
		ans/= i;
	}
	for(int i = 1; i <= rancn; i++) {
		ans/= 2.0;
	}
	cout << setprecision(10) << ans;
	return 0;
}

