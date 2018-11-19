#include<cstdio>
#include<cstring>
#include<algorithm>
#define nn 102

using namespace std;

int n;
char s0[3],s[nn][3];

int main()
{
	scanf("%s",s0);
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%s",s[i]);
		if(s0[0]==s[i][0]&&s0[1]==s[i][1])
		{
			printf("YES"); return 0;
		}
	}
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
		{
			if(s0[0]==s[i][1]&&s0[1]==s[j][0])
			{
				printf("YES"); return 0;
			}
		}
	printf("NO");

	return 0;
}
