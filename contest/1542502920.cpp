#include <stdio.h>
#include<string.h>
char a[120][3];
int main()
{
	char s[2]; 
	int n;
	bool f[26][2];
	while(~scanf("%s",s))
	{
		memset(f,0,sizeof(f));
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%s",a[i]);
		}
		bool ans=false;
		for(int i=1;i<=n;i++)
		{
			f[a[i][0]-'a'][0]=1;
			f[a[i][1]-'a'][1]=1;
			if((a[i][0]==s[0]&&a[i][1]==s[1])||(a[i][1]==s[0]&&a[i][0]==s[1]))ans=true;
		}
		if(f[s[1]-'a'][0]&&f[s[0]-'a'][1])ans=true;
		if(ans)printf("YES\n");
		else printf("NO\n");
	}
}