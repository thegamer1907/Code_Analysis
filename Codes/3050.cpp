#include <bits/stdc++.h>

const int maxn = 1e6 + 6;
int Next[maxn];

void getNext(char s[])
{
	int len = strlen(s);
	Next[0] = -1;
	int i, j = -1;
	for (i = 1; i < len; i++)
	{
		while (j >= 0 && s[j + 1] != s[i]) j = Next[j];
		if (s[j + 1] == s[i]) j++;
		Next[i] = j;
	}
}

char str[maxn];
bool vis[maxn];

int main()
{
	scanf("%s", str);
	int n = strlen(str);
	getNext(str);
	for (int i = 0; i < n - 1; i++)
		vis[Next[i] + 1] = 1;
	int len = Next[n - 1];
	while (len != -1 && !vis[len + 1])
	{
		len = Next[len];
	}
	if (len == -1)
		puts("Just a legend");
	else
	{
		str[len + 1] = 0;
		puts(str);
	}
}