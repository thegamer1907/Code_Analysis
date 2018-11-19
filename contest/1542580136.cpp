/*input
3 2
1 0
1 1
0 1
*/
#include <bits/stdc++.h>

using namespace std;

#define fr(i,a,b) for(int (i) = (a); (i) < (b); ++(i))
#define rp(i,n) fr(i,0,n)
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define mt make_tuple
#define mp make_pair
#define sz(a) (int)(a.size())
#define IOS ios::sync_with_stdio(0);cin.tie(0);
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;

const int inf = 0x3f3f3f3f;
const int neginf = 0xc0c0c0c0;

int main(){
	IOS
	int n, u, x;
	cin >> n >> u;
	vector<int> vec[n];
	vi fuck[16];
	rp(i, n){
		rp(j, u){
			cin >> x;
			vec[i].pb(x);
		}
	}
	rp(i, n){
		int msk = 0;
		rp(j, u){
			msk |= vec[i][j] ? (1 << j) : 0;
		}
		fuck[msk].pb(i);
		if(msk == 0){
			cout << "YES" << endl;
			return 0;
		}
	}
	fr(i, 0, 16){
		fr(j, 0, 16){
			if(fuck[i].empty() || fuck[j].empty()) continue;
			vi knows(u, 0);
			rp(y, u){
				if(i & (1 << y)) knows[y]++;
				if(j & (1 << y)) knows[y]++;
			}
			bool ok = true;
			rp(y, u) if(knows[y] == 2) ok = false;
			if(ok){
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	fr(i, 0, 16){
		fr(j, i+1, 16){
			fr(k, j+1, 16){
				if(fuck[i].empty() || fuck[j].empty() || fuck[k].empty()) continue;
				vi knows(u, 0);
				rp(y, u){
					if(i & (1 << y)) knows[y]++;
					if(j & (1 << y)) knows[y]++;
					if(k & (1 << y)) knows[y]++;
				}
				bool ok = true;
				rp(y, u){
					if(knows[y] >= 2){
						ok = false;
					}
				}
				if(ok){
					cout << "YES" << endl;
					return 0;
				}
			}
		}
	}
	fr(i, 0, 16){
		if(!fuck[i].empty()){
			fr(j, i, 16){
				fr(k, j, 16){
					fr(q, k, 16){
						if(fuck[i].empty() || fuck[j].empty() || fuck[k].empty() || fuck[q].empty()) continue;
						vi knows(u, 0);
						rp(y, u){
							if(i & (1 << y)) knows[y]++;
							if(j & (1 << y)) knows[y]++;
							if(k & (1 << y)) knows[y]++;
							if(q & (1 << y)) knows[y]++;
						}
						bool ok = true;
						rp(y, u){
							if(knows[y] > 2){
								ok = false;
							}
						}
						if(ok){
							cout << "YES" << endl;
							return 0;
						}
					}
				}
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}

