#include<cstdio>
#include<algorithm>
using namespace std;

int h, m, s, t1, t2;
int v[11];

bool chk(int l, int r) {
	if (t1<l) t1+=43200;
	if (t1>r) t1-=43200;
	if (t1<l || t1>r) return false;
	if (t2<l) t2+=43200;
	if (t2>r) t2-=43200;
	if (t2<l || t2>r) return false;
	return true;
}

int main() {
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	h=(3600*h+60*m+s) % 43200; // 12h - cycle
	m=((60*m+s) * 12) % 43200; // 60min - cycle
	s=(s*720) % 43200; // 1min - cycle
	
	v[0] = h; v[1] = m; v[2] = s;
	sort(v, v+3);
	
	t1*=3600; t2*=3600;
	if (chk(v[0], v[1])) puts("YES");
	else if (chk(v[1], v[2])) puts("YES");
	else if (chk(v[2], v[0]+43200)) puts("YES");
	else puts("NO");
	
	return 0;
}