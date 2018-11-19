#include <bits/stdc++.h>
using namespace std;
inline int read()
{
	int x = 0, f = 1;
	char ch = 0;
	while (!isdigit(ch)) {ch = getchar();if (ch == '-') f = -1;}
	while (isdigit(ch)) x = x * 10 + ch - 48, ch = getchar();
	return x * f;
}
int n,m;
int know[100010][5];
int zt[100010];
int v[17];
int main()
{
	n = read(); m = read();
	
	for (int h = 1; h <= n; ++h)
	{
	for (int i = 1; i <= m; ++i)
	{
		know[h][i] = read();
		zt[h] |= (1 << (i - 1)) * know[h][i];
	}
	v[zt[h]] ++;

//	printf("%d\n",zt[h]);
	}
	if (n == 1)
	{
	for (int i = 1; i <= m; ++i) if (know[1][i] == 1) {puts("NO");return 0;}
	puts("YES"); return 0;
	}
	for (int h = 0; h <= (1<<m) - 1; ++h)
	{
		if (v[h] == 0) continue;
		for (int j = 0; j <= (1<<m) - 1;  ++ j)
		{
			if (v[j] == 0) continue;
			else if (v[h] == 1 && h == j) continue;
			else if ((h&j) == 0) {puts("YES"); return 0;}
		}
	}
	puts("NO");
}
