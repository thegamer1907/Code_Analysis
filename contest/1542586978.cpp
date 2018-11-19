#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <queue>
#include <set>
#include <map>
typedef long long LL;
const int inf = 1 << 30;
const LL INF = 1LL << 60;
const int MaxN = 1e5;

int n;
char s[3];
char ch[105][3];

int main()
{
	while(scanf("%s", s) != EOF)
	{
		scanf("%d", &n);
		for(int i = 1; i <= n; i++) {
			scanf("%s", ch[i]);
			//printf("%s\n", ch[i]);
		}
		//printf("\n");
		bool l = 0, r = 0;
		for(int i = 1; i <= n; i++) {
			if(ch[i][0] == s[0] && ch[i][1] == s[1])
				l = 1, r = 1;
			if(ch[i][1] == s[0])
				l = 1;
			if(ch[i][0] == s[1])
				r = 1;
		}
		if(l && r) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}