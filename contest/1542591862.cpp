#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
#define maxn 106
using namespace std;
char s[5],a[maxn][5];
int n;
int main(){
//	freopen("a.in","r",stdin);
//	freopen("a.out","w",stdout);
	scanf("%s",s+1);scanf("%d",&n);getchar();
	for(int i=1;i<=n;i++)scanf("%s",a[i]+1),getchar();
	for(int i=1;i<=n;i++)
	 for(int j=1;j<=n;j++){
	 	if(a[i][1]==s[1]&&a[i][2]==s[2]){
	 		printf("YES");return 0;
		 }
		if(a[i][2]==s[1]&&a[j][1]==s[2]){
			printf("YES");return 0;
		}
	 }
	printf("NO");
	return 0;
}
