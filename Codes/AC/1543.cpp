/*
 *  NIKHILESH CHAMARTHI @ nikki371  ==> CSE(2015-19)
 *  VIT UNIVERSITY, VELLORE
*/

#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define mset(m,v) memset(m,v,sizeof(m))
#define inrep int tc79;cin>>tc79;while(tc79--)
#define cppio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

// SOLUTION

int n, s;
ll arr[100005];
ll ans;
ll canbuy(int k) {
	vll st;
	for(int i = 1; i <= n; ++i) {
		st.pb(arr[i] + 1ll * i * k);
	}
	sort(st.begin(), st.end());
	ll sum = 0;
	for(int i = 0; i < k; ++i) {
		sum += st[i];
	}
	if(sum <= s) return sum;
	else return 0;
}
int main(){
	cppio;
	cin >> n >> s;
	for(int i = 1; i <= n; ++i) cin >> arr[i];
	int lo = 1, hi = n;
	while(lo <= hi) {
		int mid = (lo + hi) >> 1;
		ll tmp = canbuy(mid);
		if(tmp) {
			ans = tmp;
			lo = mid + 1;
		}
		else hi = mid - 1;
	}
	cout << lo - 1 << " " << ans << "\n";
	return 0;
}
