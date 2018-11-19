#include <cstdio>
using namespace std;
char s[1100][3],s1,s2;
int i,j,k,n,m,x,y,t;
int main(){
	s1=getchar();s2=getchar();
	scanf("%d\n",&n);for (i=1;i<=n;i++)gets(s[i]+1);
	for (i=1;i<=n;i++){
		if (s1==s[i][1]&&s2==s[i][2]){printf("YES\n");return 0;}
		if (s1==s[i][2]){
			for (j=1;j<=n;j++)
				if (s[j][1]==s2){
					printf("YES\n");
					return 0;
				}
		}
	}
	printf("NO\n");
	return 0;
}
