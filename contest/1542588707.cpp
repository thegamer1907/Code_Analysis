#include <cstdio>
#include <cstring>
using namespace std;
char s[105][10];
int main()
{
	int i,j,n,m,t,z;
	char a[5];
	scanf("%s",a);
	scanf("%d",&n);
	int flag=0;
	for(i=1;i<=n;i++)
	{
		scanf("%s",s[i]);
		if(s[i][0]==a[0]&&s[i][1]==a[1]||s[i][0]==a[1]&&s[i][1]==a[0])
		flag=1;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(s[i][1]==a[0]&&s[j][0]==a[1])
			flag=1;
		}
	}
	if(flag)
	printf("YES\n");
	else 
	printf("NO\n");
	return 0;
}