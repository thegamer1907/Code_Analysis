#include <bits/stdc++.h>
using namespace std;

long long n;

bool cando(long long k) {
	if (k == 0) return false;
	long long curr = n;
	long long eaten = 0;
	while (curr) {
		eaten += min(k, curr);
		curr -= min(k, curr);

		curr -= curr/10;
	}
	return eaten*2 >= n;
}

int main() {
	ios::sync_with_stdio(false);

	cin>>n;

	long long high = n, low = 0;
	while (high - low > 1) {
		long long mid = (high + low)/2;
		if (cando(mid)) {
			high = mid;
		} else {
			low = mid;
		}
	}
	cout<<high<<endl;
}
