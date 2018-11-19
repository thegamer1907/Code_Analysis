#include<cstdio>
#define LL long long 
using namespace std;
char s[3];
char ss[110][3];
int n;
int main()
{
	int i;
	scanf("%s",s+1);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%s",ss[i]+1);
	for(i=1;i<=n;i++)
		if(ss[i][1]==s[1]&&ss[i][2]==s[2]){
			printf("YES\n");return 0;
		}
	for(i=1;i<=n;i++)
		if(ss[i][2]==s[1])
			break;
	if(i==n+1){
		printf("NO\n");
		return 0;
	}
	for(i=1;i<=n;i++)
		if(ss[i][1]==s[2])
			break;
	if(i==n+1){
		printf("NO\n");
		return 0;
	}
	printf("YES\n");
	return 0;
}
