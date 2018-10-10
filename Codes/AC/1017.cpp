#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int cnta = 0, cntb = 0;
	int lf = 0, rt = 0, len = s.size(), ans = 0;
	while (rt < len) {
		while (min(cnta, cntb) <= k && rt < len) {
			if (s[rt] == 'a') cnta ++;
			else cntb ++;
			rt ++; 
			if (min(cnta, cntb) <= k) ans = max(ans, rt - lf);
			else ans = max(ans, rt - lf - 1);
		} 
		while (min(cnta, cntb) > k) {
			if (s[lf] == 'a') cnta --;
			else cntb --;
			lf ++;
		}
	}
	cout << ans << endl;
}