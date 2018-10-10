#include <bits/stdc++.h>
using namespace std;

int go(int x) {
	string s = to_string(x);
	int ans = 0;
	for (auto a : s) {
		ans += (a-'0');
	}
	if (ans == 10) return 1;
	else return 0;
}

int main() {
	int k;
	scanf("%d", &k);
	for (int i = 19; ; i++) {
		int x = go(i);
		if (x) {
			k--;
			if (!k) {
				printf("%d\n", i);
				return 0;
			}
		}
	}
}