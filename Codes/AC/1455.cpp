#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define scl(x) scanf("%lld",&x)
#define sc(x)  scanf("%d",&x)
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef vector<ii> vii;
typedef vector<pll> vll;
typedef vector<int> vi;
#define mod 1000000007
int n;
ll arr[100005];
ll s;

bool ok(int num) {
	ll sum = 0;
	vector<ll> vec;
	for (int i = 0; i < n; ++i)
		vec.push_back(arr[i] + num * 1LL * (i + 1));
	sort(vec.begin(), vec.end());
	for (int i = 0; i < num; ++i)
		sum += vec[i];
	return sum <= s;
}
int main() {
	sc(n);
	cin >> s;
	for (int i = 0; i < n; ++i)
		scl(arr[i]);
	int l = 0;
	int r = n;
	while (l < r) {
		int mid = l + (r - l + 1) / 2;
		if (ok(mid))
			l = mid;
		else
			r = mid - 1;
	}
	ll sum = 0;
	vector<ll> vec;
	for (int i = 0; i < n; ++i)
		vec.push_back(arr[i] + l * 1LL * (i + 1));
	sort(vec.begin(), vec.end());
	for (int i = 0; i < l; ++i)
		sum += vec[i];
	cout << l << " " << sum << endl;

}