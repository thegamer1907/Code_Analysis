#include<bits/stdc++.h>

#define INF 1000010000
#define nl '\n'
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define pii pair<int,int>
#define pdd pair<double,double>
#define all(c) (c).begin(), (c).end()
#define SORT(c) sort(all(c))
#define sz(c) (c).size()
#define rep(i,n) for( int i = 0; i < n; ++i )
#define repi(i,n) for( int i = 1 ; i <= n; ++i )
#define repn(i,n) for( int i = n - 1 ; i >= 0 ; --i )
#define repf(j,i,n) for( int j = i ; j < n ; ++j )
#define die(s) {std::cout << s << nl;}
#define dier(s) {std::cout << s; return 0;}
#define vi vector<int>
typedef long long ll;

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.precision(0); 

	int n , k;
	cin >> n >> k;
	
	set<int> s;
	
	rep(i , n){
		int x = 0;
		rep(j , k){
			int t;
			cin >> t;
			if(t == 1){
				x ^= 1 << j;	
			}
		}
		s.insert(x);
	}
	
	vi v;
	for(int e : s)v.pb(e);
	
	repi(mask , (1 << sz(v)) - 1){
		vi cnt(k , 0);
		int tot = __builtin_popcount(mask);
		rep(i , sz(v)){
			if(mask & (1 << i))
				rep(j , k){
					if(v[i] & (1 << j)){
						++cnt[j];
					}
				}
		}
		bool ck = 1;
		rep(i , k){
			ck &= (2 * cnt[i] <= tot); 
		}
		if(ck){
			dier("YES");
		}
	}
	cout << "NO";
	
	

	return 0;
}