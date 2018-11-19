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
const int maxn = 110;
const int maxs = 10;

int n;
char s[maxn][maxs],ans[maxs];

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
	scanf("%s",ans + 1);
	n = getint();
	for (int i = 1; i <= n; i++)
		scanf("%s",s[i] + 1);
	for (int i = 1; i <= n; i++)
		if (!strcmp(s[i] + 1,ans + 1)) {printf("YES"); return 0;}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (s[i][2] == ans[1] && s[j][1] == ans[2]) {printf("YES"); return 0;}
	printf("NO");
	return 0;
}
