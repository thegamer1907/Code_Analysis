#include <bits/stdc++.h>

#define ll long long
#define MAXN 100005

using namespace std;

int t[10];

int main() {
	int s, e;
	scanf("%d %d %d %d %d", &t[0], &t[1], &t[2], &s, &e);
	t[0] *= 3600;
	t[0] = t[0] + t[1] * 60 + t[2];
	t[0] %= 43200;
	
	t[1] *= 60;
	t[1] += t[2];
	t[1] *= 12;
	t[1] %= 43200;
	
	t[2] = t[2] * 60 * 12;
	
	s *= 3600;
	s %= 43200;
	e *= 3600;
	e %= 43200;
	int p = (s + 1) % 43200;
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
		p %= 43200;
	}
	p = s - 1;
	p = (p + 43200) % 43200;
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
		p += 43200;
		p %= 43200;
	}
	printf("NO\n");
}