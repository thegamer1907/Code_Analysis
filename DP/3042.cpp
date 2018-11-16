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

const int MOD = 1e9 + 7;

/***************************************************************************/

ll C[2][2];
void multiply(ll A[2][2], ll B[2][2]) {
	for(int i=0; i<2; i++) {
		for(int j=0; j<2; j++) {
			for(int k=0; k<2; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	for(int i=0; i<2; i++) {
		for(int j=0; j<2; j++) {
			A[i][j] = C[i][j] % MOD;
			C[i][j] = 0;
		}
	}
}

int main() {

	boost;

	int n; cin>>n;
	if(n == 1) {
		cout<<"0\n";
		return 0;
	}
	
	ll A[2][2] = {{1, 0},
				  {0, 1}};

	ll B[2][2] = {{2, 3},
				  {1, 0}};

	int p = n-2;
	for(int i=29; i>=0; i--) {
		multiply(A, A);
		if(p & (1<<i)) {
			multiply(A, B);
		}
	}

	ll ans = (3 * A[0][0]) % MOD;
	cout<<ans<<"\n";

	return 0;
}