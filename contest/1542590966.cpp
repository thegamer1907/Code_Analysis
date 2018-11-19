#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int n;
char a[105][3];

int main()
{
//	freopen("A.in","r",stdin);
//	freopen("A.out","w",stdout);
	
	scanf("%s%d",a[0],&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%s",a[i]);
		if(a[i][0]==a[0][0] && a[i][1]==a[0][1])
		{
			printf("YES\n");
			return 0;
		}
	}
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
			if((a[i][1]==a[0][0] && a[j][0]==a[0][1]))
			{
				printf("YES\n");
				return 0;
			}
	printf("NO\n");
	return 0;
}