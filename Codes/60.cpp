#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N = 5e5+5;

int n, a[N];
ll pre[N], suf[N], sum;

int main() {
	cin >> n;
	for(int i=1; i<=n; i++) cin >> a[i], pre[i] = pre[i-1] + a[i];
	sum = pre[n];
	for(int i=n; i>=1; i--) suf[i] = suf[i+1] + a[i];
	if(sum % 3 != 0) {
		puts("0");
		return 0;
	}
	ll s = sum / 3, ans = 0, cnt = 0;
	for(int i=1; i<=n; i++) {
		if(suf[i] == s) ans += cnt;
		if(i >= 2 && pre[i-1] == s) cnt++;
	}
	cout << ans;
		
}
