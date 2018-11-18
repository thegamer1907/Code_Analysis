/*input
3 2
1 0
1 1
0 1

*/
#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
#define F first
#define S second
#define pb push_back
#define all(c) c.begin(), c.end()
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;


#define N 200005
#define mod 1000000007

int dp[20];

int main()
{
	ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	for(int i=0; i<n; i++) {
		int num = 0;
		int val;
		for(int j = 0; j < k; j++) {
			cin >> val;
			if(val)
				num |= (1<<j);
		}
		dp[num]++;
	}
	bool isPoss = false;
	// for(int j=0; j<(1<<k); j++) 
	// 	cout << j << " " << dp[j] << endl;
	// cout << (1<<(1<<k)) << endl;
	for(int i=1; i<(1<<(1<<k)); i++) {
		vector<int> v(k, 0);
		bool flag = false;
		int pb = 0;
		for(int j=0; j<(1<<k); j++) {
			if(i & (1 << j))
				if(dp[j]) {
					pb++;
					flag = true;
					for(int l=0; l<k; l++) {
						if(j & (1 << l)) {
							v[l] += 1; 
						}
					}
				}
		}
		for(int j=0; j<k; j++) {
			// cout << v[j];
			if(v[j] > pb/2) {
				flag = false;
				break;
			}
		}
		//  cout << "      ";
		// for(int l=0; l<k; l++) {
		// 	if((i & (1 << l)))cout << 1;
		// 	else cout <<0;
		// }
		// cout << endl;
		if(flag) {
			isPoss = true;
			break;
		}
	}
	if(isPoss) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}