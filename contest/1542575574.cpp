#include <iostream>
#include <cstdio>
using namespace std;

int n;
char s[5], pw[105][5];

int main()
{
	scanf("%s", s);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%s", pw[i]);
		if (pw[i][0] == s[0] && pw[i][1] == s[1])
		{
			puts("YES");
			return 0;
		}
		if (pw[i][1] == s[0] && pw[i][0] == s[1])
		{
			puts("YES");
			return 0;
		}
		for (int j = 1; j < i; j++)
		{
			if (pw[j][1] == s[0] && pw[i][0] == s[1])
			{
				puts("YES");
				return 0;
			}
			if (pw[i][1] == s[0] && pw[j][0] == s[1])
			{
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
}
