#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>
#include <cmath>
#include <set>
#include <stack>
#include <queue>
#include <vector>
#include <bitset>
#include <functional>

using namespace std;

#define LL long long
const int INF = 0x3f3f3f3f;

char s1[5], s2[5];
int n, flag, flag1, flag2;

int main()
{
	while (~scanf("%s", s1))
	{
		scanf("%d", &n);
		flag = flag1 = flag2 = 0;
		for (int i = 1; i <= n; i++)
		{
			scanf("%s", s2);
			if (s2[1] == s1[1] && s2[0] == s1[0]) flag = 1;
			if (s2[1] == s1[0] && s2[0] == s1[1]) flag = 1;
			if (s2[1] == s1[0]) flag1 = 1;
			if (s2[0] == s1[1]) flag2 = 1;
		}
		if (flag || (flag1&&flag2)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}