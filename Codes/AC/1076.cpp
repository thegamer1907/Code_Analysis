#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 10;
typedef pair<int , int> pii;
long long sum, ans, n, d;
pii p[MAXN];
int main() {
	cin >> n >> d;
	for (int i = 0; i < n; i++)
		cin >> p[i].first >> p[i].second;
	sort(p, p + n);
	for (int i = 0, st = 0; i < n; i++) {
		sum += p[i].second;
		while(p[i].first - p[st].first >= d) {
			sum -= p[st].second;
			st++;
		}
		ans = max(ans, sum);
	}
	cout << ans;
}
