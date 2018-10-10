#include <iostream>
#include <string>

using namespace std;
typedef long long ll;

const ll A = 957262683;
const ll B = 998735246;

int n;
string s;
ll h[1000005];
ll p[1000005];

ll ghash(int a, int b) {
	if (a == 0) return h[b];
	ll cres = (h[b]-h[a-1]*p[b-a+1])%B;
	if (cres < 0) cres += B;
	return cres;
}

void fail() {
	cout << "Just a legend\n";
	exit(0);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> s;
	n = s.length();
	if (n < 3) fail();
	h[0] = s[0];
	p[0] = 1;
	for (int i = 1; i < n; ++i) {
		h[i] = (h[i-1]*A+s[i])%B;
		p[i] = (p[i-1]*A)%B;
	}
	int mxl = -1;
	for (int i = 0; i < n-1; ++i) {
		ll pre = ghash(0, i);
		ll suf = ghash(n-i-1, n-1);
		if (pre == suf) {
			for (int j = 1; j < n-i-1; ++j) {
				ll in = ghash(j, j+i);
				if (in == pre) {
					mxl = i;
					break;
				}
			}
		}
	}
	if (mxl != -1) cout << s.substr(0, mxl+1) << "\n";
	else fail();
	return 0;
}