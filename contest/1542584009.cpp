#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,a,b,f;
	char s[5],t[110][5];
	while(~scanf("%s",s))
	{
		scanf("%d",&n);
		for(i=0;i<n;i++) scanf("%s",t[i]);
		f=a=b=0;
		for(i=0;i<n;i++)
		{
			if(strcmp(t[i],s)==0) f++;
			if(t[i][0]==s[1]) a++;
			if(t[i][1]==s[0]) b++;			
		}
		if(f||(a&&b)) printf("YES\n");
		else printf("NO\n");		
	}
	return 0;
}