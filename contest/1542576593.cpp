#include <bits/stdc++.h>
using namespace std;

double a[3], t1, t2;

inline void init() {
	cin >> a[0];
	cin >> a[1];
	cin >> a[2];
	cin >> t1;
	cin >> t2;
	a[0] = ( a[0] + a[1]/60 + a[2]/3600 ) * 30;
	a[1] = ( a[1] + a[2]/60 ) * 6;
	a[2] = a[2] * 6;
	t1 = t1 * 30;
	t2 = t2 * 30;
	std::sort(a,a+3);
	if(a[0]<=t1&&t1<=a[1]&&a[0]<=t2&&t2<=a[1]) {
		puts("YES");
		return;
	}
	if(a[1]<=t1&&t1<=a[2]&&a[1]<=t2&&t2<=a[2]) {
		puts("YES");
		return;
	}
	if((a[2]<=t1||t1<=a[0])&&(a[2]<=t2||t2<=a[0])) {
		puts("YES");
		return;
	}
	puts("NO");
}

int main() {
	init();
	return 0;
}
