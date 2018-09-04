//#define __USE_MINGW_ANSI_STDIO 0
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";

#define boost ios::sync_with_stdio(0); cin.tie(0)

#define fi first
#define se second

typedef long long ll;
typedef double ld;
typedef pair<int, int> pii;

const int N = 1e6 + 5;

/***************************************************************************/

ll solve(ll num, ll n, ll m) {
	ll ans = 0;
	for(int i=1; i<=n; i++) {
		ans += min(m, num/i);
	}
	return ans;
}

int main() {

	boost;
	ll n, m, k; 
	cin>>n>>m>>k;
	
	ll la = 1, ra = n * m;
	while(la < ra) {
		ll mid = (la + ra) >> 1;
		if(solve(mid, n, m) >= k) {
			ra = mid;
		}
		else la = mid + 1;
	}
	cout<<la<<"\n";
	
	return 0;
}