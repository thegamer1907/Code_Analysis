#include <bits/stdc++.h>
using namespace std;
#define maxn 100

char s[3], p[maxn][3];

int main()
{
	int n, k, i;
	scanf("%s %d\n", s, &n);
	for(i = 0; i < n; i++)
		scanf("%s", p[i]);
	for(i = 0; i < n; i++)
		if(p[i][0] == s[0] && p[i][1] == s[1])
		{
			printf("YES");
			return 0;
		}
	for(i = 0; i < n; i++)
		for(k = 0; k < n; k++)
			if(p[i][1] == s[0] && p[k][0] == s[1])
			{
				printf("YES");
				return 0;
			}
	printf("NO");
	return 0;
}