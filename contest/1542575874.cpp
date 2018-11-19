#include<cstdio>
using namespace std;

char s[105][2],a[2];
int n;

int main()
{
	scanf("%s%d",a,&n); 
	for(int i=1;i<=n;i++)
		scanf("%s",s[i]);
	for(int i=1;i<=n;i++)
		if(s[i][0]==a[0]&&s[i][1]==a[1])
		{
				printf("YES");
				return 0;
			}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(s[i][1]==a[0]&&s[j][0]==a[1])
			{
				printf("YES");
				return 0;
			}
	printf("NO");
	return 0;
}
