#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll h,m,s,t1,t2;
int main() {
	scanf("%lld %lld %lld %lld %lld", &h, &m,&s, &t1, &t2);
	if (t1 > t2)
		swap(t1, t2);
	h = (h % 12) * 5;
	t1 = (t1 % 12) * 5;
	t2 = (t2 % 12) * 5;
	ll tt1 = t1, tt2 = t2, cnt = 0;
	while (t1!=t2) {
		if (t1 == h || t1 == m || t1 == s)
			break;
		t1++;
		t1 %= 60;
	}
	if (t1 == t2)
		return puts("YES"), 0;
	t1 = tt1;
	t2 = tt2;
	while (t1!=t2) {
		if (t2 == h || t2 == m || t2 == s)
			return puts("NO"), 0;
		t2++;
		t2 %= 60;
	}
	puts("YES");
	return 0;
}