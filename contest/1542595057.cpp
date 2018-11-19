#include <bits/stdc++.h> 

bool flag1, flag2;
char s[12121], b[322];
int n;

int main()
{
	scanf("%s",s);
	scanf("%d",&n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%s",b);
		if(b[0]==s[1]) flag1=1;
		if (b[1]==s[0]) flag2=1;
		if (b[0]==s[0]&&b[1]==s[1]) flag1=flag2=1;
	}
	if (flag1&&flag2) puts("YES");
			else puts("NO");
		return 0;
}
