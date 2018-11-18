#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
char s[100][5],str[5];
int main(void)
{
	int n,flag=0;
	scanf("%s",str+1);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%s",s[i]+1);
	for(int i=1;i<=n;i++)
	{
		if(s[i][1]==str[1] && s[i][2]==str[2])
			flag=1;
		for(int j=1;j<=n;j++)
			if(s[i][2]==str[1] && s[j][1]==str[2])
				flag=1;
	}
	if(flag) printf("YES\n");
	else printf("NO\n");
	return 0;
}