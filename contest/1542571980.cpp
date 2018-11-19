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

const int INF = 2147483647;
const int maxn = 100100;

int a[maxn],cnt[20];
int n,k;

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
	n = getint(); k = getint();
	for (int i = 1; i <= n; i++)
	{
		int x = 0;
		for (int j = 1; j <= k; j++)
		{
			x <<= 1;
			x ^= getint();
		}
		a[i] = x;
		cnt[x]++;
	}
	int u = (1 << k) - 1;
	if (cnt[0]) {printf("YES"); return 0;}
	for (int i = 1; i <= u; i++)
	{
		if (!cnt[i]) continue;
		for (int j = 1; j <= u; j++)
		{
			if (!cnt[j]) continue;
			if ((j & (u ^ i)) == j) {printf("YES"); return 0;}
		}
	}
	printf("NO");
	return 0;
}

