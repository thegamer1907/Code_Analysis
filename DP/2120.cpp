#include <bits/stdc++.h>

using namespace std;

int n, m, arr[100011], ans[100011];
set<int> cnt;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	for(int i=0; i<n; i++) cin >> arr[i];
	for(int i=n-1; i>=0; i--) {
		cnt.insert(arr[i]);
		ans[i] = (int)cnt.size();
	}
	while(m--) {
		int l;
		cin >> l;
		cout << ans[l-1] << endl;
	}
	return 0;
}