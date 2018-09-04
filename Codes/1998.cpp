#include<bits/stdc++.h>

typedef long long int ll;
typedef long double ld;
 
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define enddl '\n'
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define full(a) a.begin(),a.end()
#define mem(a,x) memset(a,x,sizeof(a))
 
const int MAXN = 2*1e5+5;
const int MOD = 1e9+7;
 
using namespace std;

ll dp[MAXN][5];
ll a[MAXN];
map<ll,ll> m1,m2,m3;

int main() {
	int n , k ;
	cin >> n >> k;
	for(int i=1;i<=n;i++) {
		cin >> a[i];
	}
	ll ans = 0;
	if(k == 1) {
		map<ll,ll> m;
		for(int i=1;i<=n;i++) {
			m[a[i]]++;
		}
		for(auto it : m) {
			if(it.second >= 3) {
				ll x = it.second;
				ll temp = x*(x-1)*(x-2);
				temp/=6;
				ans+=temp;
			}
		}
		cout << ans << endl;
		return 0;
	}
	for(int i=1;i<=n;i++) {
		m1[a[i]]++;
		//cout << "INDEX " << i << " VALUE " << a[i] << " MAP 1 -> "<< m1[a[i]] << endl;
		if(a[i]%k == 0) {
			m2[a[i]]+=(m1[a[i]/k]);
			//cout << "INDEX " << i << " VALUE " << a[i] << " MAP 2 -> "<< m2[a[i]] << endl;
			if(a[i]%(k*k) == 0) {
				m3[a[i]]+=(m2[a[i]/(k)]);
				//cout << "INDEX " << i << " VALUE " << a[i] << " MAP 3 -> "<< m3[a[i]] << endl;
				//ans+=(m3[a[i]]);
			}
		}
	}	
	for(auto it : m3) {
		if(it.ff!=0)
		ans+=(it.ss);
		else
		ans+=(it.ss - m1[0]*m1[0]);
	}
	cout << ans << endl;

	
}