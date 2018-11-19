#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{
	char s[110][5];
	int n;
	int flag;
	char ss[5];
	scanf("%s%d",ss,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		s[i][0]=tolower(s[i][0]);
		s[i][1]=tolower(s[i][1]);
	}
	flag=0;
	for(int i=0;i<n;i++)
	{
		if(s[i][0]==ss[0]&&s[i][1]==ss[1])
			flag=1;
		if(s[i][1]==ss[0])
		{
			for(int j=0;j<n;j++)
			{
				if(s[j][0]==ss[1])
					flag=1;
			}
		}
	}
	flag==1?printf("YES\n"):printf("NO\n");
	return 0;
}