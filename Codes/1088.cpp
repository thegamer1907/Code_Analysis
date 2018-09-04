#include <algorithm>
#include <iostream>
using namespace std;

const int MAXN = 1e5 + 10;
int n, d;
pair<int, int> S[MAXN];
long long ans;

int main() {
	cin >> n >> d;
	for (int i = 0; i < n; i++)
		cin >> S[i].first >> S[i].second;
	sort(S, S + n);
	int f = 0;
	long long ps = S[0].second;
	ans = ps;
	for (int i = 1; i < n; i++) {
		if (S[i].first - d >= S[f].first) {
			while (S[i].first - d >= S[f].first) {
				ps -= S[f].second;
				f++;
			}
		}
		ps += S[i].second;
		ans = max(ans, ps);
	}
	cout << ans;
}
