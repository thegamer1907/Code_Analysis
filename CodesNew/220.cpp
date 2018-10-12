#include<bits/stdc++.h>
using namespace std;
long long ans = 0;
int main() {
	long long n, t, sum = 0;
	cin >> n >> t;
	int arr[100005];
	int i = 0;
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}
	int f = 0, s = 0;
	while (s < n) {
		sum += arr[s];
		if (sum <= t) {
			s++;
			ans++;
		}
		else {
			sum -= arr[f];
			f++;
			s++;
		}
	}
	cout << ans;
}
