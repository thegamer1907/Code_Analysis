#include <bits/stdc++.h>

#define ll long long
#define MAXN 100005

using namespace std;

int t[10];

int main() {
	int s, e;
	scanf("%d %d %d %d %d", &t[0], &t[1], &t[2], &s, &e);
	t[0] *= 300;
	if (t[1] || t[2]) {
		t[0]++;
	}
	t[0] %= 3600;
	t[1] *= 60;
	if (t[2]) {
		t[1]++;
	}
	t[1] %= 3600;
	t[2] *= 60;
	s *= 300;
	s %= 3600;
	e *= 300;
	e %= 3600;
	int p = (s + 1) % 3600;
	bool flag = false;
	while (p != s && !flag) {
		if (p == e) {
			printf("YES\n");
			return 0;
		}
		for (int i = 0; i < 3; i++) {
			if (p == t[i]) {
				flag = true;
				break;
			}
		}
		p++;
		p %= 3600;
	}
	p = s - 1;
	p = (p + 3600) % 3600;
	flag = false;
	while (p != s && !flag) {
		if (p == e) {
			printf("YES\n");
			return 0;
		}
		for (int i = 0; i < 3; i++) {
			if (p == t[i]) {
				flag = true;
				break;
			}
		}
		p--;
		p += 3600;
		p %= 3600;
	}
	printf("NO\n");
}