/*
     The only people to profit from the mistakes of others are
     biographers.
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

ll A[N];

int main() {

	boost;

	int n; cin>>n;
	ll mx = 0;
	for(int i=1; i<=n; i++) {
		cin>>A[i];
		mx = max(mx, A[i]);
	}
	ll cnt = 0;
	for(int i=1; i<=n; i++) {
		cnt += mx - A[i];
	}

	ll la = mx, ra = 2e9;
	while(la < ra) {
		ll mid = (la + ra) >> 1;
		if(cnt + (mid-mx)*n >= mid) {
			ra = mid;
		}
		else la = mid+1;
	}
	cout<<la<<"\n";

	return 0;
}