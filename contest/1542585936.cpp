#include<cstdio>
#include<stdlib.h>
using namespace std;
char s[100][100],nor[100];
int main()
{
	int n;
	scanf("%s%d",nor,&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",s[i]);
		if(nor[0]==s[i][0]&&nor[1]==s[i][1]) return printf("YES")*0;
		for(int j=1;j<=i;j++)
		{
			if((s[i][1]==nor[0]&&s[j][0]==nor[1])||(s[i][0]==nor[1]&&s[j][1]==nor[0])) return printf("YES")*0;
		}
	}
	printf("NO");
	return 0;
}