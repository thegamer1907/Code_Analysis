#include <algorithm>
#include <cstdio>
#include <functional>
#include <iostream>
#include <cfloat>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

const long double pi = 3.141592653589793;

#define debug(x) cout << #x << " = " << (x) << endl;
#define rep(i, n) for(int i = 0;i < n;i++)
#define pb push_back
#define mp make_pair
#define mod 1000000007

//#define READ_FROM_FILE

#define Nmax 10000001

vector<bool> prime(Nmax, true);
vector<int> counter(Nmax, 0);
vector<long long> f(Nmax, 0);

int main() {
	ios::sync_with_stdio(false);
	#ifdef READ_FROM_FILE
    freopen("input.in","r",stdin);
 	freopen("output.out","w",stdout);
	#endif

	prime[0] = prime[1] = false;
	for(int i = 2;i < Nmax;i++) {
		if(prime[i]) {
			int j = i+i;
			while (j < Nmax) {
				prime[j] = false;
				j += i;
			}
		}
	}

	int n, x;cin>>n;
	rep(i, n) {
		cin>>x;
		counter[x]++;
	}

	for(int i = 2;i < Nmax;i++) {
		if(not prime[i]) {
			f[i] = f[i-1];
			continue;
		}

		int j = i;
		int ans = 0;
		while (j < Nmax) {
			ans += counter[j];
			j += i;
		}

		f[i] = ans;
		f[i] += f[i-1];
	}

	int q;cin>>q;
	while (q--) {
		int x, y;cin>>x>>y;
		y = min(y, Nmax-1);

		if(x > y) cout<<"0\n";
		else cout<<f[y]-f[x-1]<<endl;
	}

	return 0;
}
