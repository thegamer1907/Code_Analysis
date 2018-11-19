#include<bits/stdc++.h>
using namespace std;
char p[3];
char w[105][3];
int main()
{
	int n;
	scanf("%s",p);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%s",w[i]);
	for(int i=0;i<n;i++)
	{
		if(p[0]==w[i][0]&&p[1]==w[i][1])
		{
			printf("YES\n");
			return 0;
		}
		for(int j=0;j<n;j++)
		{
			if(p[0]==w[i][1]&&p[1]==w[j][0])
			{
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}
