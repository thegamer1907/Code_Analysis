#include<stdio.h>
#include<string.h>
int main()
{
	char s[100005];
	scanf("%s",s);
	int n;
	scanf("%d",&n);
	int sum[strlen(s)+2];
	for(int i=0;i<strlen(s);i++)
	{
	   if(s[i+1]==s[i])sum[i+1]=sum[i]+1;
	   else sum[i+1]=sum[i];
	}
	int l,r;
    for(int i=0;i<n;i++)
	{
	  scanf("%d %d",&l,&r);
      printf("%d\n",sum[r-1]-sum[l-1]);
	}
 } 