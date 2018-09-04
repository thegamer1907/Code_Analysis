#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = (a); i < (b); i++)
#define iter(it,c) for(__typeof((c).begin()) it = (c).begin(); it != (c).end();++it)
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
const int INF = ~(1<<31);
const double pi = acos(-1);

int main() {
	cin.sync_with_stdio(false);
	ll C[3];
	memset(C,0,sizeof(C));
	string s;
	cin >> s;
	rep(i,0,s.size()) {
		if(s[i] == 'B') C[0]++;
		else if(s[i] == 'S') C[1]++;
		else C[2]++;
	}
	ll G[3],R[3];
	cin >> G[0] >> G[1] >> G[2];
	cin >> R[0] >> R[1] >> R[2];
	ll r;
	cin >> r;
	ll lo = 0, hi = 10000000000000LL;
	while(lo <= hi) {
		ll mid = (lo+hi)/2;
		ll N[3];
		ll money = r;
		rep(i,0,3) N[i] = C[i]*mid;
		rep(i,0,3) N[i] = max(N[i]-G[i],0LL);
		rep(i,0,3) money -= N[i]*R[i];
		if(money < 0) {
			hi = mid-1;
		} else lo = mid+1;
	}
	cout << (lo+hi)/2 << endl;
	return 0;
}

