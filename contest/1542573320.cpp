#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;
const int MAXN=133;
char s[MAXN][13];
int n;


int main()
{
	scanf("%s",s[0]);	
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%s",s[i]);
		if(s[i][0]==s[0][0]&&s[i][1]==s[0][1])
		{
			printf("YES");
			return 0;
		}
	}
	for(int i=1;i<=n;++i)if(s[i][0]==s[0][1])
	{
		for(int j=1;j<=n;++j)
		{
			if(s[j][1]==s[0][0])
			{
				printf("YES");
				return 0;
			}
		}
	}
	printf("NO");
	return 0;
}