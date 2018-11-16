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

int A[N];

int main() {

	boost;

	int v; cin>>v;
	int mn = N;
	for(int i=1; i<=9; i++) {
		cin>>A[i];
		mn = min(mn, A[i]);
	}
	int d = v / mn;
	if(d == 0) {
		cout<<"-1\n";
		return 0;
	}
	int tot = d*mn;

	for(int i=1; i<=d; i++) {
		for(int j=9; ; j--) {
			if(tot-mn+A[j] <= v) {
				cout<<j;
				tot = tot-mn+A[j];
				break;
			}
		}
	}
	cout<<"\n";
	
	return 0;
}