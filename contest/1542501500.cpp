#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <assert.h>
#include <cstring>
#include <iomanip>
#include <deque>

#define LL long long int
#define N 2005
#define INF 1000000000
#define MOD 1000000007
using namespace std;

int mask[16]={0},bc[4]={0};

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(0);cout.tie(0);
	int n,k,i,j;
	cin >> n >> k;
	for (i=0;i<n;i++) {
		for (j=0;j<k;j++) cin >> bc[j];
		int pos=0;
		for (j=0;j<k;j++) pos+=(1<<j)*bc[j];
		mask[pos]=1;
	}
	vector<int> p;
	for (i=0;i<16;i++) if (mask[i]) p.push_back(i);
	n=p.size();
	for (i=1;i<(1<<n);i++) {
		bc[0]=bc[1]=bc[2]=bc[3]=0;
		for (j=0;j<n;j++) if (i&(1<<j)) {
			for (k=0;k<4;k++) if (p[j]&(1<<k)) {
				bc[k]++;
			}
		}
		for (k=0;k<4;k++) if (2*bc[k]>__builtin_popcount(i)) break;
		if (k==4) {
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	
	return 0;
}
