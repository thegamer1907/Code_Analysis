/*
     Inside every short man is a tall man doubled over in extreme pain.
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

const int N = 1e7 + 5;
const int MOD = 1e9 + 7;

/***************************************************************************/

ll F[N];

int main() {

	boost;

	int n; cin>>n;

	F[0] = 0, F[1] = 1;

	for(int i=2; i<n; i++) {
		F[i] = (2 * F[i-1] + 3 * F[i-2]) % MOD;
	}

	ll ans = (3 * F[n-1]) % MOD;
	cout<<ans<<"\n";
	
	return 0;
}