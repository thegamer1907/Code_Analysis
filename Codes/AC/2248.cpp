#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int ar[200200];
ll sum, ans, acc;
map<ll, int> mp;
int n;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif 
	cin >> n;
	for(int i = 0; i < n; ++i) {
		scanf("%d", ar + i);
		sum += ar[i];
		mp[sum] = i;
	}

	for(int i = n - 1; i; --i) {
		acc += ar[i];
		if(mp.count(acc)) {
			if(mp[acc] < i)ans = acc;
			else return cout << ans, 0;
		}
	}
	cout << ans;
}
