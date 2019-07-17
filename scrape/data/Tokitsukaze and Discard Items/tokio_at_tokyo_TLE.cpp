#include <bits/stdc++.h>
using namespace std; typedef long double ld; typedef long long ll;
typedef unsigned long long ull;
#define MP make_pair
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORR(x,arr) for(auto& x:arr)
#define VI vector<int>
#define PII pair<int, int>
#define FI first 
#define SE second
#define ALL(x) (x).begin(), (x).end()
const int INF=1<<30; const ll LINF=1LL<<60 ; const ll MOD=1e9+7 ;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
//-------------------
vector<ll> v;
 
int main(){
	ll n,m,k; cin >> n >> m >> k;
	//v.push_back(0LL);
	FOR(i,1,m){
		ll p; scanf("%lld", &p);
		v.push_back(p);
	}
	ll ans = 0;
	ll cur = 0;
	ll edge = k+1;
	ll prev = 0;
	while(cur < m){
		while(true){
			ll dis = 0;
			while(cur+dis < m && v[cur+dis] < edge) dis++;
			//auto cur = lower_bound(prev, v.end(), edge);
			//ll dis = distance(prev, cur);
			if(dis > 0){
				edge += dis;
				cur += dis;
				//prev = cur;
				ans +=  1;
				//cout << dis << ' ';
			}else{
				edge += k;
				//cout << "NO" <<  ' ';
				break;
			}
		}
	}
	cout << ans << endl;
    return 0;
}