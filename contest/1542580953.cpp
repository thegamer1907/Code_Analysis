#include<bits/stdc++.h>

#define mst(a, b) memset(a, b, sizeof(a))
#define clr(a) mst(a, 0)
#define inf 0x3f3f3f3f
#define pb push_back
#define mp make_pair
#define sz(x) (int)x.size()
#define lowbit(x) (x&(-x))
#define fi first
#define se second
#define rep(i, a, b) for(int i = a; i <= b; i++)
#define per(i, a, b) for(int i = a; i >= b; i--)

#define pr(x) cout << #x << " = " << x << endl;

using namespace std;

const int mod = 1e9 + 7;
const int N = 1e6 + 5;

typedef long long ll;
typedef vector<int> V;
typedef pair<int, int> P;
int vis[20];
int n, k;
V a;
int main() {
	//freopen("a.in", "r", stdin);
	//freopen("a.out", "w", stdout);
	cin >> n >> k;
	rep(i, 1, n) {
		int x;
		int sta = 0;
		rep(j, 0, k - 1) {
			cin >> x;
			sta += (1 << j) * x;
		}
		vis[sta]++;
	}
	if(vis[0]) {
		cout << "YES";
		return 0;
	}
	int up = (1 << k) - 1;
	rep(i, 1, up) {
		if(vis[i]) {
			a.clear();
			rep(j, 0, k - 1) {
				if((1 << j) & i) {
					a.pb(j);
				} 
			}
			rep(j, 0, up) {
				if(vis[j]) {
					int flag = 0;
					rep(k, 0, sz(a) - 1) {
						if((1 << a[k]) & j) {
							flag = 1;
						}
					}
					if(!flag) {
						cout << "YES";
						return 0;
					} 
				}
			}
		}
	}
	cout << "NO";
}


