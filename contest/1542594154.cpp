#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int N = 0;



int main()
{
	char s[10], st[10];
	scanf("%s", s);
	bool flag = 0, f1 = 0, f2 = 0;
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%s", st);
		if(st[0] == s[0] && st[1] == s[1])
			flag = 1;
		if(st[1] == s[0])
			f1 = 1;
		if(st[0] == s[1])
			f2 = 1;
	}
	if(flag || (f1 && f2))
		puts("YES");
	else
		puts("NO");
	return 0;
}