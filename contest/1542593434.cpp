#include <bits/stdc++.h>

using namespace std;
using LL = long long;
string s[105];
char str[105];

int main()
{
	scanf("%s", str);
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		char buf[105];
		scanf("%s", buf);
		s[i] = buf;
	}
	bool ok = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			string ss = s[i] + s[j];
			if (strstr(ss.c_str(), str))
			{
				ok = 1;
			}
		}
	if (ok) puts("YES");
	else puts("NO");
	return 0;
}