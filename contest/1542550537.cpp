#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
char ans[5];
char s[5];
bool flag1,flag2;
int main()
{
	scanf("%s",ans);
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%s",s);
		if(s[1]==ans[0]) flag1=1;
		if(s[0]==ans[1]) flag2=1;
		if(s[0]==ans[0]&&s[1]==ans[1]){flag1=1;flag2=1;}
		//printf("%d %d\n",flag1,flag2);
	}
	if(flag1&&flag2){ printf("YES\n");return 0;}
	else printf("NO\n");
return 0;
}

     		 		  		   	 			   	 				