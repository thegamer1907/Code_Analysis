#include<cstdio>
using namespace std;
int n;
char ch[5],ans[105][3];
int main(){
	scanf("%s",ch);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%s",ans[i]);
	for(int i=1;i<=n;i++)if(ans[i][0]==ch[0]&&ans[i][1]==ch[1]){puts("YES");return 0;}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			
		//	if(i==j)continue;
			if(ans[i][1]==ch[0]&&ans[j][0]==ch[1]){puts("YES");return 0;}
		}
	puts("NO");
}