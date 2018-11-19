#include<bits/stdc++.h>
using namespace std;

#define maxn 100000
#define pii pair<int, int>
#define pi3 pair<int, pii>
#define ll long long
#define f first
#define s second

int cnt[maxn + 5];
ll dp[maxn + 5][21];
int ar[maxn + 5];
// f   -> count nya
// s.f -> sekarang kk-nya berapa
// s.s -> sekarang mid-nya berapa


int aw, ak;
ll flyingValue = 0;


void setPointer(int _aw, int _ak) {
	while(aw < _aw) {
		cnt[ar[aw]]--;
		flyingValue -= cnt[ar[aw]];
		aw++;
	}
	while(aw > _aw) {
		aw--;
		flyingValue += cnt[ar[aw]];
		cnt[ar[aw]]++;
	}
	while(ak > _ak) {
		cnt[ar[ak]]--;
		flyingValue -= cnt[ar[ak]];
		ak--;
	}
	while(ak < _ak) {
		ak++;
		flyingValue += cnt[ar[ak]];
		cnt[ar[ak]]++;
	}
}

void solve(int L, int R, int optL, int optR, int kk) {
	if(L > R) {
		return;
	}
	int mid = (L + R) / 2;
	dp[mid][kk] = LLONG_MAX;
	int opt;
	int _aw = aw;
	int _ak = ak;
	for(int i = optL; i <= min(optR, mid); i++) {
		setPointer(i, mid);
		if(dp[mid][kk] > dp[i - 1][kk - 1] + flyingValue) {
			dp[mid][kk] = dp[i - 1][kk - 1] + flyingValue;
			opt = i;
		}
	}
	// cout << mid << " -- " << kk << " == " << opt << "\n";
	setPointer(optL, mid - 1);
	solve(L, mid - 1, optL, opt, kk);
	setPointer(opt, R);
	solve(mid + 1, R, opt, optR, kk);
	setPointer(_aw, _ak);
}

int main() {
	int N, K;
	scanf("%d %d", &N, &K);
	for(int i = 1; i <= N; i++) {
		scanf("%d", ar + i);
	}
	for(int i = 1; i <= N; i++) {
		dp[i][1] = dp[i - 1][1] + cnt[ar[i]];
		cnt[ar[i]]++;
	}
	flyingValue = dp[N][1];
	aw = 1;
	ak = N;
	for(int i = 2; i <= K; i++) {
		setPointer(i, N);
		solve(i, N, i, N, i);
	}
	printf("%lld\n", dp[N][K]);
	// for(int j = 1; j <= K;  j++) {
	// 	for(int i = 1; i <= N; i++) {
	// 		cout << dp[i][j] << "  ";
	// 	}
	// 	cout << "\n";
	// }
}