#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int cnt[20];

int main() {
	ios_base::sync_with_stdio(0);
	int n, k, ok = 0; cin >> n >> k;
	for (int i=0;i<n;i++) {
		int a[k], x = 0; for (int j=0;j<k;j++) cin >> a[j];
		for (int j=k-1,p=1;j>=0;j--,p<<=1) x += a[j]*p;
		cnt[x]++;
	}
	if (k==1) {
		if (cnt[0]) cout << "YES\n"; else cout << "NO\n";
	} else if (k==2) {
		if (cnt[0]||cnt[1]&&cnt[2]) cout << "YES\n"; else cout << "NO\n";
	} else if (k==3) {
		if (cnt[0]) ok = 1;
		if (cnt[1]&&cnt[2]||cnt[1]&&cnt[4]||cnt[2]&&cnt[4]) ok = 1;
		if (cnt[1]&&cnt[6]||cnt[2]&&cnt[5]||cnt[3]&&cnt[4]) ok = 1;
		if (ok) cout << "YES\n"; else cout << "NO\n";
	} else {
		if (cnt[0]) ok = 1; int x = 0;
		for (int i=1;i<=8;i<<=1) if (cnt[i]) x++;
		if (x>=2) ok = 1;
		if (cnt[3]&&(cnt[4]||cnt[8])||cnt[5]&&(cnt[2]||cnt[8])||cnt[9]&&(cnt[4]||cnt[2])) ok = 1;
		if (cnt[6]&&(cnt[1]||cnt[8])||cnt[10]&&(cnt[1]||cnt[4])||cnt[12]&&(cnt[2]||cnt[1])) ok = 1;
		if (cnt[3]&&cnt[12]||cnt[5]&&cnt[10]||cnt[9]&&cnt[6]) ok = 1;
		if (cnt[1]&&cnt[14]||cnt[2]&&cnt[13]||cnt[4]&&cnt[11]||cnt[8]&&cnt[7]) ok = 1;
		if (ok) cout << "YES\n"; else cout << "NO\n";
	}
}