/*
     Rumors are the sauce of a dry life.
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

int main() {

	boost;
	string str; cin>>str;
	int b = count(str.begin(), str.end(), 'B');
	int s = count(str.begin(), str.end(), 'S');
	int c = count(str.begin(), str.end(), 'C');

	int nb, ns, nc; cin>>nb>>ns>>nc;
	int pb, ps, pc; cin>>pb>>ps>>pc;
	ll r; cin>>r;

	ll la = 0, ra = 1e13;
	while(la < ra) {
		ll mid = (la + ra + 1) >> 1;
		ll rb = max(0LL, mid*b - nb);
		ll rs = max(0LL, mid*s - ns);
		ll rc = max(0LL, mid*c - nc);
		if(rb*pb + rs*ps + rc*pc <= r) {
			la = mid;
		}
		else {
			ra = mid-1;
		}
	}
	cout<<la<<"\n";
	
	return 0;
}