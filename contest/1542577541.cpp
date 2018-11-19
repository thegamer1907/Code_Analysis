// in the name of Allah
// and begin ... 

#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, k, t;
	cin >> n >> k;
	int cnt[16];
	memset(cnt, 0, sizeof cnt);
	while(n--) {
		int x = 0;
		for(int j=0; j<k; j++) {
			cin >> t;
			x += ((1<<j) * t);
		}
		if(x == 0) {
			cout << "Yes" << endl;
			return 0;
		}
		cnt[x]++;
	}
	for(int i=1; i<(1<<k); i++) {
		if(cnt[i] == 0) continue;
		for(int j=i+1; j<(1<<k); j++) {
			if(cnt[j] == 0) continue;
			if((i&j) == 0) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}