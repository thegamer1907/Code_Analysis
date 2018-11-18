#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int MAXN = 222;

#define debug(...) fprintf(stderr, __VA_ARGS__)
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define fillchar(a, s) memset((a), (s), sizeof(a))

int N, M;
string S[MAXN];
int ans[MAXN];

int calc (string s) {
	//brute force!
	for (int i = 1; i < 11; i++) {
		//if don't have this then break
		for (int j = 0; j < (1 << i); j++) {
			string need;
			for (int k = 0; k < i; k++) {
				need += char('0' + ((j >> k) & 1));
			}

			if (s.find(need) == string::npos) {
				return i - 1;
			}
		}
	}
	assert(0);
}

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> S[i];
		ans[i] = calc(S[i]);
	}

	cin >> M;
	for (int i = N + 1; i <= N + M; i++) {
		int a, b;
		cin >> a >> b;
		S[i] = S[a] + S[b];
		if (S[i].size() > 2000) {
			S[i] = S[i].substr(0, 1000) + S[i].substr(S[i].size() - 1000);
		}

		ans[i] = max(max(ans[a], ans[b]), calc(S[i]));
		cout << ans[i] << '\n';
	}
}
