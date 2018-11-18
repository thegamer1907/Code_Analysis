#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int MAXN = 1e5 + 10;

#define debug(...) fprintf(stderr, __VA_ARGS__)
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define fillchar(a, s) memset((a), (s), sizeof(a))

void kill (bool ans) {
	puts(ans ? "YES" : "NO");
	exit(0);
}

int N, K;
int A[MAXN];
bool exist[MAXN];

int main() {
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			int x;
			scanf("%d", &x);
			A[i] ^= (x << j);
		}
		exist[A[i]] = true;

		if (A[i] == 0) {
			kill(true);
		}
	}

	for (int i = 0; i < (1 << K); i++) {
		if (exist[(1 << K) - 1 - i]) {
			for (int j = i; ; j = (j - 1) & i) {
				if (exist[j]) {
					kill(true);
				}
				
				if (j == 0) {
					break;
				}
			}
		}
	}

	kill(false);
}
