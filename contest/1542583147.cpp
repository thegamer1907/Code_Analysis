#include<bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
 
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define eps 1e-9
#define fast_cin ios_base::sync_with_stdio(false)

const int MOD = 1e9+7;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pair<int,int> > piii;
typedef pair<ll,ll> pll;

ll POWER[65];
ll power(ll a, ll b) {ll ret=1;while(b) {if(b&1) ret*=a;a*=a;if(ret>=MOD) ret%=MOD;if(a>=MOD) a%=MOD;b>>=1;}return ret;}
ll inv(ll x) {return power(x,MOD-2);}

void precompute() {
	POWER[0]=1;
	for(int i=1;i<63;i++) POWER[i]=POWER[i-1]<<1LL;
}

int main() {
	// freopen("TASK.in","r",stdin);freopen("TASK.out","w",stdout);
	precompute();
	int n, k;
	cin >> n >> k;
	map<int, int> MAP;
	bool f = false;
	for(int i = 1; i <= n; i++) {
		int mask = 0;
		for(int j = 1; j <= k; j++) {
			int x;
			scanf("%d", &x);
			mask *= 2;
			mask += x;
		}
		if(mask == 0) f = true;
		int revMask = POWER[k] - 1 - mask;
		for(int j = 0; j < POWER[k]; j++) {
			if((j & revMask) == j) {
				if(MAP.find(j) != MAP.end()) f = true;
			}
		}
		MAP[mask]++;
	}
	if(f) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
