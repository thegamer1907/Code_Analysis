#include <bits/stdc++.h>
using namespace std;

int h, m, s;
int t1, t2;

double ha[5],  t1a, t2a;

int main() {
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	t1a = 30 * t1;
	t2a = 30 * t2;
	if(t1a > t2a)
		swap(t1a, t2a);
	ha[1] = 0.1 * (60 * m + s);
	ha[2] = 6 * s;
	ha[3] = ha[1] / 12 + h * 30;
	int cnt = 0;
	bool flag = 0;
	for(int i = 1; i <= 3; ++i) {
		if(ha[i] > t1a && ha[i] < t2a)
			cnt++;
	}
	if(!cnt || cnt == 3)
		flag = 1;
	printf("%s\n", flag ? "YES" : "NO");
	
	return 0;
}