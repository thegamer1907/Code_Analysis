#include<cstdio>
#include<string>
using namespace std;
const int maxn=105;
int n;
char s[maxn][3],ans[3];
int main(){
	scanf("%s",ans+1);
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%s",s[i]+1);
	for (int i=1;i<=n;i++)
	for (int j=1;j<=n;j++) {
		if (s[i][1]==ans[1]&&s[i][2]==ans[2]) {printf("YES\n"); return 0;}
		if (s[j][1]==ans[1]&&s[j][2]==ans[2]) {printf("YES\n"); return 0;}
		if (s[i][2]==ans[1]&&s[j][1]==ans[2]) {printf("YES\n"); return 0;}
	}
	printf("NO\n");
	return 0;
}
