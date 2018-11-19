#include <cstdio>
#include <cstring>
using namespace std;
int n;
char s[110][100],c[110];
main()
{
	scanf("%s",c);
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
		scanf("%s",s[i]);
	for (int i=1;i<=n;i++)
	{
		if (s[i][0]==c[0] && s[i][1]==c[1])
		{
			puts("YES");
			return 0;
		}
		if (s[i][0]==c[1] && s[i][1]==c[0])
		{
			puts("YES");
			return 0;
		}
		for (int j=1;j<=n;j++)
			if (i!=j)
			{
				if (s[i][0]==c[1] && s[j][1]==c[0])
				{
					puts("YES");
					return 0;
				}
				if (s[i][1]==c[0] && s[j][0]==c[1])
				{
					puts("YES");
					return 0;
				}
			}
	}
	puts("NO");
}