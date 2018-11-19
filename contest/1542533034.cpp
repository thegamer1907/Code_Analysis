#include <utility>
#include <vector>
#include <string>
#include <iostream>
#include <set>
#include <map>
#include <bitset>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define repp(i,a,n) for (int i=a;i<n;i+=a)
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define sz(x) sizeof(x)
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<pii> vpi;
const ll mod = 1000000007;

//head
int main() {
	int n, k; cin >> n >> k;
	vi c(16);
	rep(i, 0, n) {
		int s = 0;
		rep(j, 0, k) {
			int x; cin >> x;
			s = s * 2 + x;
			//cout << "S " << (i+1) << " : " << s << endl;
		}
		c[s]++;
	}
	rep(i, 0, (1 << k)) {
		rep(j, 0, (1 << k)) {
			if (c[i] && c[j] && ((i & j) == 0)) {
				cout << "YES";
				//system("pause");
				return 0;
			}
		}
	}
	cout << "NO";
	//system("pause");
}