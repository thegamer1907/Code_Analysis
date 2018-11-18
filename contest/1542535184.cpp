#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m;
char s[105][3],ans[3];
bool flag=0;
int main()
{
    int i,j;
    scanf("%s",ans);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	scanf("%s",s[i]);
	if(strcmp(s[i],ans)==0)flag=1;
    }
    for(i=1;i<=n;i++)
    {
	if(s[i][1]==ans[0])
	{
	    for(j=1;j<=n;j++)
	    {
		if(s[j][0]==ans[1])flag=1;
	    }
	}
    }
    if(flag==0)printf("NO\n");
    else printf("YES\n");
    return 0;
}