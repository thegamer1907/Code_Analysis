#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,a,b) for(ll i=a;i <= b;i++)
#define rep(i,n) for(ll i=0;i < n;i++)
#define sz(x) x.size()
#define accuracy  ll precision = numeric_limits<double>::digits10
#define fast_io ios_base::sync_with_stdio(false)
#define N 100005
#define fd(i,a,b) for(int i=a;i >= b;i--)
#define pb push_back

int n,k,a[5],b[N][5];
bool pos;
vector<int> ord[16];
int ind[16];

int main() {
	fast_io;
	accuracy;
	cin >> n >> k;
	fr(i,1,n) {
		fr(j,1,k) {
			cin >> b[i][j];
			a[j] += b[i][j];
		}
	}
	fr(i,1,n) {
		int temp = 0;
		fr(j,1,k) {
			if(b[i][j] == 1) temp += (1 << (j-1));
		}
		ord[temp].pb(i);
	}
	if(n == 1 and sz(ord[0]) != 0) {
		cout << "YES\n";
		return 0;
	}
	fr(i,0,(1 << k)-1) {
		if(pos) break;
		fr(j,0,(1 << k)-1) {
			if(pos) break;
			if(i == j) {
				if((i&j) == 0 && sz(ord[i]) > 1) {
					pos = true;
					break;
				}
			}
			else {
				if((i&j) == 0 && sz(ord[i]) > 0 && sz(ord[j]) > 0) {
					pos = true;
					break;
				}
			}
		}
	}
	if(pos) cout << "YES\n";
	else cout << "NO\n";
}