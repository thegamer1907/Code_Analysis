#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define pi pair<ll,ll>
#define ppi pair<pair<ll,ll>,ll>
#define pii pair<ll,pair<ll,ll>>
#define fio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
const ll inf = 1e9;
const ll mod = 1e9+7;
const ll zero = 0;
const ll maxn = 1e5 + 5;
using namespace std;

ll n, m, cur, mx = 0;
ll a[maxn], b[maxn];
vector <pi> v;

int main() {
	fio();
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		v.push_back({a[i], b[i]});
	}
	sort(v.begin(), v.end());
	ll i = 0, j = 0;
	cur = 0;
	mx = cur;
	while (j < v.size()) {
		while (v[j].first - v[i].first < m) {
			if (j >= v.size())
				return cout << mx << endl, 0;
			cur += v[j].second;
			mx = max(mx, cur);
			//cout << i << " - " << j << " : " << cur << endl;
			j++;
		}	
		j--;
		cur -= v[i].second;
		cur -= v[j].second;
		i++;
		if (j < i) {
			j = i;
			cur = 0;
		}
		mx = max(cur, mx);
	}
	cout << mx << endl;
}


