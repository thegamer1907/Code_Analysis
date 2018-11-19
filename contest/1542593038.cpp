#include<cstdio>
#include<cstring>
using namespace std;
char st[10],word[10];
bool flag1,flag2;
int n;
int main()
{
	int i,j;
	scanf("%s",st+1);
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%s",word+1);
		if (st[1]==word[1]&&st[2]==word[2])
		{
			printf("YES");
			return 0;
		}
		if (st[2]==word[1])
		  flag1=true;
		if (st[1]==word[2]) 
		  flag2=true;
		if (flag1&&flag2)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}
