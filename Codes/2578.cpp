#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;
typedef complex<ld> pt;
const int MOD = 1e9 + 7;

vector<bool> primes(1e7+1, 1); //primes[i] is true if i is prime
vector<int> plist;
void prime() {
	primes[0] = 0;
	primes[1] = 0;
	for (int i = 2; i <= sqrt(1e7); i++) {
		if (primes[i]) {
			for (int j = i*i; j <= 1e7; j += i) {
				primes[j] = 0;
			}
		}
	}
	for (int i = 2; i <= 1e7; i++) {
		if (primes[i])
			plist.push_back(i);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	prime();
	int n; cin >> n;
	vector<int> count(1e7+1, 0);
	vector<ll> cumsum(1e7+2, 0);
	for (int i = 0; i < n; i++) {
		int k; cin >> k;
		count[k]++;
	}
	for (int i = 0; i < plist.size(); i++) {
		for (int j = plist[i]; j <= 1e7; j += plist[i]) {
			cumsum[plist[i]+1] += count[j];
		}
	}
/*	for (int i : x) {
		int cur = i;
		for (int j = 0; j < plist.size(); j++) {
			if (plist[j] > sqrt(cur)) {
				f[cur] += count[i];
				break;
			}
			if (cur % plist[j] == 0) {
				f[plist[j]] += count[i];
				while (cur % plist[j] == 0)
					cur /= plist[j];
			}
		}
	}*/
	for (int i = 1; i <= 1e7+1; i++) {
		cumsum[i] += cumsum[i-1];
	}

	int m; cin >> m;
	for (int i = 0; i < m; i++) {
		int l, r; cin >> l >> r;
/*		if (r > 1e7+1000)
			r = 1e7+1000;
		int le = 0, ri = plist.size()-1;
		while (ri > le) {
			int mid = (le+ri)/2;
			if (plist[mid] > l)
				ri = mid-1;
			else
				le = mid+1;
		}
		int lindex = max(0, ri-1);
		while (lindex < plist.size() && plist[lindex] < l)
			lindex++;
		le = 0; ri = plist.size()-1;
		while (ri > le) {
			int mid = (le+ri)/2;
			if (plist[mid] > r)
				ri = mid-1;
			else
				le = mid+1;
		}
		int rindex = min((int) plist.size()-1, le+1);
		while (rindex >= 0 && plist[rindex] > r)
			rindex--;
//		cout << lindex << " " << rindex << endl;
		if (rindex+1 < lindex)
			printf("0\n");
		else
			printf("%d\n", cumsum[rindex+1] - cumsum[lindex]);*/
		if (r > 1e7)
			r = 1e7;
		if (l > 1e7)
			l = 1e7;
		cout << cumsum[r+1] - cumsum[l] << endl;
	}
	return 0;
}