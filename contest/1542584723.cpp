#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
const int maxn=105;
char pw[2],words[maxn][2];
int main()
{
	int n;
	for(int i=0;i<2;i++)
	{
		scanf("%c",&pw[i]);
	}
	//scanf("\n");
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		scanf("\n");
		for(int j=0;j<2;j++)
		{
			scanf("%c",&words[i][j]);
		}
		/*for(int j=0;j<2;j++)
		{
			printf("%c",words[i][j]);
		}*/
	}
	/*printf("\n");
	for(int i=0;i<2;i++)
	{
		printf("%c",pw[i]);
	}
	printf("\n");
	printf("%d\n",n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%c",words[i][j]);
		}
		printf("\n");
	}*/
	//printf("%c %c",words[n-1][0],words[n-1][1]);
	bool f1=0,f2=0,f3=0;
	for(int i=0;i<n;i++)
	{
		if((words[i][0]==pw[0])&&(words[i][1]==pw[1]))
		{
			f1=1;break;
		}
		if(words[i][1]==pw[0])f2=1;
		if(words[i][0]==pw[1])f3=1;
		if(f2&&f3)
		{
			f1=1;break;
		}
	}
	if(f1)printf("yes");
	else printf("no");
	return 0;
}