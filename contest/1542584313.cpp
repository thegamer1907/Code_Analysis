#include<cstdio>
#include<vector>
#include<queue>
#include<ctime>
#include<algorithm>
#include<cstdlib>
#include<stack>
#include<cstring>
#include<cmath>
using namespace std;

typedef long long LL;
typedef double DL;

const int INF = 2147483647;
const int maxn = 100;

int n;
DL h,s,m,t1,t2,a[maxn];

inline LL getint()
{
	LL ret = 0,f = 1;
	char c = getchar();
	while (c < '0' || c > '9')
	{
		if (c == '-') f = -1;
		c = getchar();
	}
	while (c >= '0' && c <= '9')
		ret = ret * 10 + c - '0',c = getchar();
	return ret * f;
}

int main()
{
	#ifdef dyf
		freopen("hyj1.txt","r",stdin);
	#endif
	h = getint() % 12; m = getint(); s = getint(); t1 = getint() % 12; t2 = getint() % 12;
	h *= 5; h += m / 60 + s / 3600; m += s / 3600; 
	t1 *= 5; t2 *= 5;
	a[1] = h; a[2] = m; a[3] = s; a[4] = t1; a[5] = t2;
	n = 5;
	sort(a + 1,a + n + 1);
	for (int i = 1; i <= n - 1; i++)
		if ((a[i] == t1 && a[i + 1] == t2) || (a[i] == t2 && a[i + 1] == t1)) {printf("YES"); return 0;}
	if ((a[n] == t1 && a[1] == t2) || (a[n] == t2 && a[1] == t1)) {printf("YES"); return 0;}
	printf("NO");
	return 0;
}
