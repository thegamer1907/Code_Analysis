#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
char s[150][10];
char t[10];
int n;
int main(){
	scanf("%s",t);
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%s",s[i]);
	for (int i=1;i<=n;i++) if (s[i][0]==t[0] && s[i][1]==t[1]){
		printf("YES\n");
		return 0;
	}
	for (int i=1;i<=n;i++) 
		for (int j=1;j<=n;j++) if (s[i][1]==t[0] && s[j][0]==t[1]){
			printf("YES\n");
			return 0;
		}
	printf("NO\n");
	return 0;
}