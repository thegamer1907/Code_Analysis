/*
     They don't invite you to the White House for a drink because they
     think you are thirsty.
*/


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

const int N = 1e5 + 5;

/***************************************************************************/

bool isAllow(int b, int il, int ig, int lb, int rb) {
	return (il || b <= rb) && (ig || b >= lb);
}

ll l, r;
ll dp[60][2][2][2][2];

ll fun(int b, int il1, int ig1, int il2, int ig2) {
	if(b < 0) return 0;
	ll &memo = dp[b][il1][ig1][il2][ig2];
	if(memo != -1) return memo;

	int lb = (l & (1LL<<b)) ? 1 : 0;
	int rb = (r & (1LL<<b)) ? 1 : 0;

	bool c01, c11, c02, c12;
	c01 = c11 = c02 = c12 = false;

	c01 = isAllow(0, il1, ig1, lb, rb);
	c11 = isAllow(1, il1, ig1, lb, rb);
	c02 = isAllow(0, il2, ig2, lb, rb);
	c12 = isAllow(1, il2, ig2, lb, rb);

	ll ans = 0;
	if((c01 && c12) || (c11 && c02)) {

		if(c01 && c12) ans = max(ans, fun(b-1, il1 || rb, ig1, il2, ig2 || !lb ));
		if(c11 && c02) ans = max(ans, fun(b-1, il1 , ig1 || !lb, il2 || rb, ig2 ));

		ans += (1LL<<b);
	}
	else {

		if(c01 && c02) ans = max(ans, fun(b-1, il1 || rb, ig1, il2 || rb, ig2 ));
		if(c11 && c12) ans = max(ans, fun(b-1, il1, ig1 || !lb, il2, ig2 || !lb ));
	}

	return memo = ans;
}

int main() {

	boost;

	cin>>l>>r;
	memset(dp, -1, sizeof dp);
	cout<<fun(59, 0, 0, 0, 0)<<"\n";
	
	return 0;
}