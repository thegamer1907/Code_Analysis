#include<cstdio>
#include<cstring>
char s[150][5];
char a[150];
int n;
int main()
{
	scanf("%s",a);
	scanf("%d",&n);
	bool ok=false;
	for(int i=1; i<=n; i++)
	{
		scanf("%s",s[i]);
		if(a[0]==s[i][0] && a[1]==s[i][1]) ok=true;
	}
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			if(s[i][1]==a[0] && s[j][0]==a[1]) ok=true;
	printf(ok ? "yes\n" : "no\n");
	return 0;
}
