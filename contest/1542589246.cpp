#include<cstdio>
int n,f1=0,f2=0;
char x,y;
int main()
{
	scanf("%c%c%d",&x,&y,&n);
	for(int i=1;i<=n;i++)
	{
		char a,b;
		scanf("\n%c%c",&a,&b);
		if(a==x && y==b)
		{
			printf("YES");
			return 0;
		}
		if(b==x) f1=1;
		if(a==y) f2=1;
	}
	if(f1&&f2) printf("YES");
	else printf("NO");
	return 0;
 } 