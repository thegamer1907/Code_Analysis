#include <cstdio>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <ext/pb_ds/priority_queue.hpp>
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define lowbit(x) x&(-x)
#define PA pair<int, int>
#define MK make_pair
using namespace std;
typedef long long LL;
inline int read()
{
	int l = 0, f = 1;
	char a = getchar();
	for (; a < '0' || a > '9'; a = getchar())
		if (a == '-') f = -1;
	for (; a >= '0' && a <= '9'; a = getchar())
		l = l*10+a-48;
	return l*f;
}
double t1, t2, h[4];
int main(int argc, char const *argv[])
{
	scanf("%lf%lf%lf%lf%lf", &h[1], &h[2], &h[3], &t1, &t2);
	if (h[1] >= 12) h[1] -= 12;
	if (t1 >= 12) t1 -= 12;
	if (t2 >= 12) t2 -= 12;
	t1 *= 5, t2 *= 5;
	h[2] = h[2]+h[3]/60;
	h[1] = h[1]*5+h[2]/12;
	sort(h+1, h+4);
	if (t1 > h[1] && t1 < h[2])
	{
		if (t2 > h[1] && t2 < h[2]) printf("YES\n");
		else printf("NO\n");
		return 0;
	}
	if (t1 > h[2] && t1 < h[3])
	{
		if (t2 >= h[2] && t2 <= h[3]) printf("YES\n");
		else printf("NO\n");
		return 0;
	}
	if ((t2 >= h[1] && t2 <= h[2]) || (t2 >= h[2] && t2 <= h[3])) printf("NO\n");
	else printf("YES\n");
	return 0;
}