#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair <ll, ll> pii;

const ll MAXN = 1e5 + 10, SUM = 1e14 + 10;
ll n, d, sum;
pii ar[MAXN];
vector <ll> v;

bool cmp(ll a, ll b) {
	return a > b;
}

int main() {
	cin >> n >> d;
	for (ll i = 0; i < n; i++)
		cin >> ar[i].first >> ar[i].second;
	sort(ar, ar + n);
//	cout << endl << endl;
//	for (int i = 0; i < n; i++)
//		cout << ar[i].first << " " << ar[i].second << endl;
//	cout << endl;
	sum = ar[0].second;
	ll st = 0, ed = 1;
	while (ed < n && ar[ed].first - ar[st].first < d) {
		sum += ar[ed].second;
		ed++;
	}
	v.push_back(sum);
//	cout << "check : " << 0 << " " << ed << " " << sum << endl;
	while (ed < n) {
		sum += ar[ed].second;
		ed++;
		while (ar[ed - 1].first - ar[st].first >= d) {
			sum -= ar[st].second;
			st++;
		}
//		cout << "check : " << st << " " << ed << " " << sum << endl;
		v.push_back(sum);
	}
	sort(v.begin(), v.end(), cmp);
	cout << v[0];
}
