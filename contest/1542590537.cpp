#include <bits/stdc++.h>
using namespace std;

char a[5];
int n;

inline void init() {
	cin >> a;
	cin >> n;
	char buf[5];
	bool f = 0, l = 0;
	for(int i = 1; i <= n; i++) {
		cin >> buf;
		if(buf[0] == a[0] && buf[1] == a[1]) {
			puts("YES");
			return;
		}
		if(buf[1] == a[0])
			f = 1;
		if(buf[0] == a[1])
			l = 1;
		if(f && l) {
			puts("YES");
			return;
		}
	}
	puts("NO");
}

int main() {
	init();
	return 0;
}
