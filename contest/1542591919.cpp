#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;
char s[110][5];
int n;
int main()
{
	scanf("%s",s[0]+1);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",s[i]+1);
		if(s[0][1]==s[i][1]&&s[0][2]==s[i][2]){printf("YES");return 0;}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(s[i][2]==s[0][1]&&s[j][1]==s[0][2])
			{
				printf("YES");
				return 0;
			}
	printf("NO");
}