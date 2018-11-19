#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
#include<map>
using namespace std;
#define YES puts("YES")
#define NO puts("NO")

int n;
char s[2],t[110][2];

int main()
{
	scanf("%s",s);
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%s",t[i]);
		if(t[i][0]==s[0]&&t[i][1]==s[1]) 
		{
			YES;return 0;
		}
	}
	for(int i=1;i<=n;++i)
	for(int j=1;j<=n;++j)
	{
		if(t[i][1]==s[0]&&t[j][0]==s[1]) 
		{
			YES;return 0;
		}
	}
	NO;
	return 0;
}