#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	char a[190],b[190][2];
	scanf("%s",a);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%s",b[i]);
	for(i=0;i<n;i++)
	{
		if(b[i][0]==a[0] && b[i][1]==a[1])
		{
			printf("YES");
			return 0;
		}
		for(j=0;j<n;j++)
		{
			if(b[i][1]==a[0] && b[j][0]==a[1])
			{
				printf("YES");
				return 0;
			}
		}
	}
	printf("NO");
	return 0;
}