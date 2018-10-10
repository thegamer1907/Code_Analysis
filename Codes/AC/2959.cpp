#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
// Z[i] = max such that S[i..i+Z[i]) is prefix substring
int Z[1000005];
void zalgo(string S) {
	// Maintain max r such that there is l <= i <= r with [l,r] being prefix substring
	int n = S.length(), l = 0, r = 0;
	Z[0] = n;
	for (int i = 1; i < n; ++i) {
		if (i > r) {
			l = r = i;
			while (r < n && S[r - l] == S[r]) ++r;
			Z[i] = r - l;
			--r;
		} else {
			if (Z[i - l] <= r - i) Z[i] = Z[i - l];
			else {
				l = i;
				while (r < n && S[r - l] == S[r]) ++r;
				Z[i] = r - l;
				--r;
			}
		}
	}
}
int main() {
	string S;
	cin >> S;
	zalgo(S);
	int n = S.length(), mx = 0;
	for (int i = 1; i < n; ++i) {
		if (Z[i] == n - i && mx >= n - i) {
			cout << S.substr(0, n - i) << endl;
			return 0;
		}
		mx = max(mx, Z[i]);
	}
	printf("Just a legend\n");
}

