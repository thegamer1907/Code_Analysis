#include<bits/stdc++.h>
using namespace std;
char st[5], s[105][5];
int main()
{
	scanf("%s", st);
	int n, a1 = 0, a2 = 0;
	scanf("%d", &n);
	for(int i=0; i<n; ++i)
	{
		scanf("%s", s[i]);
	}
	for(int i=0; i<n; ++i)
	{
		if(s[i][1] == st[0]) a1 = 1;
		if(s[i][0] == st[1]) a2 = 1;
	}
	for(int i=0; i<n; ++i)
	{
		if(s[i][0] == st[0] && s[i][1] == st[1])
		{
			a1 = 1;
			a2 = 1;
		}
	}
	if(a1 && a2) puts("YES");
	else puts("NO");
	return 0;
}
