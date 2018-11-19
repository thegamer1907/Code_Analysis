#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char sh[3],s[105][5];
	int n,f=0;
	scanf("%s%d",sh,&n);
	for(int i=0;i<n;i++)
	scanf("%s",s[i]);
	for(int i=0;i<n&&f==0;i++)
	{
		if(s[i][0]==sh[0]&&s[i][1]==sh[1])
		{
			f=1;
		}
		else if(s[i][0]==sh[1])
		{
			for(int j=0;j<n;j++)
			{
				if(s[j][1]==sh[0])
				{
					f=1;break;
				}
			}
		}
		else if(s[i][1]==sh[0])
		{
			for(int j=0;j<n;j++)
			{
				if(s[j][0]==sh[1])
				{
					f=1;break;
				}
			}
		}
	}
	if(f)printf("YES\n");
	else printf("NO\n");
	return 0;
}