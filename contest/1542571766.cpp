#include <bits/stdc++.h>
using namespace std;

#define MEM(arr,val)memset((arr),(val), sizeof (arr))
#define PI (acos(0)*2.0)
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ALL(v)v.begin(),v.end()
#define PB(v)push_back(v)

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

ll gcd(ll a,ll b){return b == 0 ? a : gcd(b,a%b);}
ll lcm(ll a,ll b){return a*(b/gcd(a,b));}

/**
 * __builtin_popcount(int d) // count bits
 * __builtin_popcountll(long long d)
 * strtol(s, &end, base); // convert base number
 */
//----------------------------------------------------------------------//

bool bigger(vi a, vi b){

	int n = a.size();

	sort(ALL(a));
	sort(ALL(b));

	for (int i = n-1; i >= 0; --i) {
		if(b[i] < a[i])
			return true;
	}
	return false;
}

int main(){
	FASTER;

	int n, k;
	cin >> n >> k;


	map<int,int> seen;


	for (int i = 0; i < n; ++i) {

		int b = 0;
		for (int j = 0; j < k; ++j) {
			int bit;
			cin >> bit;
			b <<= 1;
			b+=bit;
		}

		if(b == 0){
			cout << "YES\n";
			return 0;
		}

		int b_bar = ((1 << k) - 1) & (~b);

		for(int mask = 0 ; mask < (1<< k) ;mask++){

			int mask2 = mask & (~b);

			if(seen.count(mask2)){
				cout << "YES\n";
				return 0;
			}

		}

		seen[b] = 1;
	}

	cout << "NO\n";
	return 0;
}
