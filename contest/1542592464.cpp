#include<stdio.h>
#include<string.h>
using namespace std;
char ans[3],p[102][3];
int main()
{
	int n,i,j,flag;
	while(scanf("%s",&ans)!=EOF){
		scanf("%d",&n);
		flag=0;
		for(i=0;i<n;i++)
		{
			scanf("%s",&p[i]);
			if(strcmp(p[i],ans)==0)
				flag=1;
		}
		if(flag==1){
			printf("YES\n");
			continue;
		}
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(p[i][0]==ans[1]&&p[j][1]==ans[0]){
					flag=1;
					break;
				}
		printf("%s\n",flag? "YES":"NO");
	}
	return 0;
}