#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<algorithm>
using namespace std;
double h, m, s, t1, t2;
int flag, t;
double pos[5];
int main() {
	scanf("%lf%lf%lf%lf%lf", &h, &m, &s, &t1, &t2);
	t1 *= 30.0;
	t2 *= 30.0;
	m += (s / 60.0);
	h += (m / 60.0);
	s *= 6.0;
	m *= 6.0;
	h *= 30.0;
	if(s > m)swap(s, m);
	if(s > h)swap(s, h);
	if(m > h)swap(m, h);
	pos[++t] = s;
	if(s != m)pos[++t] = m;
	if(m != h)pos[++t] = h;
	if(t == 1)printf("YES\n");
	else if(t == 2) {
		if(t1 >= pos[1] && t1 <= pos[2] && t2 >= pos[1] && t2 <= pos[2])printf("YES\n");
		else if(t1 >= pos[1] && t1 <= pos[2] && (t2 >= pos[2] || t2 <= pos[1]))printf("NO\n");
		else if(t2 >= pos[1] && t2 <= pos[2] && (t1 >= pos[2] || t1 <= pos[1]))printf("NO\n");
		else printf("YES\n");
	}
	else {
		if(t1 >= pos[1] && t2 >= pos[1] && t1 <= pos[2] && t2 <= pos[2])printf("YES\n");
		else if(t1 >= pos[2] && t1 <= pos[3] && t2 >= pos[2] && t2 <= pos[3])printf("YES\n");
		else if(t1 >= pos[3] && (t2 >= pos[3] || t2 <= pos[1]))printf("YES\n");
		else if(t1 <= pos[1] && (t2 >= pos[3] || t2 <= pos[1]))printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}