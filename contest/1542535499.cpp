#include<cstdio>
#include<cstring>
int n,ans,x,y;
char a[5],b[5];
int main()
{
	gets(a);
	scanf(" %d",&n);
	for(int i=0;i<=n;++i)
	{
		gets(b);
		if(a[0]==b[0]&&a[1]==b[1])ans=1;
		if(a[0]==b[1])x=1;
		if(a[1]==b[0])y=1;
	}
	if((x&&y)||ans)printf("YES");
	else printf("NO");
	return 0;
}
  		 	 		   		  	 				   			  	