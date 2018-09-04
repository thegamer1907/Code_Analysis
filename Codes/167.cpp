#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>

#define amit_839 ios_base::sync_with_stdio(0), cin.tie(0),cout.tie(0)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define rrep(i, a, b) for (int i = (a); i > (b); i--)
#define	PRINT(x) cerr<<#x<<" is "<<x<<nl;
#define all(x) (x).begin(), (x).end()
#define sz size()
#define eb emplace_back
#define nl '\n'

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int mod = 1e9 + 7;


void solve() {

	int n;
	cin >> n;
	vi arr(n+1,0);

	rep(i, 1, n+1) {
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	int m;
	cin >> m;
	while (m--) {
		int id, l, r, mid;
		cin >> id;
		l = 1; r = n;
		while (l <= r) {
			mid = (l + r) >> 1;
			if (id<=arr[mid] and arr[mid - 1] < id) {
				cout << mid << nl;
				break;
			}
			else if (arr[mid] < id) l = mid + 1;
			else r = mid - 1;
		}
	}
}



signed main() {

#ifdef	AKP
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	freopen("err.txt", "w", stderr);
#endif

	amit_839;
	solve();
	cerr << "Time elapsed : " << 1.0* clock() / CLOCKS_PER_SEC << " s. \n";
	return 0;
}
