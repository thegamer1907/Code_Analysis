#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int>piii;
const int MOD = 1e9 + 7;
const int INF = 1e9+7;
const ll LINF = 2e18+7;
const int MXN = 1e5+5;



int a[MXN];
int main() {
	int N;
	cin >> N;
	int ans = INF;
	int ansi = -1;
	for (int i = 0;i < N;++i)cin >> a[i];

	for (int i = 0;i < N;++i) {
		int cycle = (a[i]-i-1+N) / N;
		int cur = cycle * N + i;
		if (a[i] <= cycle * N+i)cur = cycle*N+i;
		else cur = cycle * (N + 1) + i;
		if (ans > cur) {
			ans = cur;
			ansi = i + 1;
		}
	}
	cout << ansi;
}