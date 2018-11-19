#include <cstdio>
#include <algorithm>
using namespace std;
int h, m, s, t1, t2;
int main() {
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	int e = 43200;
	h %= 12;
	int ss = s * e / 60;
	int mm = m * e / 60 + s * e / 3600;
	int hh = h * e / 12 + m * e / 720 + s * e / 43200;
	int p1 = t1 * e / 12;
	int p2 = t2 * e / 12;
	int Min = min(ss, min(mm, hh));
	int Max = max(ss, max(mm, hh));
	if(p1 > p2) swap(p1, p2);
	bool ans1 = true, ans2 = true;
	for(int i = p1; i <= p2; i++) {
		if(i == ss || i == hh || i == mm) ans1 = false;
	}
	for(int i = p2; i % e != p1; i++) {
		int j = i % e;
		if(j == ss || j == hh || j == mm) ans2 = false;
	}
	if(ans1 || ans2) printf("YES\n");
	else printf("NO\n");
	return 0;
}