#include<bits/stdc++.h>
#define ll long long
#define mapcl map<char,ll>
#define mapll map<ll,ll>
#define mapsl map<string,ll>
#define vll vector<ll>
#define pll pair<ll,ll>
#define pqueue priority_queue<ll>
#define pdqueue priority_queue<ll,vll ,greater<ll>>
#define pinf LLONG_MAX
#define ninf LLONG_MIN
#define all(v) v.begin(),v.end()
#define endl '\n'
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pi 3.1415926535897932384
using namespace std;
void pv(vector<auto> v)	{ for(ll i = 0; i < (ll)v.size(); i++) cout << v[i] << " "; }
void in(vector<auto> &v, ll n) { v.resize(n); for(ll i = 0; i < n; i++) cin >> v[i]; }
void sortv(vector<auto> &v) { sort(all(v)); }
void sortvr(vector<auto> &v) { sort(v.rbegin(), v.rend()); }
void fast(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main(){
	
	fast();

	ll n, m, k;
	cin >> n >> m >> k;

	vll a;
	in(a, m);

	sortvr(a);

	ll s = k, ans = 0;
	while(a.size()){
		auto lower = lower_bound(all(a), s, greater<ll>()) - a.begin();
		// cout << lower << endl;
		if(lower >= a.size()){
			ll add = ceil(((long double)(a[a.size() - 1] - s)) / (long double)k);
			s += (add * k);
			continue;
		}
		for(int i = a.size() - 1; i >= lower; --i)
			a.pop_back(), s++;
		ans++;
	}

	cout << ans << endl;
}